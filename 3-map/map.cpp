#include <iostream>
#include <map>

using namespace std;

void traverse(map<int, int>);

int main()
{
    // 初始化 map
    map<int, int> hash {
        {1, 100},
        {2, 200}
    };
    // 创建k-v
    hash[3] = 100;
    hash[4] = 200;
    hash.insert({5, 500});
    // 遍历
    traverse(hash);

    // 长度
    cout << "size of map: " << hash.size() << endl;
    // 访问
    map<int, int>::iterator a = hash.find(1);
    cout << "hash[1] = " << a->second << endl;
    a = hash.find(10);
    cout << "hash[10] = " << a->second << endl;
    bool i = a==hash.end();
    cout << "hash.find(10)==hash.end(): " << i << endl;
    i = hash.count(10);
    cout << "hash.count(10): " << i << endl;


    
    // 删除
    

    return 0;
}

void traverse(std::map<int, int> hash)
{
    // 遍历
    for (map<int, int>::iterator it=hash.begin();it!=hash.end();++it)
    {
        cout << it->first << "=>" << it->second << endl;
    }
}