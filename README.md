# DDL_Killer

> 作者：赵政源，清华大学行健书院，zhengyua21@mails.tsinghua.edu.cn

## 一、背景

- 清华大学“赶DDL”风盛行，而同学们因一时手抖、两眼蒙圈导致作业提交失败的惨剧也时常发生（作者本人便是如此）。~~为了让老师和助教不再为难于是否给补交的作业扣分，~~ 为了让同学们方便迅捷地提交作业，特推出应用程序“DDL_Killer”，以实现一键提交作业。

## 二、构思

- 本萌新希望设计一款桌面应用程序，终极目标是实现将作业文件拖入应用图标后自动提交。本项目将持续开发，欢迎大佬指教！

## 三、版本更新

- V0.1.0.20220626

    第一个版本！

    该版本为使用C语言编写的Windows桌面应用程序，由God.txt和DDL_Killer.exe两个文件组成。

    使用说明：若将作业文件拖入DDL_Killer.exe，程序将该文件的绝对路径复制到剪粘板，同时打开网络学堂登录页，后续提交作业操作由用户进行，不过在提交附件时可方便地将文件路径粘贴至上传附件时弹出的对话框，一定程度上降低了提交失败的风险。若直接运行DDL_Killer.exe，程序会将god.txt中的文本复制到剪粘板，同时打开网络学堂登录页。（至于god.txt中预先输入什么文本，懂得都懂doge）

    参考文档：
    <https://docs.microsoft.com/en-us/windows/win32/dataxchg/using-the-clipboard>