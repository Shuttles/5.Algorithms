/*************************************************************************
	> File Name: 4.完全背包.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  4/21 17:27:48 2020
 ************************************************************************/

//f[i][j] = max(f[i - 1][j], f[i][j - w[i]] + w[i])
//与01背包只差了一点点！！就是如果选中第i件物品，那么还可以选很多件i件物品！
//更新顺序应该是从前向后！！！
#include <iostream>
using namespace std;

#define MAX_V 10000

int f[MAX_V + 5];

int main() {
    int V, N, v, w;
    cin >> N >> V;

    for (int i = 1; i <= N; i++) {
        cin >> v >> w;
        for (int j = v; j <= V; j++) {
            f[j] = max(f[j], f[j - v] + w);
        }
    }

    cout << f[V] << endl;
    return 0;
}

