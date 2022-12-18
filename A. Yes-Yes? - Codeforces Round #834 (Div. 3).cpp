#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define F first 
#define S second 
#define PB push_back
#define MP make_pair

// write the solution here
void solution(){
    string s;
    cin>>s;
    
    string fullString = "Yes";
    for(int i=0; i<18; i++){
        fullString = fullString + "Yes";
    }
    
    if(fullString.find(s) != string::npos){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

// main function
int main() {
   int t;
   cin>>t;
   while(t--){
       solution();
   }
    return 0;
}
