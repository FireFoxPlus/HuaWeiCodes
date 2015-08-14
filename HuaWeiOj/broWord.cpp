#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void broWord(vector<string> dic , string word , int ith)
{
    int counts = 0;
    vector<string> rs;
    string sword = word;
    sort(word.begin() , word.end());
    for(int i = 0; i < dic.size(); i++)
    {
        if(dic[i] == sword)
            continue;
        else
        {
            string tmp = dic[i];
            sort(tmp.begin() , tmp.end());
            if(tmp == word)
            {
                counts++;
                rs.push_back(dic[i]);
            }
        }
    }
    sort(rs.begin() , rs.end());

    cout<<counts<<endl<<rs[ith - 1];
}
