/*************************************************************************
	> File Name: 3.merge_sort.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2021年03月24日 星期三 20时25分11秒
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


void merge(int *arr, int l, int mid, int r) {
    int n = r - l + 1;
    int *temp = (int *)calloc(n, sizeof(int));
    int p1 = l, p2 = mid + 1, ind = 0;
    while (p1 <= mid || p2 <= r) {
        if (p2 > r || (p1 <= mid && arr[p1] <= arr[p2])) {//必须写上p1<=mid (做逆序对那题的教训)
            temp[ind++] = arr[p1++];
        } else {
            temp[ind++] = arr[p2++];
        }
    }
    for (int i = 0, j = l; i < n; i++, j++) {
        arr[j] = temp[i];
    }
    free(temp);
    return ;
}

void merge_sort(int *arr, int l, int r) {
    if (arr == nullptr || l < 0) return ;
    if (r <= l) return ;
    int mid = (l + r) >> 1;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
    return ;
}

int main() {
    int a[10] = {9, 4, 6, 2, 0, 8, 1, 3, 7, 5};
    output(a, 10);
    merge_sort(a, 0, 9);
    output(a, 10);
    return 0;
}
