#include <iostream>
#include <vector>
#include <boost/assign.hpp>
#include <boost/algorithm/string.hpp>

int main()
{
    using namespace std;
    string w = "a,b , cd,ef";
    vector<string> v;
    // 类似于python中的split
    boost::split(v, w, boost::algorithm::is_any_of(","));
    for (vector<string>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *it << "|" << endl;
    }
    v.clear();
    v = boost::assign::list_of("a")("b")("c");
    for (vector<string>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    }

    bool ret = boost::icontains("good", "oo");
    cout << "icontains(\"good\", \"oo\"): " << ret << endl;
    ret = boost::icontains("oo", "good");
    cout << "icontains(\"oo\", \"good\"): " << ret << endl;
    return 0;
}

