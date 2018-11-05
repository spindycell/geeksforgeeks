//https://practice.geeksforgeeks.org/problems/modify-array-to-maximize-sum-of-adjacent-differences/0
#include <bits/stdc++.h>
using namespace std;
long long max(long long a, long long b){
    return (a<b)?b:a;
}
long long maximumDifferenceSum(long long arr[], long long N){
    // Initialize dp[][] with 0 values.
    int dp[N][2];
    for (int i = 0; i < N; i++)
        dp[i][0] = dp[i][1] = 0;

    for (int i=0; i<(N-1); i++){
        dp[i + 1][0] = max(dp[i][0],
                          dp[i][1] + abs(1-arr[i]));
        dp[i + 1][1] = max(dp[i][0] + abs(arr[i+1] - 1),
                     dp[i][1] + abs(arr[i+1] - arr[i]));
    }

    return max(dp[N-1][0], dp[N-1][1]);
}

int main(){
    long long n,x,t;
    cin >> t;
    while(t--){
        cin >> n;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << maximumDifferenceSum(arr, n) << endl;
    }
}
