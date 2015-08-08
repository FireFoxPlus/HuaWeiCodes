#include "preInclude.h"
int getLen(int num)
{
    int len = 0;
    while(num != 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

vector<int> HasNum(vector<int> nums , int value)
{
    vector<int> rs;
    int div = (int)(pow(10 , getLen(value) - 1) + 0.5);
    for(int i = 0; i < nums.size(); i++)
    {
        if(getLen(nums[i]) < getLen(value))
            continue;
        else
        {
            int tmp = nums[i];
            while(getLen(tmp) >= getLen(value))
            {
                if((tmp - value) % div == 0)
                {
                    rs.push_back(nums[i]);
                    break;
                }
                else
                    tmp /= 10;
            }
        }
    }
    return rs;
}
