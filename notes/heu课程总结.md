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















# 2.递归与分治

## 2.1一些概念

1. 分治与动态规划的不同？

   ==分治的子问题之间是相互独立的！！！如果不独立那就是重叠子问题了！！==

   

   

2. 分治法所解决的问题一般具有哪几个特征？(使用条件)
   + 该问题的规模缩小到一定程度就可以容易地解决。
   + 该问题可以分解为若干个规模较小的相同问题，即该问题具有最优子结构性质
   + 利用该问题分解出的子问题的解可以合并为该问题的解
   + 原问题所分解出的各个子问题是相互独立的，即子问题之间不包含公共的子问题。(如有重叠那就用==dp==)

# 3.动态规划

## 3.1一些概念

1. 基本步骤

   + 找出最优解的性质，并刻画其结构特征。
   + 递归地定义最优值
   + 以自底向上的方式计算出最优值
   + 根据计算最优值时得到的信息，构造最优解

2. dp为什么需要最优子结构性质？

   最优子结构性质是指==大问题的最优解包含子问题的最优解==。动态规划方法是自底向上计算各子问题的最优解，及先计算子问题的最优解，然后再利用子问题的最优解构造大问题的最优解，因此需要最优子结构。

3. 重叠子问题的定义？

   在用递归算法自顶向下解次问题时，每次产生的子问题并不总是新问题，有些子问题被反复计算。

# 4.贪心算法

## 4.1一些概念

1. 两个基本性质
   + 最优子结构
   + 贪心选择性
2. 特点
   + 不能保证最后求得的解释最佳的，即多半是近似解。
   + 策略容易发现，而且运用简单，被广泛运用。
   + 策略多样，结果也多样。
   + 算法实现过程中，通常用到辅助算法：排序

# 5.回溯法

## 5.1子集树

![img](https://wx3.sinaimg.cn/mw690/005LasY6ly1glk5z7qud2j31870u0dkw.jpg)

### 5.1.1 01背包问题/装载问题/图的m着色问题



## 5.2排列树

![img](https://wx2.sinaimg.cn/mw690/005LasY6ly1glk5zb0wxrj317g0u0jx0.jpg)



### 5.2.1旅行商问题/批处理/n后



# 6.分支限界法

## 6.1一些概念

1. 一个节点只有一次机会成为拓展结点！

   如果遇到两次，就比较，取==优先级高==的留下！(最短路)



难点：单元最短路径     批处理调度(考的可能性小！！)











# 专题

## 1.01背包

1. 可解决的算法
   + 动态规划 (Dynamic Programming)
   + 回溯法(Backtrack)
   + 分支限界法(Branch and Bound)