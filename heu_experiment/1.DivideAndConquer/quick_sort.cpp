/*************************************************************************
	> File Name: quick_sort.cpp
	> Author: 少年宇
	> Mail: 
	> Created Time: 2020年11月04日 星期三 19时04分29秒
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

void output_arr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

void quick_sort(int *arr, int n, int left, int right) {
    if (right <= left) return ;//一定要写<=
    int temp = arr[left];
    int l = left, r = right;
    while (l <= r) {
        while (l <= r && arr[r] >= temp) r--;//我这么写必须是arr[r] >= temp而不是>，否则会死循环
        if (l <= r) {
            printf("r指针移动完毕！l = %d, r = %d\n", l, r);
            printf("arr[%d] = arr[%d] = ", l, r);
            arr[l] = arr[r];
            printf("%d\n", arr[l]);
        }
        while (l <= r && arr[l] <= temp) l++;
        if (l <= r) {
            printf("l指针移动完毕！l = %d, r = %d\n", l, r);
            printf("arr[%d] = arr[%d] = ", r, l);
            arr[r] = arr[l];
            printf("%d\n", arr[r]);
        }
    }
    printf("一轮partition结束！\n");
    printf("l = %d, r = %d\n", l, r);
    arr[l] = temp;
    output_arr(arr, n);
    quick_sort(arr, n, left, l - 1);
    quick_sort(arr, n, l, right);
    return ;
}



int main() {
    int arr[10] = {0};
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        arr[i] = (rand() % 1000);
    }

    output_arr(arr, 10);
    quick_sort(arr, 10, 0, 9);

    return 0;
}
