#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define gcd(x, y) __gcd(x, y)
ll mod = 1e9+7;
ll lcm(int x, int y){
    return (x/gcd(x,y))*y;
}

void MYCODE()
{
   ll n, x, y; 
   cin >> n >> x >> y;
   if(x==0 && y==0){
    cout << -1 << endl;
    return;
   }
   if(x!=0 && y!=0){
    cout << -1 << endl;
    return;
   }
   ll noz = max(x,y);
   if((n-1)%noz != 0){
    cout << -1 << endl;
    return;
   }
   ll i= 2, t;
   while(i<=n){
     t=noz;
     while(t--){
        cout << i << " ";
     }
    //  if(i==1){
    //     i++;
    //  }
     i = i+noz;
   }
   cout << endl;
}

int main() {
    ll TEST;
    cin >> TEST;
    while(TEST--)
    {
        MYCODE();
    }
    return 0;
}


