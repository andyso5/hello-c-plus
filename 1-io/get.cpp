#include <iostream>

void print();

int main()
{
    using namespace std;
    while (1)
    {
        cout << "say something:" << endl;
        print();
    }

}

void print()
{
    using namespace std;
    char a;
    do
    {
        a = cin.get();
        cout << a << endl;
    } while (a != '\n');
    return;
}

/*
3. 为std::get()第二次才起效果? 因为get在获取字符值后不会清除输入缓存中的/n
   并且get其实正常的使用是get(*char, int)， 即读入一个长度不大于后面参数的
   字符给字符串数组， 但是缓存中如果提前遇到\n则会停止读取
   不加任何参数地使用get就会无条件获取当前缓存的第一个字符
*/
