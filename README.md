# CSAPP-Labs

- First, read through the materials and THE GREAT **CSAPP**. Each course's theme correspond to the chapter on book.
- There're 7 labs available for u to conquer. The process of doing them alone is not only helpful for computer basics, but also the C programming language which we will see very powerful in many ways.
- For beginners self-learning CS like me, the CMU CS Structure below may be of great help for learning routes. It's just a reference for beginners who can't follow regular college processes. However, we can follow alike structure to build our own tech stack.![Screenshot_CMU_System](/Users/zenn/Public/Github/Entries_CSAPP/statics/Screenshot_CMU_System.png)



## Course Materials

- 课程网站：http://csapp.cs.cmu.edu/
- 课程视频：https://www.bilibili.com/video/BV1iW411d7hd
- [九曲阑干](https://space.bilibili.com/354767108/)对 CSAPP 的[中文讲解](https://www.bilibili.com/video/BV1cD4y1D7uR)（据说CMU的中国留学生也在CMU的课堂上看这个视频呢）
- 课程教材：Computer Systems: A Programmer's Perspective, 3/E
- 课程作业：11 个 Project，[代码框架全部开源](http://csapp.cs.cmu.edu/3e/labs.html)



## Progress

| Num. |                           |      |
| ---- | ------------------------- | ---- |
| 1    | Bit, Bytes and Integer    |      |
| 2    | Floating Point            |      |
| 3    | Machine Level Programming |      |
| 4    | Programming Optimization  |      |
| 5    | The Memory Hierachy       |      |
| 6    | Cache Memories            |      |
| 7    | Linking                   |      |
| 8    | Exceptional Control       |      |
| 9    | System Level I/O          |      |
| 10   | Virtual Memory Control    |      |
| 11   | Virtual Memory System     |      |
| 12   | Dynamic Memory Allocation |      |
| 13   | Network Programming       |      |
| 14   | Concurrent Programming    |      |
| 15   | Synchronization: Basics   |      |
| 16   | Synchronization: Advanced |      |
| 17   | Thread Level Programming  |      |



- [Data Lab 笔记]

涉及了位运算，补码和浮点数等内容，都是`C`语言程序设计题。

- [Bomb Lab 笔记]

拆除二进制炸弹，可以大大提升看汇编代码的能力。

- [Attack Lab 笔记]

 这个lab主要涉及了栈随机化，不可执行等栈保护的方法和使栈溢出、ROP攻击等内容。

- [Architecture Lab (Y86-64) 笔记]

 Architecture Lab，涉及了`Y86-64`指令集，和SEQ和PIPE的实现方式，以及程序优化等内容，可以熟悉汇编和硬件语言`HCL`。

- [Performance Lab 笔记]

这个lab在CMU已经被Cache Lab取代了，考虑到Cache Lab比较难，可以先做这个lab练练手。基于书上第五、六章对程序进行优化，主要用了循环分块消除缓存不命中和消除分支预测错误等方法。   

- [Cache Lab 笔记]

Part A要求写一个缓存模拟器，Part B要求优化矩阵转置函数，减少缓存不命中数。这个lab可以加深对缓存的理解。已写完Part A。