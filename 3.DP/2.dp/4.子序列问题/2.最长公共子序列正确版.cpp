/*************************************************************************
	> File Name: 2.最长公共子序列正确版.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  4/22 22:36:23 2020
 ************************************************************************/
 //dp[i][j]代表，string a截止到i, string b截止到j，两个字符串最长的公共子序列长度
//dp[i][j] = max(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1(if a[i] == b[j]))
#include<iostream>
#include <cstring>
using namespace std;

#define MAX_N 5000

string a;
string b;

int dp[MAX_N + 5][MAX_N + 5];

int main() {
    cin >> a >> b;
    int len_a = a.size();
    int len_b = b.size();
    a = " " + a;
    b = " " + b;

    for (int i = 1; i <= len_a; i++) {
        for (int j = 1; j <= len_b; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (a[i] == b[j]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
        }
    }
    cout << dp[len_a][len_b] << endl;
    return 0;
}
