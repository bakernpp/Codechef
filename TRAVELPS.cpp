#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){

    int t, a, b, n;
    string s;
    int intdist, intstat, res;
    char ch;
    cin >> t ;
    while(t--){
        cin >> n >> a >> b;
        res = intdist = intstat = 0;
        ch = getchar();
        cin >> s;
        int len = s.length();
        for(int i=0; i<len; i++){
            if(s[i] == '0')
                intdist++;
            else
                intstat++;
        }
        //cout << intdist << " " << intstat << endl;
        int res = (intdist * a) + (intstat * b);
        cout << res << "\n";
    }



    return 0;
}
