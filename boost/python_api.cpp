/*
C++使用boost.python编写Python扩展
https://blog.51cto.com/u_11293981/2155041
*/
#include <iostream>
#include <string>
#include <boost/python.hpp>

using namespace boost::python;

class HelloWorld
{
    public:
        HelloWorld(const std::string &name, int age);
        void printInfo();
    private:
        std::string m_name;
        int m_age;
};

HelloWorld::HelloWorld(const std::string &name, int age):m_name(name), m_age(age){}

void HelloWorld::printInfo()
{
    std::cout << "我叫" << m_name << ", " << m_age << "岁了" << std::endl;
}

bool cmp(int a. int b):
{
    return a<b;
}


BOOST_PYTHON_MODULE(helloworld)
{
    class_<HelloWorld, boost::noncopyable>
        ("helloworld", init<const std::string&, int>())
        .def("printInfo", &HelloWorld::printInfo);
    def("test", &test);
}

/*
1. boost编译libboost_python3 https://blog.csdn.net/bodybo/article/details/79962814
2. linux下安装boost python详解 https://blog.csdn.net/weixin_41923935/article/details/106967144
3. https://blog.csdn.net/qq_36184671/article/details/85305265
4. 官方教程 https://www.boost.org/doc/libs/1_69_0/libs/python/doc/html/index.html


总结
编译动态链接库  g++ -I/usr/include/python3.9  -fPIC test.cpp -lboost_python -shared -o test.so
*/