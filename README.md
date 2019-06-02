# PAT-Basic-Level-Practice-
PAT(Basic Level)Practice(中文)代码，
开发环境vscode，
为了方便所有源文件名取为test.cpp。:
## 编译方式
linux和windows在命令行模式下输入命令:   
```
* g++ test.cpp -o test
```
```
* ./test
```
# PAT-Basic-Level-Practice-
## 学习总结：
1. 处理过大的数字可以利用字符串和数组。
2. 过多的if可以考虑使用switch case语句或a = b < c ?b : c语句替换。
3. 因为set内都是不同的值，所以处理有多少不同值的时候可以直接将所有值利用set的insert()函数存入set(insert存入的数据是乱序的），通过set的size()函数判断有多少不同值。
4. int类型除10^n得到结果四舍五入的简易处理，以100为例：result = (a+50) / 100。
5. 遇到同一对象的多种属性首先考虑封装结构体。
6. 固定位数输出，位数不够在前面补0使用格式符，以输出4位数为例："%04d".
7. 处理数字出现多少次类型的问题，使用散列。
8. 输出使用cout速度慢于printf，有些题目使用cout会运行超时，而printf不会。例如1015-德才论
9. 输出结果四舍五入解决办法:例如1077-互评成绩计算：result = (g1 + g2) * 1.0 / 2 + 0.5;
10. string字符串输入不能带有空格,读取输入的带有空格的字符串:getline(cin, s);例:读取一行字符串:1093 字符串A+B
11. string字符串与int互相转化:aoti()参考网址:https://www.cnblogs.com/smile233/p/8379802.html
12. string的find()函数:唯一的返回类型:size_type，即一个无符号整数（按打印出来的算）。若查找成功，返回按查找规则找到的第一个字符或子串的位置；若查找失败，返回npos，即-1(打印出来为4294967295)参考网址:https://www.cnblogs.com/zpcdbky/p/4471454.html
