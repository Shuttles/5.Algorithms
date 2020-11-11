/*************************************************************************
	> File Name: input.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年11月06日 星期五 15时03分41秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

#define MAX_N 2621440

void init(int *arr, int size, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % MAX_N);
    }
    return ;
} 
