/*************************************************************************
	> File Name: 3.线性筛.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2021年04月17日 星期六 20时23分28秒
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
using namespace std;

#define MAX_N 200000
#define P(a) {\
    printf(#a " = %d\n", a);\
} 

bool is_prime[MAX_N + 5];
int prime[MAX_N + 5];


//n = m * p
//p是最小质因子，m是除本身外最大因子
void init() {
    for (int i = 2; i <= MAX_N; i++) {//每个数都是m
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {//枚举p
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = true;
            if (i % prime[j] == 0) break;//为何在此break呢，因为i=prime[j]*x, prime[j]<prime[j+1], 那么i*prime[j+1]的最小素因子就应该是prime[j]而不是prime[j+1]
        }
    }
    return ;
}

int main() {
    init();
    P(prime[10001]);
    return 0;
}
