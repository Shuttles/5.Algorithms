/*************************************************************************
	> File Name: 1.最长公共子序列1.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  4/22 20:53:34 2020
 ************************************************************************/

//dp[i]表示两个字符串到第i位为止的最长公共子序列长度
//首先dp[i] = dp[i - 1]，如果第i位两个字符相同，那么还要+1
#include <iostream>
using namespace std;

#define MAX_N 5000

char a[MAX_N + 5];
char b[MAX_N + 5];
int dp[MAX_N + 5];


int main() {
    cin >> a >> b;
    dp[0] = ((a[0] == b[0]) ? 1 : 0);
    for (int i = 1; a[i] && b[i]; i++) {
        dp[i] = dp[i - 1];
        if (a[i] == b[i]) dp[i] += 1;
    }
    int len1 = strlen(a);
    int len2 = strlen(b);
    int len = min(len1, len2);
    cout << dp[len - 1] << endl;
    return 0;
}
