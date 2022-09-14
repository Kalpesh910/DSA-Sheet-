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
    int n, k;
    cin >> n >> k;
    vector<vector<int>>ans;
    int count = 0;
    vector<int>a(n);
    int G;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(i==0)    G=a[i];
        G = gcd(G,a[i]);
    }
    vector<int>temp;
    for(int i=0; i<n; i++){
        int g=a[i];
        for(int j=i; j<n; j++){
            temp.push_back(a[j]);
            g = gcd(g,a[j]);
            if(g==G){
                ans.push_back(temp);
                i=j;
                break;
            }
        }
        temp.clear();
    }
    if(ans.size()>=k)   cout << "YES\n";
    else    cout << "NO\n";
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
