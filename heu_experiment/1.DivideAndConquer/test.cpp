/*************************************************************************
	> File Name: test.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年11月06日 星期五 13时52分59秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        printf("%d ", rand() % 100);
    }
    cout << endl;
    return 0;
}
