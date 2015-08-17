#include <string>
#include <algorithm>
using namespace std;

void reversWord(string &str)
{
    reverse(str.begin() , str.end());
    string::iterator start = str.begin() , ends = str.begin();
    while(ends != str.end())
    {
        if(isalpha(*ends))
            ends++;
        else
        {
            *ends = ' ';
            reverse(start , ends);
            ends++;
            while(!isalpha(*ends))
                ends = str.erase(ends);
            start = ends;
        }
    }
    reverse(start , ends);
}
