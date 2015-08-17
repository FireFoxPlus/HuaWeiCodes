#include <string>
#include <iostream>
using namespace std;

void snakeArray(int num)
{
    int lastHead = 1;
    string str;
    for(int i = 1; i <= num; i++)
    {
        cout<<lastHead;
        if(i != num)
            cout<<" ";
        int tmp = lastHead;
        for(int j = i; j < num; j++)
        {
            tmp = tmp + j + 1;
            cout<<tmp;
            if(j != num - 1)
                cout<<" ";
        }
        cout<<endl;
        lastHead += i;
    }


}
