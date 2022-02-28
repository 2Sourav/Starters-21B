#include <bits/stdc++.h>
using namespace std;

#define ll          long long

#define vi          vector<int>

#define vll         vector<ll>
#define pb          push_back

#define endl        '\n'
signed main(){
   
int tc = 0, tt = 1;
    cin >> tt;
   
    while (tc++ < tt)
    {

        ll n, m;
       
        cin >> n >> m;

        ll ans = 0, temp = m;
       
        for(ll i = 2; i * i <= m; i++){
           
            if(!(temp%i)){
                ans++;
               
                while(!(temp%i)){
                    temp /= i;
                   
                }
            }
        }

        if(temp > 1){
            ans++;
           
        }

        vll arr;
       
        for(ll i = 1; i * i <= n; i++){
           
            if(!(n%i)){
                arr.pb(i);
               
                if(i != (n/i)){
                    arr.pb(n/i);
                   
                }
            }
        }
       

        ll val = 0;

        for(auto x: arr){
            if(x <= ans){
                val = x;
               
            }
        }
       

        cout << val << endl;
}


    return 0;
}