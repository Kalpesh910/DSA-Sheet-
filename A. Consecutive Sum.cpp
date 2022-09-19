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
   ll n, k;
   cin >> n >> k;
   vector<ll>a(n);
   for(ll i=0; i<n; i++){
    cin >> a[i];
   }
   ll i, j, maxi;
   for(i=0; i<k; i++){
    maxi = i;
    j=i+k;
    while(j<n){
        if(a[i]<a[j]){
            // cout << "maxi" << j << endl;
            if(a[j]>a[maxi]){
                maxi=j;
            }
            // maxi = j;
        }
        j = j+k;
    }
    if(maxi != i){
        swap(a[i], a[maxi]);
    }
   }
   ll ans = 0;
   for(ll i=0; i<k; i++){
    ans+=a[i];
   }
   cout << ans << endl;
}

int main() {
    int TEST;
    cin >> TEST;
    while(TEST--)
    {
        MYCODE();
    }
    return 0;
}


