// https://practice.geeksforgeeks.org/problems/power-of-pow-even-number/0/?ref=self
#include<bits/stdc++.h>
using namespace std;
int t,n,arr[100],k,num;

int main(){
    cin >> t;
    for(int j=0; j<t; j++){
        cin >> n;
        int m = -1;
        int jumlah = 0;
        for(int i=0; i<n; i++){
            m += 2;
            jumlah += m*m;
        }
        arr[j] = jumlah;
    }
    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}
