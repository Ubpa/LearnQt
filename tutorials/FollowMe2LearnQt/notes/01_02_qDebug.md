# 01_02. qDebug

在项目的开发中，当我们调试程序时，最常用的就是打印信息了，Qt为我们提供了非常方便的打印信息类`QDebug`。

## 1. 常用用法

可以使用`qDebug`像使用`std::cout`一样，直接在重定向操作符(`<<`)后面加上我们的字符串即可。

```c++
qDebug() << "Hello" << 123;
```

qDebug()还可以打印Qt中的基本类型

以上的用法都必须包含头文件QDebug

```c++
#include <QDebug>
```

实际`qDebug`是包含在`qlongging.h`中的，因为我们的Qt程序，一般都会包含`QObject`，所以这里的头文件包含了`QObject`，从而我们就不必要额外的再添加`QDebug`头文件。

## 2. 为自定义类型添加 qDebug() 打印

```cpp
QDebug operator<<(QDebug debug, const Class &c)
{
    debug << ...;
    return debug;
}
```

## 3. 消除 qDebug() 打印

项目右键 -> 属性 -> C/C++ -> 预处理器 -> 预处理器定义 -> 添加宏 `QT_NO_DEBUG_OUTPUT` 

可以在 `Release` 中这么设置