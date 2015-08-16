#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string.h>
#include <limits.h>
#include <map>
using namespace std;

int getChrous(vector<int> height)
{
    int maxs = INT_MIN;
    for(int i = 0; i < height.size(); i++)
    {
        int left = 0 , right = 0;
        for(int j = 0; j < i; j++)
            if(height[j] < height[i])
                left++;
        for(int k = i + 1; k < height.size(); k++)
            if(height[k] < height[i])
                right++;
        if(left + right + 1 > maxs)
            maxs = left + right + 1;
    }
    return height.size() - maxs;
}

int main()
{
    int nums;
    cin>>nums;
    vector<int> height;

    for(int i = 0; i < nums; i++)
    {
        int tmp;
        cin>>tmp;
        height.push_back(tmp);
    }

    cout<<getChrous(height);
}



