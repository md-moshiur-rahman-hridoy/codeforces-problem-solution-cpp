#define _GLIBCXX_FILESYSTEM
#include <bits/stdc++.h>
using namespace std;

int prime[300000], nPrime;
int mark[1000002];

void sieve(int n)
{
    int i, j, limit = sqrt(n * 1) + 2;
    mark[1] = 1;
    for(i=4; i<=n; i += 2) mark[i] = 1;

    prime[nPrime++] = 2;
    for(i=3; i<=n; i += 2)
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i*i; j <= n; j += i * 2) mark[j] = 1;
            }
        }
}

// main function
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
    int n = 100;
    sieve(n);

    for(int i=0; i<n; i++ ) if(prime[i]) cout<<prime[i]<<" ";
    cout<<endl;


  return 0;
}
