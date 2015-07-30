#include "function_declare.h"

int hasSamePart(int num)
{
    string strNum;
    while(num != 0)
    {
        char tmp = num % 10 + '0';
        strNum.insert(0 , &tmp , 1);
        num /= 10;
    }
    for(int i = 0; i < strNum.length(); i++)
    {
        int counts = 0;
        for(int j = 0; j < strNum.length(); j++)
        {
            if(i != j && strNum[i] == strNum[j])
            {
                if(i + 1< strNum.length() && j + 1 < strNum.length()
                   && strNum[i + 1] == strNum[j + 1])
                    return 1;
            }
        }
    }
    return 0;
}
