#include <iostream>
#include <map>
#include <vector>
#include <boost/assign/list_of.hpp>

int main()
{
    std::map<int, int> map = boost::assign::map_list_of(7, 1);
    map[2] = 1;
    map[1] = 1;
    for (auto it=map.begin(); it!=map.end();it++)
    {
        std::cout << "<" << it->first << ", " << it->second << ">" << std::endl;
    }
    std::vector<std::string> str_vec =  boost::assign::list_of("0019, 0020");
    std::cout << str_vec.size() << std::endl;
    for (auto it=str_vec.begin(); it!=str_vec.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}
