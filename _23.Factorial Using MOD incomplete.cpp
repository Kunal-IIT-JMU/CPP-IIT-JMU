//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

typedef long long  ll;
#define  MOD  1000000007;


using namespace std;

ll fac(int n){
    ll ans = 1;
    for(int i =1; i<=n; i++){
        ans = (ans * i)% MOD;
    }
    return ans % MOD;
}

int main(){
    int n;
    cin >> n;

    cout << fac(n) << endl;
    return 0;
}