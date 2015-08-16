#include <vector>
using namespace std;

int Chorus(vector<int> height){
    int n = height.size();
    if(n == 0)
        return 0;

    vector<int> left(n,1);
    for(int i = 1;i < n;++i)
    {
        for(int j = i-1;j >=0;--j)
        {
            if(height[i] > height[j])
            {
                if(left[i] < left[j]+1)
                    left[i] = left[j]+1;
            }
        }
    }
    vector<int> right(n,1);
    for(int i = n-2;i >= 0;--i)
    {
        for(int j = i+1;j < n;++j)
        {
            if(height[i] > height[j])
            {
                if(right[i] < right[j]+1)
                    right[i] = right[j]+1;
            }
        }
    }
    int maxs = 0;
    for(int i = 0;i < n;++i)
    {
        if(maxs < left[i] + right[i] - 1)
            maxs = left[i] + right[i] - 1;
    }
    return n - maxs;
}
