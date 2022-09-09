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
   int n;
   cin >> n; 
   if(n%2==0){
    int j=n-2;
    while(j){
        cout << j << " ";
        j--;
    }
    cout << (n-1) << " " << (n) << "\n";
   }
   else{
    cout << "1 2 3 " ;
    for(int i=4; i<n-1; i=i+2){
        cout << (i+1) << " " << (i) << " ";
    } 
    cout << (n-1) << " " << (n) << "\n";
   }
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
