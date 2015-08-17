#include <cmath>
#include <algorithm>
#include <limits.h>
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i = 2; i <= (int)(sqrt(num) + 0.5); i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}

void getPrimes(int num , vector<int> &primes)
{
    for(int i = 2; i < num; i++)
    {
        if(isPrime(i))
            primes.push_back(i);
    }
}

void makeEvenByPrime(int num)
{
    int poi1 , poi2;
    int rs1 , rs2;
    int mins = INT_MAX;
    vector<int> primes;
    getPrimes(num , primes);
    int sizes = primes.size();
    poi1 = 0 , poi2 = sizes - 1;
    while(poi1 != poi2)
    {
        if(primes[poi1] + primes[poi2] < num)
            poi1++;
        else if(primes[poi1] + primes[poi2] == num)
        {
            if(poi2 - poi1 < mins)
            {
                mins = poi2 - poi1;
                rs2 = poi2 , rs1 = poi1;
            }
            poi2--;
        }
        else
            poi2--;
    }
    cout<<primes[rs1]<<endl;
    cout<<primes[rs2]<<endl;

}
