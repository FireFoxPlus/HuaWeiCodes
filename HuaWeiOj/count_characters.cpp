#include "preInclude.h"
using namespace std;
void count_characters(string str)
{
    int alpha = 0 , space = 0 , num = 0 , others = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(isalpha(str[i]))
            alpha++;
        else if(str[i] == ' ')
            space++;
        else if(isdigit(str[i]))
            num++;
        else others++;
    }
    cout<<alpha<<endl<<space<<endl<<num<<endl<<others<<endl;
}
