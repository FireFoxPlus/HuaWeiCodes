#include <vector>
using namespace std;


void floyd(vector<vector<int> > graph , vector<vector<int> > &costs ,
           vector<vector<int> > &via , int vertex)
{
    costs = graph;
    for(int i = 0; i < vertex; i++)
        for(int j = 0; j < vertex; j++)
            via[i][j] = j;

    for(int i = 0; i < vertex; i++)
        for(int j = 0; j < vertex; j++)
            for(int k = 0; k < vertex; k++)
            {
                if(costs[j][k] > costs[j][i] + costs[i][k])
                {
                    costs[j][k] = costs[j][i] + costs[i][k];
                    via[j][k] = via[j][i];
                }
            }
}
