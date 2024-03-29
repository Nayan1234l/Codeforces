#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int n=str1.length();
        int m = str2.length();
        int dp[21][21];
        for (int i = 0; i < n; ++i)
            dp[i][0] = 0;
    
        for (int i = 0; i < m; ++i)
            dp[0][i] = 0;
    
        int ans = 0; 
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (str1[i - 1] == str2[j - 1]){
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else{
                    dp[i][j] = 0;
                }
    
                ans = max (ans, dp[i][j]); 
            }
        }
        cout<<n+m-2*ans<<endl;
    }
    
}