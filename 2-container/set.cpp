#include <iostream>
#include <set>

int main()
{
    std::set<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(1);
    for (auto it = a.begin(); it != a.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}