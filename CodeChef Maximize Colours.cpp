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
   int x,y, z;
   cin >> x >> y >> z;
   int zero=0, one=0, two=0;
   if(x==0) zero++;
   if(y==0) zero++;
   if(z==0) zero++;
   if(x==1) one++;
   if(y==1) one++;
   if(z==1) one++;
   if(x==2) two++;
   if(y==2) two++;
   if(z==2) two++;
   
   if(zero==3){
    cout << "0\n";
    return;
   }
   if(zero==2){
    cout << "1\n";
    return;
   }
   if(zero==1){
    if(one==2 || one == 1){
        cout << "2\n";
        return;
    }
    if(one==0){
        cout << "3\n";
        return;
    }
   }
   if(zero==0){
    if(one==3){
        cout << "3\n";
        return;
    }
    if(one==2){
        cout << "3\n";
        return;
    }
    if(one==1){
        cout << "4\n";
        return;
    }
    if(two==3){
        cout << "4\n";
        return;
    }
    if(two==2){
        cout << "5\n";
        return;
    }
    if(two==1){
        cout << "5\n";
        return;
    }
    if(two==0){
        cout << "6\n";
        return;
    }
   }
   cout << "6\n";
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
