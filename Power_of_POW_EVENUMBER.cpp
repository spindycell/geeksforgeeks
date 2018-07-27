// https://practice.geeksforgeeks.org/problems/power-of-pow-even-number/0/?ref=self
#include<bits/stdc++.h>
using namespace std;
int t,n;

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int m = 0;      // deklarasi local agar setiap inputan n baru m kembali ke 0
        int jumlah = 0;
        for(int i=0; i<n; i++){
            m += 2;     // even number +2
            jumlah += pow(m,2); // kuadrat tiap even number
        }
        cout << jumlah << endl;
    }
}
