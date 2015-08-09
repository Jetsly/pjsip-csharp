# pjsip-csharp
build pjsip and use from C#

#### 一、编译
##### 1.	下载[`PJSIP`](http://www.pjsip.org/download.htm)
##### 2.	用`VS`打开`pjproject-vs8.sln`解决方案
##### 3.	在`pjlib\include\pj`目录下添加`config_site.h`文件

#### 二、转换为`DLL`可用
##### 1. 安装[`SWIG`](http://swig.org/)
##### 2. 打开`pjsip-apps\src\swig`目录,并且创建`csharp`文件夹，然后进去执行
```
swig -I../../../../pjlib/include -I../../../../pjlib-util/include -I../../../../pjmedia/include -I../../../../pjsip/include -I../../../../pjnath/include -w312 -c++ -csharp -o pjsua2_wrap.cpp ../pjsua2.i
```
##### 3. 创建`Win32 DLL`项目`pjsua2`
##### 4. 设置`pjsua2`项目属性
###### 4.1 常规->输出目录改成
```
.\output\$(ProjectName)-$(TargetCPU)-$(PlatformName)-vc$(VSVer)-$(Configuration)\
```
###### 4.2 C/C++ -> 常规 -> 附加包含目录改成
```
..\pjsip\include;..\pjlib\include;..\pjlib-util\include;..\pjmedia\include;..\pjnath\include;%(AdditionalIncludeDirectories)
```
###### 4.3 链接器-> 常规 ->  附加库目录改成
```
..\pjsip\lib;..\pjlib-util\lib;..\pjlib\lib;..\pjnath\lib;..\pjmedia\lib;..\third_party\lib;%(AdditionalLibraryDirectories)
```
###### 4.3 链接器-> 输入 -> 附加依赖性添加
```
pjlib-i386-Win32-vc8-Debug.lib;pjlib-util-i386-Win32-vc8-Debug.lib;pjmedia-audiodev-i386-Win32-vc8-Debug.lib;pjmedia-codec-i386-Win32-vc8-Debug.lib;pjmedia-i386-Win32-vc8-Debug.lib;pjmedia-videodev-i386-Win32-vc8-Debug.lib;pjnath-i386-Win32-vc8-Debug.lib;pjsip-core-i386-Win32-vc8-Debug.lib;pjsip-simple-i386-Win32-vc8-Debug.lib;pjsip-ua-i386-Win32-vc8-Debug.lib;pjsua2-lib-i386-Win32-vc8-Debug.lib;pjsua-lib-i386-Win32-vc8-Debug.lib;libbaseclasses-i386-Win32-vc8-Debug.lib;libg7221codec-i386-Win32-vc8-Debug.lib;libgsmcodec-i386-Win32-vc8-Debug.lib;libilbccodec-i386-Win32-vc8-Debug.lib;libmilenage-i386-Win32-vc8-Debug.lib;libportaudio-i386-Win32-vc8-Debug.lib;libresample-i386-Win32-vc8-Debug.lib;libspeex-i386-Win32-vc8-Debug.lib;libsrtp-i386-Win32-vc8-Debug.lib;wsock32.lib;ws2_32.lib;ole32.lib;dsound.lib;%(AdditionalDependencies)
```
##### 5. 添加 `pjsip-apps\src\swig\csharp`目录中的`pjsua2_wrap.cpp`文件以及头文件到项目中


#### 三、`C#`引用
##### 1. 创建`C#`类库`pjsua2_net`
##### 2. 添加所有`cs`文件从`pjsip-apps\src\swig\csharp`目录
##### 3. 修改`?`字符为`(int)'?'`

#### 四、错误集锦
##### 1. `cannot open include file 'afxres.h'`
```
//#include "afxres.h"
#include "WinResrc.h"
#define IDC_STATIC  -1
```
##### 2. `RuntimeLibrary` 不匹配项: 值`MTd_StaticDebug`不匹配值`MDd_DynamicDebug`
```
在工程上右键-》属性-》c/c++-》代码生成-》运行库
改成 多线程调试 (/MTd)
```
