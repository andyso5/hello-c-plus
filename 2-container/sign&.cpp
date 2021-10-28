#include <iostream>
#include <string>

struct Sign
{
    int age;
    std::string name;
};


int main(void){
    struct Sign s = {.age=10, .name="Andy"};
    struct Sign * p = &s;
    std::cout << p->age << "|" << p->name << std::endl;
    std::string jj = p->name;
    jj = "888888";
    std::cout << p->age << "|" << p->name << std::endl;
    std::string &ff = p->name;
    ff = "888888";
    std::cout << p->age << "|" << p->name << std::endl;
    
    
}

/*
在定义变量时，加上&， 即该变量与赋值给它的变量指向同一个地址， 在这期间没有发生拷贝
*/
