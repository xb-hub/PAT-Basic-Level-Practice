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
3. 因为set内都是不同的值，所以处理有多少不同值的时候可以直接将所有值利用set的insert()函数存入set，通过set的size()函数判断有多少不同值。
4. int类型除10^n得到结果四舍五入的简易处理，以100为例：result = (a+50) / 100。
5. 遇到同一对象的多种属性首先考虑封装结构体。
6. 固定位数输出，位数不够在前面补0使用格式符，以输出4位数为例："%04d".
7. 处理数字出现多少次类型的问题，使用散列。
8. 输出使用cout速度慢于printf，有些题目使用cout会运行超时，而printf不会。例如1015-德才论
