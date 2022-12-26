#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
vi pv;

// find function
bool binarySearch(vi pv, int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (pv[mid] == x)
      return true;

    // Search the left half
    if (pv[mid] > x)
      return binarySearch(pv, x, low, mid - 1);

    // Search the right half
    return binarySearch(pv, x, mid + 1, high);
  }

  return false;
}

// prime number finder
bool pnf(int x){
    int n = pv.size();
    int result = binarySearch(pv, x, 0, n - 1);
    return result;
}

// write the solution here
void solution() { 
  ll n;
  mi pr;
  cin>>n;

  map<int, int>::iterator it;
  it = pr.begin();

  for(int q=1; q<=n/2; q++){
    int p = n - 2*q;
    
    if ( pnf(p)  && pnf(q)){
        pr.insert(it, pair<int, int>(p, q));
    }
  }

 
  cout<<pr.size()<<endl;
}

// main function
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int i;int num;int flag;int j;
    
     for(i=2;i<=10000;i++)
     {
        flag=0;
         for(j=2;j<i;j++)
         {
             if(i%j==0) flag=1;
         }
     
         if(flag==0)
         {
            pv.PB(i);
         }
     }
    
  int t;
  cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}
