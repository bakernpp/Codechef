
#include<bits/stdc++.h>
#include<cstring>

#define pi 2*cos(0.0)
#define ll long long
#define mxsz 100005

#define ABS(a) (a>0)? a : -(a)
#define MAX(a,b) (a>b)? a : b
#define MIN(a,b) (a<b)? a : b
#define SQ(a) a*a

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    ll t, g, c, res;
    cin >> t;
    while(t--){
        cin >> g >> c;
        res = ( c * c ) / ( 2 * g );
        cout << res << '\n';
    }


    return 0;
}











