# 02_03. 信号和槽



在面向对象的编程方法中，都会创建很多的实例，每个实例都是单独的，要想每个实例能够协同合作，那么就会需要一种对象间**传递消息**的机制，在很多框架中都采用**回调函数**来进行对象间信息传递。

Qt开发了一种消息传递机制，即**信号**和**槽**。

![img](assets/v2-f58ee9dc0569b5f9af5615a9d04fe8f5_hd.jpg)

## 1. 信号

当一个对象的内部状态发生改变时，如果其它对象对它的状态需要有所反应，这时就应该让这个类发出状态改变的信号。

声明信号使用**signals**关键字

发送信号使用**emit**关键字

要点如下

- 所有的信号声明都是**公共**的，所以Qt规定不能在`signals`前面加`public`,`private`, `protected`。
- 所有的信号都**没有返回值**，所以返回值都用`void`。
- 所有的信号都**不需要定义**。
- 必须直接或间接**继承**自`QOBject`类，并且开头私有声明包含`Q_OBJECT`。
- 当一个信号发出时，会**立即执行其槽函数**，**等待**槽函数执行完毕后，才会执行后面的代码，如果一个信号链接了多个槽，那么会等所有的槽函数执行完毕后才执行后面的代码，**槽函数的执行顺序是按照它们链接时的顺序执行的**。
- 在链接信号和槽时，可以设置**链接方式**为：在发出信号后，**不需要等待**槽函数执行完，而是直接执行后面的代码。
- 发出信号使用`emit`关键字。
- 信号参数的个数**不得少于**槽参数的个数。

## 2. 槽

槽其实就是普通的C++函数，它唯一特点就是能和信号链接。当和它链接的信号被发出时，这个槽就会被调用。

声明槽可以使用：**public/protected/private slots:** 

以上是Qt4的做法，在Qt5中你也不需要使用这些声明，每个函数都可以被当作是槽函数，而且**还可以使用Lambda表达式来作为槽**。不过为了程序的可读性，我还是推荐槽函数要声明一下。

## 3. 连接

使用`connect`函数连接信号和槽，有两种方式

### 3.1 方式一

**接口** 

```c++
static QMetaObject::Connection connect(
    const QObject *sender, //信号发送对象指针
    const char *signal,    //信号函数字符串，使用SIGNAL()
    const QObject *receiver, //槽函数对象指针
    const char *member, //槽函数字符串，使用SLOT()
    Qt::ConnectionType = Qt::AutoConnection//连接类型，一般默认即可
);
```

**调用示例** 

```c++
connect(pushButton, SIGNAL(clicked()), dialog,  SLOT(close()));
```

### 3.2 方式二

**接口** 

```c++
static QMetaObject::Connection connect(
    const QObject *sender, //信号发送对象指针
    const QMetaMethod &signal,//信号函数地址
    const QObject *receiver, //槽函数对象指针
    const QMetaMethod &method,//槽函数地址
    Qt::ConnectionType type = Qt::AutoConnection//连接类型，一般默认即可
);
```

**调用示例** 

```c++
connect(pushButton, QPushButton::clicked, dialog,  QDialog::close);
```

## 4. 信号槽示例

参看 `projects / 02_03_Signal_Slots_01` 

