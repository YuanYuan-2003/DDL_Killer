#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int Count(char *argv);
void Copy(int count, char *argv);
void God(void);

int main(int argc, char *argv[])
{    
    printf("Welcome to DDL_Killer!\n");
    printf("Good Luck!\n");

    ShellExecuteA(NULL, "open", "https://learn.tsinghua.edu.cn/", NULL, NULL, SW_MAXIMIZE);

    if(argc > 1)
        Copy(Count(argv[1]), argv[1]);
    else
        God();

    system("pause");

    return 0;
}

int Count(char *argv)
{
    int count = 0;

    while(argv[count] != '\0')
        count++;

    return count;
}

void Copy(int count, char *argv)
{
    LPTSTR  lptstrCopy;
    HGLOBAL hglbCopy;

    OpenClipboard(GetOpenClipboardWindow());
    EmptyClipboard();

    hglbCopy = GlobalAlloc(GMEM_MOVEABLE, (count + 1) * sizeof(TCHAR));
    lptstrCopy = GlobalLock(hglbCopy);
    memcpy(lptstrCopy, argv, count * sizeof(TCHAR));
    lptstrCopy[count] = (TCHAR) 0;
    GlobalUnlock(hglbCopy);

    SetClipboardData(CF_TEXT, hglbCopy);

    CloseClipboard();
    
    return;
}

void God(void)
{
    FILE *fp;
    char *god;
    char c;
    int count = 0;

    if((fp = fopen(".\\God.txt", "r")) == NULL)
    {
        printf("Cannot Open God.txt!");
        return;
    }
    while(c = getc(fp), c != EOF && c != ' ' && c != '\n')
        count++;
    god = (char *)calloc(count + 1, sizeof(char));
    fclose(fp);

    fp = fopen(".\\God.txt", "r");
    fgets(god, count + 1, fp);
    Copy(count, god);
    free(god);
    fclose(fp);
}