# 02_09. 显示控件

示例参考 `projects/02_09_Displays` 

## 1. QLabel

标签控件可以用来显示文本，富文本，图片，动态图。

1 **alignment**：文字对齐方式。

这个属性已经在前面很多控件讲过了，这里就不赘述了。

默认为水平靠左，垂直居中。

2 **hasSelectedText**, **selectedText**：被选中的文字。

3 **indent**：缩进像素。

默认情况下，缩进是- 1。

4 **margin**：边距。

5 **openExternalLinks**：是否可以打开链接。

如果设置为true，将会调用QDesktopServices::openUrl()来打开链接。

如果设置为false，则会发出linkActivated信号。

6 **pixmap**：图片。

7 **scaledContents**：是否填充空间。

当启用后，如果标签显示一个图片，它将缩放图片以填充可用空间。

默认为false。

8 **text**：文本。

文本将被解释为纯文本或富文本，这取决于文本格式设置。默认设置是Qt::AutoText。

如果已经设置了好友，则从新文本中更新快捷键。

9 **textFormat**：文本格式。

- Qt::PlainText：被解释为纯文本。
- Qt::RichText：被解释为富文本（html）
- Qt::AutoText：如果可以被解释成富文本，则解释为富文本，否则为纯文本。

10 **textInteractionFlags**：用户与标签的交互标识。

- Qt::NoTextInteraction：不与用户交互。
- Qt::TextSelectableByMouse：可以用鼠标选择，并使用上下文菜单或标准键盘快捷方式将其复制到剪贴板。
- Qt::TextSelectableByKeyboard：将显示一个文本光标，可以用键盘上的光标键选择文本。
- Qt::LinksAccessibleByMouse：链接可以被高亮显示并被鼠标激活。
- Qt::LinksAccessibleByKeyboard：链接用tab选中，然后激活进入。
- Qt::TextEditable：文本是完全可编辑的。
- Qt::TextEditorInteraction：TextSelectableByMouse | TextSelectableByKeyboard | TextEditable
- Qt::TextBrowserInteraction：TextSelectableByMouse | LinksAccessibleByMouse | LinksAccessibleByKeyboard

11 **wordWrap**：是否可换行，默认为false

