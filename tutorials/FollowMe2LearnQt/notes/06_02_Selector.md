# 06_02. 选择器

所谓选择器，就是指定你所设置的样式对哪个或哪些控件起作用。

## 1. 类型选择器

使用**控件类名**作为选择器

> 示例
>
> ```css
> QPushButton{background-color:white;}
> ```

## 2. 通用选择器

通用选择器使用“`*`”，匹配所有控件。

> 示例
>
> ```css
> *{color:blue;}
> ```

## 3. 组选择器

如果想要为多种类型的控件设置同样的样式，则可以使用组选择器，类型之间使用**逗号**隔开

> 示例
>
> ```css
> QPushButton, QLabel{background-color:white;}
> ```

## 4. 后代选择器

有时，用户希望选择器匹配控件树中另一个控件的后代(例如，“匹配由QFrame包含的QComboBox”)。祖先与后代之间用**空格**隔开。

> 示例
>
> ```css
> QGroupBox QComboBox{background-color:red;}
> ```

## 5. 子选择器

如果只想设置某个控件的儿子的样式，而不是其所有子孙后代，则可以使用子选择器。父亲与儿子之间用大于号“`>`”隔开。

> 示例
>
> 选择最外层的QWidget，改变样式表为
>
> ```css
> QGroupBox > QComboBox {
>     background-color: red;
>     border: 1px solid;
> }
> ```
>
> 效果如下
>
> ![img](assets/v2-bfd1c49bbc666e3444bbd46f93767623_hd.jpg)

注意子选择器和后代选择器的区别。

## 6. 属性选择器

属性选择符有四种匹配方式，属性值必须是**标识符**或**字符串**:

- 属性匹配`[att]` 

  当控件设置“att”属性时匹配，无论该属性的值是多少。

- 完全匹配`[att = val]` 

  当控件的“att”属性值完全为“val”时匹配。

- 部分值匹配`[att ~= val]` 

  当控件的“att”属性值是**空格分隔**的“单词”列表时，**其中一个**就是“val”时就可匹配。如果使用此选择器，则该值中的**单词必须不包含空格**(因为它们是由空格分隔的)。

- 开头匹配`[att | = val]` 

  当控件的“att”属性值是一个连字符(“`-`”)分隔的“单词”列表时，以“val”开头。匹配总是从属性值的**开始**处开始。

> 示例
>
> ![img](assets/v2-4c1e08e52345bb192d2ae50fa25ce71d_hd.jpg)
>
> ![img](assets/v2-74f1d7d1e4d15da1d362dc27ddb40e2c_hd.jpg)

## 7. 动态属性选择器

Qt中的动态属性也可以作为选择器。

> 示例
>
> ![img](assets/v2-066f60d101323f3478c49d3c91f1d54a_hd.jpg)
>
> ![img](assets/v2-de419743bab608bb2437421efc2eea5f_hd.jpg)

## 8. 点号类型选择器

点号选择器类似于属性选择器的“[att~=val]”，例如`.QPushButton`等同于`*[class~="QPushButton"]`。

## 9. id选择器

如果只想为某个单一的控件设置样式，则可以使用id选择器，“`#`”号后面跟上这个控件的`ObjectName`即可。

> 示例
>
> ```css
> QPushButton#okButton{
>     background: lightblue;
> }
> ```
>
> ![img](assets/v2-dd487266e75cbeab86bfff2c362bcab4_hd.jpg)

