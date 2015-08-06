#include "preInclude.h"
void getNums()
{
    int counts;
    int negtive = 0 , sum = 0;
    cin>>counts;
    for(int i = 0; i < counts; i++)
    {
        int n;
        cin>>n;
        if(n < 0)
            negtive++;
        else
            sum += n;
    }
    cout<<negtive<<" ";
    if((counts - negtive != 0) && sum % (counts - negtive) == 0)
        cout<<sum / (counts - negtive)<<endl;
    else if( negtive == counts)
        cout<<0;
    else
        cout<<fixed<<setprecision(1)<<(double)sum / (double)(counts - negtive)<<endl;
}
