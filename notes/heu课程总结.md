# 1.绪论-算法概述

## 1.1一些概念

1. 算法是***<u>解决问题的一种方法或一个过程</u>***。
2. 算法的5条性质
   + 输入：有外部提供的量作为算法的输入
   + 输出：算法产生至少一个量最为输出
   + 确定性：组成算法的每条指令是清晰的，无歧义的
   + 有限性：算法中每条指令的执行次数是有限的，执行每条指令的时间也是有限的
   + 可实现性
3. 程序是***<u>算法用某种程序设计语言的具体实现。</u>***不满足有限性。
4. 问题的定义
   + 问题是一个二元组，定义了***<u>输入和输出</u>***的关系。



## 1.2算法的正确性证明

1. 定义：

   一个算法是正确的，当且仅当***<u>它对于每一个输入都最终停止，且产生正确的输出</u>***。

2. 证明方法

   + 归纳法
   + 反证法





## 1.3算法的复杂性分析

1. 目的
   + 预测算法对不同输入所需资源量
2. 一个算法复杂性的高低体现***<u>在运行该算法所需要的计算机资源的多少</u>***上。
3. 主要体现为==时间复杂性==和==空间复杂性==。我们主要讨论时间复杂性。





![img](https://wx2.sinaimg.cn/mw690/005LasY6ly1gliywwy2lej31bf0u0dm9.jpg)



### 栗子

![img](https://wx4.sinaimg.cn/mw690/005LasY6ly1gliyzp0t7oj312b0u0grt.jpg)



![img](https://wx4.sinaimg.cn/mw690/005LasY6ly1gliyzsd986j31850u0te8.jpg)

![img](https://wx2.sinaimg.cn/mw690/005LasY6ly1gliyzvlww4j31kg0qwn04.jpg)





### 渐进时间复杂性

==定义非常重要！！！！==

![img](https://wx1.sinaimg.cn/mw690/005LasY6ly1glizdtu0b2j31ec0u00z3.jpg)

![img](https://wx3.sinaimg.cn/mw690/005LasY6ly1glizbkd70nj31810u07az.jpg)

![img](https://wx4.sinaimg.cn/mw690/005LasY6ly1glizbsu43uj316z0u0dmh.jpg)

![img](https://wx1.sinaimg.cn/mw690/005LasY6ly1glizbw8lw2j316g0u07b1.jpg)

![img](https://wx2.sinaimg.cn/mw690/005LasY6ly1glizbzz4grj31ce0u0jxp.jpg)

![img](https://wx2.sinaimg.cn/mw690/005LasY6ly1glizc3u3bij31ca0u0gs0.jpg)

![img](https://wx3.sinaimg.cn/mw690/005LasY6ly1glizc7iurzj319a0u0n4v.jpg)

![img](https://wx3.sinaimg.cn/mw690/005LasY6ly1glizcer82cj31bn0u0tcu.jpg)



### 渐进分析记号的性质

![img](https://wx1.sinaimg.cn/mw690/005LasY6ly1glizgoftnjj316r0u078m.jpg)

![img](https://wx4.sinaimg.cn/mw690/005LasY6ly1glizgruk0vj31440u0n4k.jpg)



### 常见时间复杂度比较

![img](https://wx3.sinaimg.cn/mw690/005LasY6ly1glj0vm81vqj31f60co41p.jpg)

