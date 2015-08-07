#include "preInclude.h"

void fixPrint(string str , int width)
{
    while(str.length() > width)
    {
        cout<<str.substr(0 , width)<<endl;
        str = str.substr(width);
    }
    int leftSize = str.length();
    str.insert(0 , width - leftSize , '0');
    cout<<str<<endl;
}
