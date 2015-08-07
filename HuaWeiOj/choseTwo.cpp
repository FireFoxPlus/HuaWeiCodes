#include "preInclude.h"

void choseTwo(vector<int> height)
{
    int fir , sec;
    int dvalue;
    sort(height.begin() , height.end());
    for(int i = height.size() - 1; i >= 1; i--)
    {
       if(i == height.size() - 1)
       {
           dvalue = height[i] - height[i - 1];
           fir = height[i - 1];
           sec = height[i];
       }
       else
       {
           if(height[i] - height[i - 1] < dvalue)
           {
                dvalue = height[i] - height[i - 1];
                fir = height[i - 1];
                sec = height[i];
           }
       }
    }
    cout<<fir<<" "<<sec<<endl;
}
