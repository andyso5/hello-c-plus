/*
C++使用boost.python编写Python扩展
https://blog.51cto.com/u_11293981/2155041
*/
#include <iostream>
#include <string>
#include <boost/python.hpp>

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

void test()
{
    std::cout << "Test" << std::endl;
}


BOOST_PYTHON_MODULE(helloworld)
{
    class_<HelloWorld, boost::noncopyable>
        ("helloworld", init<const std::string&, int>())
        .def("printInfo", &HelloWorld::printInfo)
    def("test", &test);
}