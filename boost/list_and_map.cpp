#include <iostream>
#include <map>
#include <boost/assign/list_of.hpp>

int main()
{
    std::map<int, int> map;
    map = boost::assign::map_list_of(7, 1);
    map[2] = 1;
    map[1] = 1;
    for (auto it=map.begin(); it!=map.end();it++)
    {
        std::cout << "<" << it->first << ", " << it->second << ">" << std::endl;
    }
    return 0;
}
