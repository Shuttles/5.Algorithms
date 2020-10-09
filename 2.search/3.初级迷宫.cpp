/*************************************************************************
	> File Name: 3.初级迷宫.cpp
	> Author: 
	> Mail: 
	> Created Time: 六 10/ 3 21:26:50 2020
 ************************************************************************/

#include <iostream>
#include <cinttypes>
using namespace std;
#define MAX_N 50

int mmap[MAX_N + 5][MAX_N + 5], used[MAX_N + 5][MAX_N + 5];
int n, m, sx, sy, p, q;
int min_steps = INT32_MAX;
int dnext[4][2] = {
    {0, 1}, {1, 0}, 
    {0, -1}, {-1, 0}
};
void dfs(int x, int y, int step);

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mmap[i][j];
        }
    }
    cin >> sx >> sy >> p >> q;
    used[sx][sy] = 1;
    dfs(sx, sy, 0);
    cout << "最短路径是" << min_steps << endl;
    return 0;
}

void dfs(int x, int y, int step) {
    if (x == p && y == q) {
        if (step < min_steps) min_steps = step;
        return ;
    }
    for (int i = 0; i < 4; i++) {
        int dx = x + dnext[i][0];
        int dy = y + dnext[i][1];
        if (dx < 0 || dx >= n || dy < 0 || dy >= m) continue;
        if (mmap[dx][dy] == 1 || used[dx][dy] == 1) continue;
        used[dx][dy] = 1;
        dfs(dx, dy, step + 1);
        //到底用不用解锁呢？？
        //用！用不用解锁得看具体的语义信息!
        used[dx][dy] = 0;
    }
    return ;
}
