#include "function_declare.h"
#include <math.h>


int StrToNum(string num)
{
    int length = num.length() , sign = 1 , iter = 0 , rs = 0;
    if(num[iter] == '-')
    {
        sign = -1;
        length--;
        iter++;
    }
    int weight = (int)(pow(10 , length - 1) + 0.5);
    for(; iter < num.length(); iter++)
    {
        rs += (num[iter] - '0') * weight;
        weight /= 10;
    }
    return rs;
}

string intTostr(int num)
{
    int sign = 1;
    if(num < 0)
        sign = -1;
    string rs;
    while(num > 0)
    {
        char tmp = num % 10 + '0';
        rs.insert(0 , &tmp , 1);
        num /= 10;
    }
    if(sign == -1)
        rs.insert(0 , 1 , '-');
    return rs;
}

string mutiply(string strNum1 , string strNum2)
{
    int num1 = 0 , num2 = 0;
    num1 = StrToNum(strNum1);
    num2 = StrToNum(strNum2);
    return intTostr(num1 * num2);
}
