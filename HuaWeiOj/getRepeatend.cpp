#include "function_declare.h"
#include <iostream>
#include <set>
using namespace std;

string getRepeatend(int num1 , int num2)
{
    string rs;
    char tmp = num1 / num2 + '0';
    int reminder = num1 % num2;
    rs.append(&tmp , 1);
    tmp = '.';
    rs.append(&tmp , 1);

    set<int> record;
    while(reminder != 0 && record.count(reminder) == 0)
    {
        int tmpRs = 10 * ((double)reminder / (double)(num2));
        tmp = tmpRs + '0';
        rs.append(&tmp , 1);
        record.insert(reminder);
        reminder = (reminder * 10) % num2;
    }
    return rs;
}

