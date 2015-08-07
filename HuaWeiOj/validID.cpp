#include "preInclude.h"

bool isLeapYear(string str)
{
    int year = 0;
    for(int i = 0; i < str.length(); i++)
        year = year * 10 + str[i] - '0';

    if(year % 4 == 0 && year % 100 != 0)
        return true;
    if(year % 400 == 0)
        return true;
    return false;
}

bool isBigMonth(string str)
{
    if(str == "01" || str == "03" || str == "05" || str == "07"
       || str == "08" || str == "10" || str == "12")
        return true;
    return false;
}

int isValidId(string id)
{
    if(id.length() != 18)
        return 1;
    for(int i = 0; i < 17; i++)
    {
        if(!isdigit(id[i]))
            return 2;
    }
    if(!isdigit(id[17]) && id[17] != 'x')
        return 3;
    string year , month , day;
    year = id.substr(6 , 4);
    if(!(year >= "1900" && year <= "2100"))
        return 4;
    month = id.substr(10 , 2);

    int digiMonth = (month[0] - '0') * 10 + month[1] - '0';
    if(!(digiMonth >= 1 && digiMonth <= 12))
        return 5;
    day = id.substr(12 , 2);
    int digiDay = (day[0] - '0') * 10 + day[1] - '0';
    if(month == "02" && isLeapYear(year) && !(digiDay >= 1 && digiDay <= 29))
        return 6;
    if(month == "02" && !isLeapYear(year) && !(digiDay >= 1 && digiDay <= 28))
        return 6;
    if(isBigMonth(month) && !(digiDay >= 1 && digiDay <= 31))
        return 6;
    if(!isBigMonth(month) && !(digiDay >= 1 && digiDay <= 30))
        return 6;
    return 0;
}

