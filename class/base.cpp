#include <iostream>

using namespace std;

class Point
{
    public:
    void setPoint(int x, int y)
    {
        cout<< "x = "<< x << " y = " << y << endl;
    }
};

int main()
{
    Point p;
    p.setPoint(1, 2);
    return 1;
}