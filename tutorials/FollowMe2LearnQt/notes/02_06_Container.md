# 02_06. 容器控件

所谓容器控件，顾名思义，就是在ui中，可以将其他控件拖入到容器控件上。主要的容器控件有：`QWidget`，`QFrame`，`QScrollArea`，`QGroupBox`，`QTabWidget`，`QToolBox`，`QStackedWidget`，`QDockWidget`。

> `QWidget`已经讲过，`QDockWidget`留在讲主窗口（`QMainWindow`）时再介绍。

2 参考示例 `projects/02_06_Container_01` 

1, 2, 3 参考示例 `projects/02_06_Container_02` 

4, 5 参考示例  `projects/02_06_Container_03` 

## 1. QFrame

### 1.1 描述

https://doc.qt.io/qt-5/qframe.html#details

`QFrame`其实就是一个带边框的`QWidget`，既然是边框，那么边框就会有**宽度**，**阴影**和**形状**，从而它就会使得从视觉上有一种**突起**或**凹陷**的效果。

![img](assets/v2-3fdc1056d09f46ac6cb65ae5b332894d_hd.jpg)

### 1.2 属性

- **frameRect** : QRect
- **frameShadow** : Shadow
- **frameShape** : Shape

- **frameWidth** : const int
- **lineWidth** : int
- **midLineWidth** : int

## 2. QScrollArea

### 2.1 描述

https://doc.qt.io/qt-5/qscrollarea.html#details

当一个窗口很大时，在显示器上无法显示整个窗口，那么Qt提供了一个叫作滚动窗口类`QScrollArea`，它提供了一个垂直和水平的滚动条，用以浏览整个窗口。

`QScrollArea`（滚动区域）继承自`QAbstractScrollArea` 

> 在Qt中，凡是带有`Abstract`字样的都是抽象类，但抽象类并不一定全是带有`Abstract`字样。

滚动区域在它的中心提供了一个视口，而窗口就通过该视口显示，可以通过设置滚动条的显隐策略来控制其显隐。

### 2.2 属性

- **horizontalScrollBarPolicy** : Qt::ScrollBarPolicy
- **sizeAdjustPolicy** : SizeAdjustPolicy
- **verticalScrollBarPolicy** : Qt::ScrollBarPolicy

**水平滚动策略，垂直滚动策略**：

- `Qt::ScrollBarAsNeeded`：当视口无法完全显示窗口时，显示滚动条，否则不显示。
- `Qt::ScrollBarAlwaysOff`：不显示滚动条。
- `Qt::ScrollBarAlwaysOn`：无论如何都显示滚动条。

**SizeAdjustPolicy**：

- `QAbstractScrollArea::AdjustIgnored`：视口改变大小，滚动区域并不改变大小
- `QAbstractScrollArea::AdjustToContents`：视口改变大小，滚动区域也改变大小
- `QAbstractScrollArea::AdjustToContentsOnFirstShow`：在第一次显示时就改变滚动区域的大小

## 3. QGroupBox

### 3.1 描述

https://doc.qt.io/qt-5/qgroupbox.html#details

当我们的多个控件表示同一类操作或显示时，我们希望将这些控件用一个矩形框包起来，`QGroupBox`就提供了这样的功能。

### 3.2 属性

- **alignment** : Qt::Alignment
- **checkable** : bool
- **checked** : bool

- **flat** : bool
- **title** : QString

**标题位置 alignment**：

- Qt::AlignLeft：左侧
- Qt::AlignRight：右侧
- Qt::AlignHCenter：中间
- Qt::AlignJustify：选择合适的空间。

**是否需要扁平化处理flat**：

- true：只显示标题处的一行直线
- false：显示整个矩形框。

**是否可选checkable，已经被选中**：

- 标题旁有一个勾选框，当被勾选时QGroupBox为可用状态，否则不可用。

**标题title** 

## 4. QTabWidget

https://doc.qt.io/qt-5/qtabwidget.html#details

## 5. QToolBox

https://doc.qt.io/qt-5/qtoolbox.html#details

