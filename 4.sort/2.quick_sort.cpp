/*************************************************************************
	> File Name: 2.quick_sort.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2021年03月24日 星期三 19时32分45秒
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


void output(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        i && cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return ;
}


int partition(int *arr, int l, int r) {
    //if (arr == nullptr || left < 0) return ;
    int temp = arr[l];//基准值
    while (l < r) {
        while (l < r && arr[r] >= temp) r--;
        if (l < r) arr[l++] = arr[r];
        while (l < r && arr[l] <= temp) l++;
        if (l < r) arr[r--] = arr[l];
    }
    arr[l] = temp;
    return l;
}

void quick_sort(int *arr, int l, int r) {
    if (arr == nullptr || l < 0) return ;
    if (r <= l) return ;//能不能写成 r == l ？ 这里可以写！因为50、51行的if避免了r<l的情况！

    int ind = partition(arr, l, r);
    if (ind > l) quick_sort(arr, l, ind - 1);
    if (ind < r) quick_sort(arr, ind + 1, r);
    return ;
}

int main() {
    int a[10] = {9, 4, 5, 2, 1, 3, 8, 7, 6};
    output(a, 10);
    quick_sort(a, 0, 9);
    output(a, 10);
    return 0;
}
