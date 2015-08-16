#include <vector>
#include <set>
#include <limits.h>
using namespace std;

int getMinim(vector<vector<int> > islands , int n)
{
	set<int> chosed , leave;
	int rs = 0;
	chosed.insert(0);//以0为初始
	while(chosed.size() != n)
	{
		int tmpMin = INT_MAX;
		set<int>::iterator iter;
		int island1 , island2;
		for(iter = chosed.begin(); iter != chosed.end();
			iter++)
		{
			for(int i = 0; i < n; i++)
			{
				if((chosed.find(i) == chosed.end() || chosed.empty()) &&
					islands[*iter][i] != 0 && islands[*iter][i] < tmpMin)
				{
					tmpMin = islands[*iter][i];
					island1 = i;
					island2 = *iter;
				}
			}
		}
		rs += tmpMin;
		chosed.insert(island1);
		chosed.insert(island2);
	}
	return rs;
}
