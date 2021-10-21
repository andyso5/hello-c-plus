#include <algorithm>
#include <iostream>
#include <array>

bool queer(int, int);

struct {
    bool operator() (int a, int b) const {
        return b>a;
    }
} queer_s;

int main(void)
{
    using namespace std;
    array<int, 6> s {3, 5, 1, 2, 4};

    sort(s.begin(), s.end()); // 默认升序
    for (auto a : s) {
        cout << a << " ";
    }
    cout << endl;

    sort(s.begin(), s.end(), greater<int>()); // 降序, 默认是less
    for (auto a : s) {
        cout << a << " ";
    }
    cout << endl;

    sort(s.begin(), s.end(), queer);
    for (auto a : s) {
        cout << a << " ";
    }
    cout << endl;

    sort(s.begin(), s.end(), queer_s);
    for (auto a : s) {
        cout << a << " ";
    }
    cout << endl;
}
// TODO 并不明确
bool queer(int a, int b)
{
    // return a/3 > b/3;
    return a<b;
}