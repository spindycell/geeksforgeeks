// https://practice.geeksforgeeks.org/problems/c-2-d-arrays-set-2/0
#include <bits/stdc++.h>
using namespace std;
int t,n;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        int m[n][n],k[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> m[i][j];
                k[i][j] = m[i][j];
            }
        }
        int x = 0, col[n], row[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(k[i][j]==0){
                    row[x]=i;
                    col[x]=j;
                    x++;
                }
            }
        }
        for(int i=0; i<x; i++){
            for(int j=0; j<n; j++){
                m[row[i]][j] = 0;
                m[j][col[i]] = 0;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << m[i][j]<<" ";
            }
        }
        cout << endl;
    }
}

/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;

	    int a[n][n],b[n][n];

	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	            b[i][j]=a[i][j];
	        }
	    }


	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(b[i][j]==0)
	            {
	                for(int k=0;k<n;k++)
	                {
	                    a[k][j]=0;
	                    a[i][k]=0;
	                }

	            }
	        }
	    }

	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

*/
