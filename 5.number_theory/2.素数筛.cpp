/*************************************************************************
	> File Name: 2.素数筛.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2021年04月17日 星期六 20时09分25秒
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
#include <cstring>
#include <vector>
using namespace std;


#define MAX_N 200000
#define P(a) {\
    printf(#a " = %d\n", a);\
}


bool is_prime[MAX_N + 5];
int prime[MAX_N + 5];

void init() {
    memset(is_prime, 0, sizeof(is_prime));//0代表是素数
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) continue;//合数
        
        //素数
        prime[++prime[0]] = i;
        for (int j = 2; j * i <= MAX_N; j++) {
            is_prime[j * i] = true;
        }
    }
    return ;
}



int main() {
    init();
    P(prime[10001]);
    return 0;
}
