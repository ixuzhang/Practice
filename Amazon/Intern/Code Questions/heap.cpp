
1.
有一个很多条纪录（人，电影，data），问哪个人看电影最多。
然后我就说用hash做，存下人和对应的电影数量，然后排序一下选前100。他让我写出来。
顺便说一下复杂度。写完之后说把电影改成distinct，那我就把hash改成人对应的电影set。
然后顺便问了hash是怎么实现的。
最后让我优化一下。我就用了quick sort的idea来优化。


2.
给个string，找出出现最多的词。写了个hashmap存出现次数的。
一开始忘了处理句号的问题了，然后不记得去掉句号的那个string method叫啥了，经提醒想起来时strip。
然后ok了。接着问，如果要问前xx个出现最多次数的呢。存treemap/set 写comparable。
也许有更好的办法。没刷过题。。靠想的。。然后时间就差不多了。


3.
chris说他是market组的，大致意思就是给客户提供deal，然后问我哪些因素可以挑选不同的deal。 
我就扯了些性别啊，工作啊，距离大小啊啥的，前期还好，不停的cool，cool。
他问我如果要获取前k个最符合的时间复杂度该怎么办，我说heap，结果后面的时间复杂度答错了，
全部 的时间复杂度时nlogk，说成了nlogn,他还确认了一遍，如果跪就跪在这吧，后面然后就是代码实现了，
没啥问题，后面再问问了时间复杂度啥的


4.Given a list of Points, output k Points closest to (0,0)


5.把 arbitrary 个 sorted array merge 成一个sorted array! 
开始没有理解清楚arbitrary， 原来就是给将 K个sorted array merge 成一个sorted array!


6.2nd largest number in array
follow up: kth largert number
follow up: 把输入的数组改为iterator
每一个的时间 空间复杂度
写几个test cases


7.浩瀚的宇宙如此美丽，天空中繁星点点。给你一堆星星，找到离地球最近的那K颗。”（没错，他当时就是这样问我的，
问一个 top K elements 要不要这么浮夸…）
用的 max heap，


8.
第一题是给一个Integer数组，求maximum。。。
直接回答先sort，然后得到答案，报runtimeO(nlgn)。。然后说这样慢了，可以O(n),就是one-pass，然后找到最大值。。面试官说好。。没让写代码。
follow-up：怎么得到Top k value。。。。
我说还是可以先sort。。然后取前k个。。报runtimeO(nlgn)。。。然后说太慢了，可以维护一个size是k的min-heap解决。。让写code。。磨蹭了两下写完烙印觉得还行就说过了。。看下一题
第二题是同样一个Integer数组。。怎么得到max value和min value。。
我也是醉了。。先说sort，慢，所以可以弄两个变量max和min，
然后one-pass解决。。烙印说好，但是comparison是2n，问怎么改进。。
当时一直没想出来，跟他讨论了半天，
最后他提示说可以一次读2个数，然后终于想出来每次读取只需要比较3次就能得出max和min，
这样total comparison是3n/2。。总算是符合了他的要求。。不过讨论和想花了挺多时间的，
最后有些超时，随便问了个问题结束。。求过啊。。。


