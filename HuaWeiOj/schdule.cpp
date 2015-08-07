#include "preInclude.h"
void schdule(vector<int> task , vector<int> &system , vector<int> &user)
{
    map<int , int> record;
    for(int i = 0; i < task.size(); i++)
        record[task[i]] = i;

    for(map<int , int>::iterator itr = record.begin(); itr != record.end(); itr++)
    {
        if(itr->first < 50)
            system.push_back(itr->second);
        else if(itr->first >= 50 && itr->first <=255)
            user.push_back(itr->second);
    }
    system.push_back(-1);
    user.push_back(-1);
}
