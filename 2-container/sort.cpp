#include <algorithm>
#include <iostream>
#include <array>

bool queer(int, int);

// struct {
//     bool operator() (int a, int b) const {
//         return b>a;
//     }
// } queer_s;
bool queer_s(int, int);
bool queer_k(int, int);

int main(void)
{
    using namespace std;
    array<int, 6> s {3, 5, 1, 2, 4};

    // sort(s.begin(), s.end()); // 默认升序
    // for (auto a : s) {
    //     cout << a << " ";
    // }
    // cout << endl;

    // sort(s.begin(), s.end(), greater<int>()); // 降序, 默认是less
    // for (auto a : s) {
    //     cout << a << " ";
    // }
    // cout << endl;
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

    sort(s.begin(), s.end(), queer_k);
    for (auto a : s) {
        cout << a << " ";
    }
    cout << endl;
}
// sort会将输入比较函数返回为true时的前一个数放在靠前的位置
bool queer(int a, int b)
{
    // return a/3 > b/3;
    return a>b;
}

bool queer_s(int a, int b){
    return (b-2)*(b-2)>(a-2)*(a-2);
}

bool queer_k(int a, int b)
{
    // return a/3 > b/3;
    return a<b;
}