#include "preInclude.h"
void j_circle(list<int> nums , int counts)
{
    int nowCount = 0;
    for(list<int>::iterator itr = nums.begin(); nums.size() > 1;)
    {
        if(itr == nums.end())
            itr = nums.begin();
        nowCount = (nowCount + 1) % (counts + 1);
        if(nowCount == counts)
        {
            cout<<*itr<<endl;
            counts = *itr;
            itr = nums.erase(itr);
            nowCount = 0;
        }
        else
            itr++;
    }
    cout<<nums.front();
}
