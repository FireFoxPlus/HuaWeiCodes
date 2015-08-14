#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int bitRev(int tmp)
{
    int rs = 0 , mask = 0x0000000f , each = 0x00000001;
    for(int i = 0; i < 4; i++)
       rs =  rs | ((tmp >> i ) & each) << (3 - i);
    return rs;
}


char reverses(char in)
{
    in = tolower(in);
    int rs;
    if(isdigit(in) || (in >= 'a' && in <= 'f'))
    {
        if(isdigit(in))
            rs = bitRev(in - '0');
        else
        {
            if(in == 'a')
                rs = bitRev(10);
            else if(in == 'b')
                rs = bitRev(11);
            else if(in == 'c')
                rs = bitRev(12);
            else if(in == 'd')
                rs = bitRev(13);
            else if(in == 'e')
                rs = bitRev(14);
            else if(in == 'f')
                rs = bitRev(15);
         }
    }
    if(rs == 10)
        return 'A';
    if(rs == 11)
        return 'B';
    if(rs == 12)
        return 'C';
    if(rs == 13)
        return 'D';
    if(rs == 14)
        return 'E';
    if(rs == 15)
        return 'F';
    if(rs >= 0 && rs <= 9)
        return rs + '0';

    return in;
}


void changeAndMerge(string str1 , string str2)
{
    str1.append(str2);
    vector<char> odd , even;
    for(int i = 0; i < str1.length(); i++)
    {
        if(i % 2 == 0)
            odd.push_back(str1[i]);
        else
            even.push_back(str1[i]);
    }
    sort(odd.begin() , odd.end());
    sort(even.begin() , even.end());
    int oindex = 0 , eindex = 0;
    for(int i = 0; i < str1.length(); i++)
    {
        if(i % 2 == 0)
        {
            str1[i] = reverses(odd[oindex]);
            oindex++;
        }
        else
        {
            str1[i] = reverses(even[eindex]);
            eindex++;
        }
    }
    cout<<str1;
}
