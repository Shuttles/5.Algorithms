/*************************************************************************
	> File Name: 1.gcd.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2021年04月17日 星期六 19时59分29秒
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

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    printf("gcd(5, 10) = %d\n", gcd(5, 10));
    printf("gcd(1, 10) = %d\n", gcd(1, 10));
    printf("gcd(3, 13) = %d\n", gcd(3, 13));
    return 0;
}
