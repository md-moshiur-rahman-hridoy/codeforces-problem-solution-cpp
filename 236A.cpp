#define _GLIBCXX_FILESYSTEM
#include <bits/stdc++.h>
using namespace std;



// main function
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  string s;
    cin>>s;
    sort(s.begin(), s.end());
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] != s[i+1]) cnt++;
    }

    if(cnt % 2 == 0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");

  return 0;
}
