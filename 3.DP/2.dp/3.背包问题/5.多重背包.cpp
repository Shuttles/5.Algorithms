/*************************************************************************
	> File Name: 5.多重背包.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  4/21 22:47:08 2020
 ************************************************************************/
//当成多次01背包去做
#include<iostream>
using namespace std;

#define MAX_V 100000

int f[MAX_V + 5];

int main() {
    int n, v, w, s, V;
    cin >> V >> n;

    for (int i = 1; i <= n; i++) {
        cin >> v >> w >> s;
        for (int k = 1; k <= s; k++) {/*循环s次*/
            for (int j = V; j >= v; j--) {
                f[j] = max(f[j], f[j - v] + w);
            }
        }
    }
    cout << f[V] << endl;
    return 0;
}
