/*************************************************************************
	> File Name: 1.全排列.cpp
	> Author: 
	> Mail: 
	> Created Time: 六 10/ 3 19:56:07 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100

int arr[MAX_N + 5];
bool used[MAX_N + 5];

//全排列递归实现
void dfs(int depth, int n) {                          //语义信息：实现n的全排列，当前在arr[depth]
    if (depth >= n) {                                 //递归深度超过n
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return ;
    }
    //dfs过程
    //此时在第depth个盒子面前，应该放哪张牌呢？
    //按照1，2，3...n的顺序一一尝试
    for (int i = 1; i <= n; i++) {
        if (used[i] == false) {                       //第一个未被标记的i可以放在第depth个盒子中
            used[i] = true;
            arr[depth] = i;
            dfs(depth + 1, n);                        //必须写在for循环里！！
            used[i] = false;
        }
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    cout << n <<"的全排列是" << endl;
    dfs(0, n);
    return 0;
}
