#include "preInclude.h"

void replaceVector(vector<int> &nums)
{
    int len = nums.size();
    vector<int> copys = nums;
    sort(copys.begin() , copys.end());
    int start = len / 2 , left = 1 , right = 1;
    nums[start] = copys[len - 1];
    bool chleft = true;
    for(int i = len - 2; i >=0; i--)
    {
        if(chleft)
        {
            nums[start - left] = copys[i];
            left++;
            chleft = !chleft;
        }
        else
        {
            nums[start + right] = copys[i];
            right++;
            chleft = ! chleft;
        }
    }
}
