#include<bits/stdc++.h>
using namespace std;
int main(){

    int t, a, b, c, d, e;
    cin >> t;
    while(t--){

        cin >> a >> b >> c >> d >> e;
        if(      (((a+b) <= d) && (c <= e))     ||       (((a+c) <= d) && (b <= e))       ||     (((c+b) <= d) && (a <= e))     )
            cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}
