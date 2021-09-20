#include<bits/stdc++.h>
using namespace std;
int main(){

    int N, T;
    cin >> T ;
    while(T--){
        cin >> N;
        if(N%4 == 0) cout << "NO\n";
        else if(N%2 == 0) cout <<"YES\n";
    }

    return 0;
}
