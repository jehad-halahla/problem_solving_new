#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin >> t;
 while(t--){
        int n;
 cin>> n;
 if(n == 1)
    cout << 0<<"\n";
 else{
    int x =__builtin_clz(n);
 cout << ((1<<(31-x))-1) <<"\n";
 }




 }
    return 0;
}
