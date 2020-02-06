# Binary_search

## 一、朴素的二分

即在一个有序数组或者单调函数中找一个数X

思想：

1. 找到这个数只有两种情况：
   + 头尾指针==未重合==时mid正好指向了X
   + 头尾指针==重合==且他俩正好指向X

2. 未找到这个数只有一种情况：

   头尾指针==重合后又错开==，l指针指向第一个大于X的数，r指针指向第一个小于X的数

```c++
#include <stdio.h>
#define max_n 10000

int arr[max_n + 5];
int binary_search(int *arr, int l, int r, int x) {
    int mid;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    //如果没找到就返回0
    return 0;
}
```







## 二、0000111找最后一个0

具体化：在一个有序数组中的小于等于X（或者小于）的数中找最大的

泽哥法：当头尾指针==重合时==找到这个数 Or 大于X的第一个数（因为有可能所有数都比X大）

+ 下面这个代码是在小于等于X的数中找最大的（即如果X存在，那么找到的就是X）

```c
int binary_search(int *arr, int l, int r, int x) {
    int mid;
    while (l < r) {
        mid = (l + r + 1) >> 1      //一定要注意坑爹的下取整！！！，要把它手动改为上取整，否则会死循环
        if (arr[mid] <= x) l = mid;
        else r = mid - 1;
    }
    return r;
}
```

+ 如果想在小于X的数中找最大的应该怎样？
+ 只需把第五行的 <= 改为  < 即可





## 三、1111000找第一个0

具体化：在一个有序数组中的大于等于（或者大于）X的数中找最小的

泽哥法：当头尾指针==重合==时找到这个数 Or 小于X的最大的数（因为有可能所有的数都比X小）

+ 下面这个代码就是找大于等于X的第一个数

  ```c
  int binary_search(int *arr, int l, int r, int x) {
      int mid;
      while (l < r) {
          mid = (l + r) >> 1;   //这里不用向上取整，因为这是找    大于等于  X的第一个数，不会卡着死循环的！！不懂的话举几个栗子！！
          if (arr[mid] < x) l = mid + 1;
          else r = mid;
      }
      return l;
  }
  ```

  

+ 如果想找大于X的第一个数怎么办？
+ 只需把第五行的 < 改成 <= 即可！！！