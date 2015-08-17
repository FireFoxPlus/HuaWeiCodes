#include <iostream>
#include <string>
#include <map>
#include <list>
using namespace std;

void simpleError()
{
	string str;
	list<string> rec;
	map<string , int> times;
	int insertPoi = 0;
	while(getline(cin , str))
	{
		str = str.substr(str.find_last_of('\\') + 1);
		int poi = str.find_first_of(' ');
		int poi1 = str.find_last_of(' ');
		str.erase(poi + 1 , poi1 - poi);

		if(poi > 16)
			str = str.substr(poi - 16);
		if(times.find(str) != times.end())
			times[str]++;
		else
		{
			times[str] = 1;
			rec.push_back(str);
			if(rec.size() > 8)
			{
				string tmp = rec.front();
				rec.pop_front();
				times.erase(tmp);
			}
		}
	}
	for(list<string>::iterator iter = rec.begin(); iter != rec.end(); iter++)
		cout<<*iter<<" "<<times[*iter]<<endl;
	return;
}

