#include <iostream>

using namespace std;

class Point
{
    public:
    Point(int index): _index(index){
        cout << "init" << endl;
    }
    void setPoint(int x, int y)
    {
        cout<< "x = "<< x << " y = " << y << endl;
        cout << "f = (x + y) * index --> " <<  (x + y) * _index << endl;
    }
    int cindex = 4;
    private:
        int _index;
};

// Point::Point(int index): _index(index){}

// int Point::pow(int base) {
//     return pow(base, _index);
// }

int main()
{
    Point p(2);
    p.setPoint(1, 2);
    cout << p.cindex << endl;
    // cout << p.index << endl; // 不可以被调用
    return 1;
}