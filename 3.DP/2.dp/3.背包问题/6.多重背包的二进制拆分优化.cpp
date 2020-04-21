/*************************************************************************
	> File Name: 5.多重背包.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  4/21 22:47:08 2020
 ************************************************************************/
//
#include<iostream>
using namespace std;

#define MAX_V 100000

int f[MAX_V + 5];

int main() {
    int n, v, w, s, V;
    cin >> V >> n;

    for (int i = 1; i <= n; i++) {
        cin >> v >> w >> s;
        for (int k = 1; s > 0; s -= k, k *= 2) {
            k = min(k, s);
            //cout << k << " " << s << endl;
            for (int j = V; j >= k * v; j--) {
                f[j] = max(f[j], f[j - k * v] + k * w);
            }
        }
    }
    cout << f[V] << endl;
    return 0;
}
