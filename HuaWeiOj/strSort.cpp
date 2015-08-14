#include <iostream>
#include <algorithm>

using namespace std;
bool compare(char str1 , char str2)
{
    if(!isalpha(str1))
        return false;

    if(!isalpha(str2))
        return true;

    char cstr1 = tolower(str1);
    char cstr2 = tolower(str2);

    return cstr1 < cstr2;
}

void strSort(string str)
{
    string copys;
    copys = str;
    sort(str.begin() , str.end() , compare);
    string rs;
    int k = 0;
    for(int i = 0; i < copys.length(); i++)
    {
        if(isalpha(copys[i]))
        {
            rs.append(1 , str[k]);
            k++;
        }
        else
            rs.append(1 , copys[i]);
    }
    cout<<rs<<endl;
}
