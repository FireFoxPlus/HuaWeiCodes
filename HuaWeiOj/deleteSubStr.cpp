#include "function_declare.h"
int deleteSubStr(string &src , string subStr)
{
    int poi;
    int counts = 0;
    while(src.length() != 0 && (poi = src.find(subStr)) != string::npos)
    {
        src.erase(poi , subStr.length());
        counts++;
    }
    return counts;
}
