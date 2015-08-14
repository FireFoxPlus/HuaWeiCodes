#include <string>
using namespace std;

long long ipToint(string str)
{
    long long rs = 0;
    int dot = 0;
    while(dot < 4)
    {
        string subStr = str.substr(str.find_last_of('.') + 1);
        str = str.substr(0 , str.find_last_of('.'));
        dot++;
        long long tmp = 0;
        for(int i = 0; i < subStr.length(); i++)
            tmp = tmp * 10 + subStr[i] - '0';

        rs = rs | (tmp << (dot - 1) * 8);
    }
    return rs;
}

string intToip(int ip)
{
    string rs;
    int mask = 0x000000ff;
    for(int i = 0; i < 4; i++)
    {
        int tmp = ip & mask;
        if(tmp == 0)
            rs.insert(0 , 1 , tmp % 10 + '0');

        while(tmp != 0)
        {
            rs.insert(0 , 1 , tmp % 10 + '0');
            tmp /= 10;
        }
        if(i != 3)
            rs.insert(0 , 1 , '.');
        ip = ip >> 8;
    }
    return rs;
}
