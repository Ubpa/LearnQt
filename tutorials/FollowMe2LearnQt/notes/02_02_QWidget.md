# 02_02. QWidget

https://doc.qt.io/qt-5/qwidget.html

## 1. 属性

### 1.2 QWidget的几何属性

![img](assets/v2-b2601bff061435c50a57035de0b826db_hd.jpg)

```
setGeometry(0, 0, 400, 300);
```

### 1.2 窗口标识

windowFlags属性

通过调用`setWindowFlags(Qt::WindowFlags)`来设置窗口类型和窗口标识。

常用窗口标识

- `Qt::SplashScreen` 在还没有展示出主界面前的启动画面
- `Qt::FramelessWindowHint` 隐藏标题栏，并且去掉窗口的边框，窗口不能移动和缩放。
- `Qt::CustomizeWindowHint` 隐藏标题栏，不会去掉窗口的边框，窗口不能移动，但可以缩放。
- `Qt::WindowStaysOnTopHint` 使窗口始终处于最顶部。类似于播放器中的总在最前功能。

### 1.3 其他属性

- acceptDrops：接受放下事件。
- autoFillBackground：如果将这个属性设置为true，Qt将在调用paintEvent之前填充背景。可以使用调色板来进行填充。
- enabled：窗口是否可用，如果被设置为false，则不会接收用户操作，同时其子控件也不接收用户操作。
- focus：是否获得焦点。
- modal：是否为模态窗口，关于模态窗口，会在QDialog中讲解。
- mouseTracking：是否**跟踪鼠标**，默认为不跟踪。默认情况时，当鼠标按下后才会跟踪鼠标移动，如果被设置为true，在鼠标不按下时，也跟踪鼠标移动。
- palette：调色板。
- toolTip：鼠标悬停时的提示信息。
- toolTipDuration：鼠标悬停时显示提示信息持续时间。
- visible：是否可见。
- windowOpacity：窗口透明度0-1。
- windowTitle：窗口标题。

## 2. 示例

```c++
myQWidget::myQWidget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//设置窗口的背景颜色
	setAutoFillBackground(true);
	QPalette pa = this->palette();
	pa.setBrush(QPalette::Background, QBrush(Qt::green));
	setPalette(pa);

	//设置窗口透明度
	setWindowOpacity(0.9);

	//设置窗口标题
	setWindowTitle("窗口属性");

	//设置悬停提示
	setToolTip("悬停");

	//重设大小
	resize(600, 400);

	//移动
	move(0, 0);
}
```

