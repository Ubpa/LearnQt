# 01_01. HelloWorld

## 1. 建立项目

文件->新建->项目->Visual C++->测试->`Qt GUI Application` 

- 名称：01_01_HelloWorld
- 位置：path\to\dir
- 解决方案名称：projects

勾选**为解决方案创建目录**，点击**确定** 

- 在`Qt GUI Application Wizard`中，点击**Next>** 
- 选择所需模块（相当于添加`lib`），默认即可，点击 **Next>** 
- Class Name为`HelloWorld`，其余的也这么会发生相应的修改，勾选 **Add default application icon**，点击 **Finish** 

解决方案资源管理器中，右键项目 `01_01_HelloWorld`，点击 **Qt Project Settings**，设置好 **Version** 

运行项目，看到一个窗口

## 2. 源文件

源文件的解释放在了代码的注释里边

## 3. 其他文件

### 2.1 HelloWorld.qrc

资源说明文件，通过编辑该文件可以添加资源，生成时会在 `GeneratedFiles` 中产生相应的 `qrc_HelloWorld.cpp` 

### 2.2 HelloWorld.ui

UI说明文件，生成时会在 `GeneratedFiles` 中产生相应的 `ui_HelloWorld.h` 

在 vs2017 的项目中双击该文件，会进入 **Qt Designer** 

操作很简单，从左边的 Widget Box 拖动 widget 到窗口中即可，右边的属性编辑器可以修改属性

拖个 `Push Button` 进来，修改文本为 `HelloWorld`。

## 4. 运行

运行项目，看到一个 `HelloWorld` 的 `button` 

