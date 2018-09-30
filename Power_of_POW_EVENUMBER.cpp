// https://practice.geeksforgeeks.org/problems/power-of-pow-even-number/0/?ref=self
#include<bits/stdc++.h>
using namespace std;
int t,n;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int m = -1;
        int jumlah = 0;
        for(int i=0; i<n; i++){
            m += 2;
            jumlah += pow(m,2);
        }
        cout << jumlah << endl;
    }
}
