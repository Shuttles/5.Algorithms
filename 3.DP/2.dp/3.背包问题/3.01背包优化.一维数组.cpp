/*************************************************************************
	> File Name: 1.01背包.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  4/21 16:24:00 2020
 ************************************************************************/

//f(i, j)前i种物品，承重j的背包可获得的最大价值
//f(i, j) = max(f(i - 1, j), f(i - 1, j - w[i]) + w[i])
//f(0, j) = 0, f(i, 0) = 0,
#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_V 10000

int f[MAX_V + 5];

int main() {
    int V, n, v, w;
    cin >> V >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = V; j >= 1; j--) {
            /*f[i][j]默认值设为f[i - 1][j]，即不选第i件物品*/
            if (j >= v) {/*一定是>= !!!*/
                f[j] = max(f[j], f[j - v] + w);
            }
        }
    }
    cout << f[V] << endl;
    return 0;
}
