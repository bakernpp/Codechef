
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

    ll t, d, x, y, z, res, d1, d2;
    cin >> t;
    while(t--){
        cin >> d >> x >> y >> z;
        d1 = 7 * x;
        d2 = y * d + z * (7 - d);
        res = MAX(d1, d2);
        cout << res << '\n';
    }


    return 0;
}










