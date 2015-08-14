#include <string>
#include <limits.h>
#include <map>
#include <iostream>
using namespace std;

void eraseLeast(string str)
{
    int mins = INT_MAX;
    map<char , int> rec;

    for(int i = 0; i < str.length(); i++)
    {
        if(rec.find(str[i]) != rec.end())
            rec[str[i]]++;
        else
            rec[str[i]] = 1;
    }

    for(map<char , int>::iterator iter = rec.begin(); iter != rec.end(); iter++)
    {
        if(iter->second < mins)
            mins = iter->second;
    }

    for(string::iterator iter = str.begin(); iter != str.end();)
    {
        if(rec[*iter] == mins)
            iter = str.erase(iter);
        else
            iter++;
    }
    cout<<str;


}
