# 安装 Qt

这里开发环境选择的是 vs2017 + Qt

https://www.qt.io/download

选择 **Go open Source** 

在组件中选择 

- `Qt` -> `Qt 5.12.0`(选最新版即可) -> `MSVC 2017 32-bit & 64 bit` 
- `Qt` -> `Qt 5.12.0`(选最新版即可) -> `Source` 
- `Qt` -> `Tools`-> `Qt Creator ...` 

工具->扩展和更新->联网->搜索Qt，安装 **Qt Visual Studio Tools** 

重启vs2017完成安装

Qt VS Tools->Qt Options->Add

添加

Version name：`mscv2017_32` 

Path：`path-to-Qt\5.12.0\msvc2017` 

以及

Version name：`mscv2017_64` 

Path：`path-to-Qt\5.12.0\msvc2017_64` 

