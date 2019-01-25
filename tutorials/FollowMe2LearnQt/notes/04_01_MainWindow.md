

# 04_01. 主窗口程序

主窗口程序主要由菜单栏，工具栏，悬停窗口，中心窗口，状态栏组成。

针对主窗口的每一个组件，Qt都提供了相应的类

- 菜单栏：QMenu
- 工具栏：QToolBar
- 悬停窗口：QDockWidget
- 中心窗口：QWidget及其子类
- 状态栏：QStatusBar

## 1. 使用 ui 设计器创建主窗口程序

一个应用程序只能有一个菜单栏，但是有几个工具栏。

### 1.1 菜单

“文件(&F)” &符号表示F是快捷键，有快捷键的会在该字母下显示下划线。

![img](assets/v2-6af90a8d3ecfc47e7d7d6490952996b3_hd.jpg)

在子菜单中继续输入，如下图

![img](assets/v2-72db81780487b8f3c093445aed06c6dc_hd.jpg)

此时，我们看到在动作编辑器和对象编辑器中，多了一个action，我们改名为`actionNewFile`。

![img](assets/v2-5df6f460035ccb4cc4054e7e5521cb11_hd.jpg)

### 1.2 工具栏

工具栏可以被拖拽在中心窗口的四周，上下左右。

现在我们从动作编辑器中拖动`actionNewFile`到工具栏中。

![img](assets/v2-bae7a28a7ae8126a10ab7bb47642dc79_hd.jpg)

### 1.3 添加悬停窗口

DockWidget可以放在中心窗口的四周。

也可以关闭和再次打开DockWidget，DockWidget还可以悬停在主窗口上，它常常用来作小工具窗口。