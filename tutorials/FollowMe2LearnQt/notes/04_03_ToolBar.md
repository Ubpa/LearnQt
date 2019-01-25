# 04_03. ToolBar

## 1. 描述

https://doc.qt.io/qt-5/qtoolbar.html#details

The [QToolBar](https://doc.qt.io/qt-5/qtoolbar.html) class provides a movable panel that contains a set of controls.

## 2. 属性

- **allowedAreas** : Qt::ToolBarAreas
- **floatable** : bool
- **floating** : const bool
- **iconSize** : QSize
- **movable** : bool
- **orientation** : Qt::Orientation
- **toolButtonStyle** : Qt::ToolButtonStyle

QToolBar继承自QWidget。

另外，

- 可以通过addWidget，insertWidget, 添加自定义的窗口。
- 可以使用addSeparator，insertSeparator添加间隔线，从而分组。

### 2.1 allowedAreas

保存工具栏可放置在哪个位置（相对于中心窗口）

- Qt::LeftToolBarArea 0x1 可放置在左侧
- Qt::RightToolBarArea 0x2 右侧
- Qt::TopToolBarArea 0x4上侧
- Qt::BottomToolBarArea 0x8 下侧
- Qt::AllToolBarAreas 0xf 所有
- Qt::NoToolBarArea 0 不能放置

这里每个枚举的值分别为，0x1 0x2等，这表明这些枚举值可以使用或“|”运算符，即可以`Qt::LeftToolBarArea|Qt::RightToolBarArea`组合，表明工具栏可以被放置在左侧或者右侧。

在平时编程中如果遇到类似的情况，我们也可以使用类似的方法。

`Qt::ToolBarAreas`是一个`QFlags<ToolBarArea>`类型，当我们遇到存在“或”意义的枚举类型时，最好可以使用`Q_DECLARE_FLAGS()`宏将其声明为QFlags类型，这样会给我们带来很多方便。

### 2.2 floatable

如果为true，则工具栏可以用鼠标拖拽出来，变成一个独立的小窗口。

### 2.3 floating

如果为true，则说明工具栏已经用鼠标拖拽出来，变成了一个独立的小窗口。

### 2.4 iconSize 

工具栏图标大小

### 2.5 movable 

是否可以被移动

这个属性保存工具栏是否可以被移动。

如果为false，左侧的可移动标识会隐藏掉。

### 2.6 orientation

工具栏方向

- `Qt::Horizontal` 水平
- `Qt::Vertical` 垂直

### 2.7 toolButtonStyle

工具栏一般由图标和文字组成，用于醒目的提醒用户该按钮的功能，这个样式就定义了图标和文字的配合方式。

- `Qt::ToolButtonIconOnly` 只显示图标
- `Qt::ToolButtonTextOnly` 只显示文字
- `Qt::ToolButtonTextBesideIcon` 在图标右侧显示文字
- `Qt::ToolButtonTextUnderIcon` 在图标下方显示文字
- `Qt::ToolButtonFollowStyle` 根据StyleHint中的设定而显示