#include "preInclude.h"

string simpleStr(string str)
{
    string rs;
    char last;
    int counts = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(i == 0)
        {
            rs.append(1 , str[0]);
            last = str[0];
            counts++;
        }
        else
        {
            if(str[i] == last)
                counts++;
            else
            {
                rs.append(1 , counts + '0');
                rs.append(1 , str[i]);
                counts = 1;
                last = str[i];
            }
        }
    }
    if(counts != 0)
        rs.append(1 , counts + '0');
    return rs;
}
