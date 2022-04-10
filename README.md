# hello-c-plus

## 编译
1. g++ **.cpp -o **


## boost

### 简介
1. 准标准库
2. [boost的功能模块简介](https://www.cnblogs.com/findumars/p/7257415.html)
### 安装boost
[Linux下安装 boost 库](https://www.cnblogs.com/zoneofmine/p/11041236.html) 
TODO 没有在/usr/local中发现boost

1. 在[boost官网](https://www.boost.org/)下载对应的压缩包
2. 解压压缩包 `tar -zxvf boost_1_77_0.tar.gz`
3. 配置 `cd boost_1_77_0`
   `./bootstrap.sh --with-libraries=all --with-python=/usr/bin/python3.9`
   `vim project-config.jam` 修改为`using python : 3.6 : /usr/bin/python3.6m : /usr/include/python3.6m : /usr/lib/python3.6 ;`
   `sudo ./b2`
   `sudo ./b2 install --with-python include="/usr/include/python3.9"`
   `sudo apt-get install boost-python-dev` 这样可以支持boost_python
###