# C Primer Plus 5th Editon
<!-- @import "[TOC]" {cmd="toc" depthFrom=1 depthTo=6 orderedList=false} -->

<!-- code_chunk_output -->

* [C Primer Plus 5th Editon](#c-primer-plus-5th-editon)
	* [第1章 概览](#第1章-概览)
		* [1.1 C语言的起源](#11-c语言的起源)
		* [1.2 使用C语言的理由](#12-使用c语言的理由)
			* [1.2.1 设计特性](#121-设计特性)
			* [1.2.2 高效性](#122-高效性)
			* [1.2.3 可移植性](#123-可移植性)
			* [1.2.4 强大的功能和灵活性](#124-强大的功能和灵活性)
			* [1.2.5 面向编程人员](#125-面向编程人员)
			* [1.2.6 缺点](#126-缺点)
		* [1.3 C语言的发展方向](#13-c语言的发展方向)
		* [1.4 计算机工作的基本原理](#14-计算机工作的基本原理)
		* [1.5 高级计算机语言和编译器](#15-高级计算机语言和编译器)
		* [1.6 使用C语言的7个步骤](#16-使用c语言的7个步骤)
			* [1.6.1 第一步:定义程序目标](#161-第一步定义程序目标)
			* [1.6.2 第二步:设计程序](#162-第二步设计程序)
			* [1.6.3 第三步:编写代码](#163-第三步编写代码)
			* [1.6.4 第四步:编译](#164-第四步编译)
			* [1.6.5 第五步:运行程序](#165-第五步运行程序)
			* [1.6.6 第六步:测试和调试程序](#166-第六步测试和调试程序)
			* [1.6.7 第七步:维护和修改程序](#167-第七步维护和修改程序)
			* [1.6.8 总结](#168-总结)
		* [1.7 编程机制](#17-编程机制)
			* [1.7.1 目标代码文件、可执行文件和库](#171-目标代码文件-可执行文件和库)
			* [1.7.2 UNIX系统](#172-unix系统)
			* [1.7.3 Linux系统](#173-linux系统)
			* [1.7.4 集成开发环境(Windows系统下)](#174-集成开发环境windows系统下)
			* [1.7.5 IBM PC的DOS编译器](#175-ibm-pc的dos编译器)
			* [1.7.6 Macintosh上的C](#176-macintosh上的c)
		* [1.8 语言标准](#18-语言标准)
			* [1.8.1 第一个ANSI/IOS C标准](#181-第一个ansiios-c标准)
			* [1.8.2 C99标准](#182-c99标准)
		* [1.9 本书的组织结构](#19-本书的组织结构)
		* [1.10 本书体例](#110-本书体例)
			* [1.10.1 字体](#1101-字体)
			* [1.10.2 屏幕输出](#1102-屏幕输出)
	* [第二章 C语言概述](#第二章-c语言概述)
		* [2.1 C语言的一个简单实例](#21-c语言的一个简单实例)
		* [2.2 实例说明](#22-实例说明)
			* [2.2.1 第一遍 快速简介](#221-第一遍-快速简介)
			* [2.2.2 第二遍 程序细节](#222-第二遍-程序细节)
		* [2.3 一个简单程序的结构](#23-一个简单程序的结构)
		* [2.4 使程序可读的技巧](#24-使程序可读的技巧)
		* [2.5 更进一步](#25-更进一步)
			* [2.5.1 说明](#251-说明)
			* [2.5.2 多个说明](#252-多个说明)
			* [2.5.3 乘法](#253-乘法)
			* [2.5.4 输出多个值](#254-输出多个值)
		* [2.6 多个函数](#26-多个函数)
		* [2.7 调试](#27-调试)
			* [2.7.1 语法错误](#271-语法错误)
			* [2.7.2 语义错误](#272-语义错误)
			* [2.7.3 程序状态](#273-程序状态)
		* [2.8 关键字和保留标识符](#28-关键字和保留标识符)
		* [2.9 关键概念](#29-关键概念)
		* [2.10 总结](#210-总结)
	* [第三章 数据和 C](#第三章-数据和-c)
		* [3.1 示例程序](#31-示例程序)
		* [3.2 变量和常量数据](#32-变量和常量数据)
		* [3.3 数据：数据类型关键字](#33-数据数据类型关键字)
			* [3.3.1 整数类型和浮点数类型](#331-整数类型和浮点数类型)
			* [3.3.2 整数](#332-整数)
			* [3.3.3 浮点数](#333-浮点数)
		* [3.4 C数据类型](#34-c数据类型)
			* [3.4.1 int类型](#341-int类型)
			* [3.4.2 其他整数类型](#342-其他整数类型)
			* [3.4.3 使用字符：char类型](#343-使用字符char类型)
			* [3.4.4 _Bool类型](#344-_bool类型)
			* [3.4.5 可移植类型：stdint.h和inttypes.h](#345-可移植类型stdinth和inttypesh)
			* [3.4.6 float、double和long double](#346-float-double和long-double)
			* [3.4.7 复数和虚数类型](#347-复数和虚数类型)
			* [3.4.8 其他类型](#348-其他类型)
			* [3.4.9 类型大小](#349-类型大小)
		* [3.5 使用数据类型](#35-使用数据类型)
		* [3.6 参数和陷阱](#36-参数和陷阱)
		* [3.7 转义序列示意](#37-转义序列示意)
			* [3.7.1 程序运行情况](#371-程序运行情况)
			* [3.7.2 刷新输出](#372-刷新输出)
		* [3.8 关键概念](#38-关键概念)
		* [3.9 本章小结](#39-本章小结)
	* [第四章 字符串和格式化输入/输出](#第四章-字符串和格式化输入输出)
		* [4.1 前导程序](#41-前导程序)
		* [4.2 字符串简介](#42-字符串简介)
			* [4.2.1 char类型数组和null字符](#421-char类型数组和null字符)
			* [4.2.2 使用字符串](#422-使用字符串)
			* [4.2.3 strlen()函数](#423-strlen函数)
		* [4.3 常量和C预处理器](#43-常量和c预处理器)
			* [4.3.1 const 限定符](#431-const-限定符)
			* [4.3.2 明示常量](#432-明示常量)
		* [4.4 printf()和scanf()](#44-printf和scanf)
			* [4.4.1 printf()函数](#441-printf函数)
			* [4.4.2 使用printf()](#442-使用printf)
			* [4.4.3 printf()的转换说明修饰符](#443-printf的转换说明修饰符)
			* [4.4.4 转换说明的意义](#444-转换说明的意义)
			* [4.4.5 使用scanf()](#445-使用scanf)

<!-- /code_chunk_output -->

## 第1章 概览

* C的历史和特性。
* 编写程序所需的步骤。
* 关于编译器和链接器的一些知识。
* C的标准。

### 1.1 C语言的起源

### 1.2 使用C语言的理由

#### 1.2.1 设计特性

#### 1.2.2 高效性

#### 1.2.3 可移植性

#### 1.2.4 强大的功能和灵活性

#### 1.2.5 面向编程人员

#### 1.2.6 缺点

### 1.3 C语言的发展方向

### 1.4 计算机工作的基本原理

### 1.5 高级计算机语言和编译器

### 1.6 使用C语言的7个步骤

#### 1.6.1 第一步:定义程序目标

#### 1.6.2 第二步:设计程序

#### 1.6.3 第三步:编写代码
```c
#include <stdio.h>
int main()
{
    int dogs;

    printf("How many dogs do you have ?\n");
    scanf("%d", &dogs);
    printf("So you have %d dogs(s) !\n", dogs);

    return 0;
}
```
#### 1.6.4 第四步:编译

#### 1.6.5 第五步:运行程序

#### 1.6.6 第六步:测试和调试程序
#### 1.6.7 第七步:维护和修改程序
#### 1.6.8 总结

### 1.7 编程机制
```c
#include <stdio.h>
int main()
{
    printf("Concrete contains gravel and cement.\n");

    return 0;
}
```
#### 1.7.1 目标代码文件、可执行文件和库
#### 1.7.2 UNIX系统
1. 在UNIX系统上编辑
2. 在UNIX系统上编译
#### 1.7.3 Linux系统
#### 1.7.4 集成开发环境(Windows系统下)
#### 1.7.5 IBM PC的DOS编译器
#### 1.7.6 Macintosh上的C
### 1.8 语言标准
#### 1.8.1 第一个ANSI/IOS C标准
* 相信程序员
* 不妨碍程序员需要完成的事情
* 让语言保持短小简单
* 只提供一种方法来执行一个操作
* 让程序运行速度快，即使不能保证其可移植性
#### 1.8.2 C99标准
### 1.9 本书的组织结构
### 1.10 本书体例
#### 1.10.1 字体
#### 1.10.2 屏幕输出
* 特殊按键
* 我们的系统
* 您的系统

## 第二章 C语言概述
* 运算符：=
* 函数：main(), printf()
* 编写一个简单的C程序
* 创建整型变量，为其赋值，并在屏幕上显示该值。
* 换行字符。
* 如何在程序中加入注释，建立包含多个函数的程序，以及找出程序中的错误。
* 理解什么是关键字。

### 2.1 C语言的一个简单实例
```c
#include <stdio.h>
int main()                    /* a simple program             */
{
    int num;                  /* define a variable called num */
    num = 1;                  /* assign a value to num        */

    printf("I am a simple "); /* use the printf() function    */
    printf("computer.\n");
    printf("My favorite number is %d becausee it is first.\n", num);
    return 0;
}
```
### 2.2 实例说明
#### 2.2.1 第一遍 快速简介
#### 2.2.2 第二遍 程序细节
1. #include 指示和头文件
2. main() 主函数
3. 注释
4. 花括号，程序体和代码块
5. 声明
    1. 数据类型
    2. 名字的选择
    3. 声明变量的四点好处
6. 赋值
7. printf()函数
8. return语句
### 2.3 一个简单程序的结构
### 2.4 使程序可读的技巧
### 2.5 更进一步
```c
// fathm_ft.c -- 把两个 fathoms 换算成英尺
#include <stdio.h>
int main()
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}

```
#### 2.5.1 说明
#### 2.5.2 多个说明
#### 2.5.3 乘法
#### 2.5.4 输出多个值

### 2.6 多个函数
```c
/* two_func.c -- 在一个文件中使用两个函数 */
#include <stdio.h>
void butler(void);/* ISO/ANSI C函数原型 */
int main()
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}

void butler(void)/* 函数定义处 */
{
    printf("You rang, sir?\n");
}
```
### 2.7 调试
```c
/* nogood.c -- 含有错误的程序 */
#include <stdio.h>
int mainc(void)
{
    int n, n2, n3;
    /* 该程序含有几个错误 */

    n = 5;
    n2 = n * n;
    n3 = n * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}
```
#### 2.7.1 语法错误
#### 2.7.2 语义错误
#### 2.7.3 程序状态
### 2.8 关键字和保留标识符

|ISO/ANSI C 关键字|||||
:---:|:---:|:---:|:---:|:---:
auto|**enum**|*restrcit*|unsigned|break
extern|return|**vold**|case|float
short|**volatile**|char|for|**signed**
while|const|goto|sizeof|*_Bool*
continue|if|satic|*_Complex*|default
*inline*|struct|*_Imaginary*|do|int
switch|double|long|typedef|else
register|**union**|-|-|-|
### 2.9 关键概念
### 2.10 总结

## 第三章 数据和 C
* 关键字:int, short, long, unsigned, char, float, double,_Bool, _Complex, _Imaginary
* 运算符:sizeof
* 函数:scanf()
* C使用的基本数据类型
* 整数类型和浮点数类型的区别
* 对上述类型，如何书写常量和声明常量
* 使用printf()和scanf()函数读写各种类型的数据

### 3.1 示例程序
```c
/* platinum.c  -- your weight in platinum */
#include <stdio.h>
int main(void)
{
    float weight; /* user weight             */
    float value;  /* platinum equivalent     */

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    /* get input from the user                     */
    scanf("%f", &weight);
    /* assume platinum is $1700 per ounce          */
    /* 14.5833 converts pounds avd. to ounces troy */
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}
```
### 3.2 变量和常量数据
### 3.3 数据：数据类型关键字

原来的K&R关键字|C90的关键字|C99的关键字
:-:|:-:|:-:|
int|signed|_Bool
long|void|_Complex
short|. |_Imaginary
unsigned|.|.|
char|.|.
float|.|.
double|.|.
#### 3.3.1 整数类型和浮点数类型
#### 3.3.2 整数
#### 3.3.3 浮点数
### 3.4 C数据类型
#### 3.4.1 int类型
1. 声明int变量
2. 初始化变量
3. int类型常量
4. 打印int值
5. 八进制和十六进制
6. 显示八进制和十六进制
    * 十进制 %d 八进制 %o 十六进制 %x
    * 显示前缀 %#o %#x %#X
```c
/* bases.c--prints 100 in decimal, octal, and hex */
#include <stdio.h>
int main (void)
{
    int x = 100;

    printf ("dec = %d; octal=%o; hex=%x\n", x, x, x);
    printf ("dec = %d; octal=%#o; hex=%#x\n", x, x, x);

    return 0;
}
```
####  3.4.2 其他整数类型
1. 声明其他整数类型
2. 使用多种整数类型的原因
3. long常量和long long常量
4. 打印short、long、long long和unsigned类型
```c
/* print2.c - mor printf() properties */
#include <stdio.h>
int main(void)
{
    unsigned int un   = 3000000000; /* system with 32-bit int */
    short end         = 200;        /* and 16-bit short */
    long big          = 65537;
    long long verybig = 12345678908642;
    printf("un=%u and not %d\n", un, un);
    printf("end=%hd and %d\n", end, end);
    printf("big=%ld and not %hd\n", big, big);
    printf("verybig=%lld and not %ld\n", verybig, verybig);
    return 0;
}
```
#### 3.4.3 使用字符：char类型
1. 声明char类型变量
2. 字符常量和初始化
3. 非打印字符
    转义序列
    转义序列|含义|转义序列|含义
    |:--:|:--:|:--:|:--:|
    |'\a|警报| "\\"|反斜杠
    |'\b|退格| '\'|单引号
    '\f|换页|'\"|双引号
    '\n|换行|'\?|问好
    '\r|回车|'\0oo|八进制
    '\t|水平制表符|'\xhh|十六进制
    '\v|垂直制表符|.|.
4. 打印字符
```c
/* charcode.c-displays code number for a character */
#include <stdio.h>
int main()
{
    char ch;
    printf("Please enter a character. \n");
    scanf("%c", &ch); /* user inputs character */
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}
```
5. 有符号还是无符号
#### 3.4.4 _Bool类型
#### 3.4.5 可移植类型：stdint.h和inttypes.h
```c
/* altnames.c -- portable names for integer types */
#include <stdio.h>
#include <inttypes.h> // supports portable types
int main(void)
{
    int32_t me32;     // me32 a 32-bit signed variable

    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}
```
#### 3.4.6 float、double和long double
1. 声明浮点型变量
2. 浮点型常量
  * 编译器假定浮点型常量是double类型
  * float型常量加f或F:9.11e9F
  * 十六进制浮点型0xa.1fp10
3. 打印浮点值
  * %f十进制 %e指数计数法 十六进制浮点 a或A
  * long double %Lf %Le %La
```c
/* showf_pt.c -- displays float value in two ways */
#include <stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    // next line requires C99 or later compliance
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}
```
4. 浮点值的上溢和下溢
#### 3.4.7 复数和虚数类型
#### 3.4.8 其他类型

>小结
>关键字:int long short unsigned char float double signed _Bool _Complex _Imaginary
>有符号整型
>* int 不小于16位
>* short/short int 至少16位,不大于int
>* long 至少32位,不小于int
>* long long 至少64, 不小于long
>
>无符号整型 单独unsigned为int
>字符类型
>* char通常8位
>* 布尔类型 _Bool
>
>实浮点类型
>* float 精度至少6位
>* double 进度至少10位
>* long double
>
>复数和虚数浮点数 基于实浮点类型构成

#### 3.4.9 类型大小
%zd类型大小
```c
//* typesize.c -- prints out type sizes */
#include <stdio.h>
int main(void)
{
    /* c99 provides a %zd specifier for sizes */
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n",
           sizeof(long long));
    printf("Type double has a size of %zd bytes.\n",
           sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",
           sizeof(long double));
    return 0;
}
```
### 3.5 使用数据类型
### 3.6 参数和陷阱
```c
/* badcount.c -- incorrect argument counts */
#include <stdio.h>
int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m);    /* too many arguments   */
    printf("%d %d %d\n", n); /* too few arguments    */
    printf("%d %d\n", f, g); /* wrong kind of values */

    return 0;
}
```
### 3.7 转义序列示意
```c
/* escape.c -- uses escape characters */
#include <stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");/* 1 */
    printf(" $_______\b\b\b\b\b\b\b");             /* 2 */
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary,
           salary * 12.0);                         /* 3 */
    printf("\rGee!\n");                            /* 4 */

    return 0;
}
```
#### 3.7.1 程序运行情况
#### 3.7.2 刷新输出
缓冲区满、换行符、需要输入
### 3.8 关键概念
### 3.9 本章小结

## 第四章 字符串和格式化输入/输出
* 函数：strlen()
* 关键字：const
* 字符串
* 如何创建、存储字符串
* 如何使用strlen()函数获取字符串的长度
* 用C预处理器指令#include和ANSIC的const修饰符创建符号常量
### 4.1 前导程序
```c
// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>      // for strlen() prototype
#define DENSITY 62.4     // human density in lbs per cu ft
int main()
{
    float weight, volume;
    int size, letters;
    char name[40];        // name is an array of 40 chars

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n",
           name, volume);
    printf("Also, your first name has %d letters,\n",
           letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}
```
### 4.2 字符串简介
#### 4.2.1 char类型数组和null字符
#### 4.2.2 使用字符串
```c
/* praise1.c -- uses an assortment of strings */
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}
```
#### 4.2.3 strlen()函数
```c
/* praise2.c */
// try the %u or %lu specifiers if your implementation
// does not recognize the %zd specifier
#include <stdio.h>
#include <string.h>      /* provides strlen() prototype */
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
           strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ",
           strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);

    return 0;
}
```
* sizeof(类型) sizeof 特定量
### 4.3 常量和C预处理器
```c
/* pizza.c -- uses defined constants in a pizza context */
#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI *radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum,
           area);
    return 0;
}
```
#### 4.3.1 const 限定符
#### 4.3.2 明示常量
limits.h中的一些明示常量
|**明示常量**|**含义**|
|:-:|:-:|
CHAR_BIT|char类型的位数
CHAR_MAX|char类型的最大值
CHAR_MIN|char类型的最小值
SCHAR_MAX|signed char类型的最大值
SCHAR_MIN|signed char类型的最小值
UCHAR_MAX|unsigned char类型的最大值
...|...
float.h中的一些明示常量
|**明示常量**|**含义**|
|:-:|:-:|
FLT_MANT_DIG|float类型的尾数位数
FLT_DIG|float类信奉的最少有效字位数(十进制)
FLT_MIN_10_EXP|带全部有效数字的float类型的最小负指数(以10为底)
FLT_MAX_10_EXP|float类型的最大正指数(以10为底)

```c
// defines.c -- uses defined constants from limit.h and float.
#include <stdio.h>
#include <limits.h>    // integer limits
#include <float.h>     // floating-point limits
int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    return 0;
}
```
### 4.4 printf()和scanf()
#### 4.4.1 printf()函数
转换说明
|**转换说明**|**输出**|
|:-:|:-|
%a|浮点数、十六进制数和p计数法(C99/C11)
%A|...
%c|单个字符
%d|有符号十进制整数
%e|浮点数、e计数法
%E|...
%f|浮点数，十进制记数法
%g|根据值的不同，自动选择%f或%e。%e格式用于指数小于-4或者大于或等于京都时
%G|...
%i|有符号十进制整数(与%d相同)
%o|无符号八进制整数
%p|指针
%s|字符串
%u|无符号十进制整数
%x|无符号十六进制，使用十六进制数0f
%X|...
%%|打印一个百分号

#### 4.4.2 使用printf()
* 程序清单 4.6
#### 4.4.3 printf()的转换说明修饰符
printf()的修饰符
|**修饰符**|**含义**|
|--|--|
标记|-,+,space,#和0
数字|最小字段宽度
.数字|精度
h|和整型转换说明一起使用,short int或unsigned short int
hh|... signed char或unsigned char
j|... intmax_t或uintmax_t
l|... long int或unsigned long int
ll|... long long
L|和浮点... long double
t|整型... ptrdiff_t 两个指针差值
z|... size_t sizeof返回的类型

printf()中的标记
|**标记**|**含义**|
|-|:-|
-|左对齐
+|加符号
空格|正空格 负-
'#|转换形式
0|0填充字段宽度
1. 使用修饰符和标记的示例
```c
/* width.c -- field widths */
#include <stdio.h>
#define PAGES 959
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}
```
```c
// floats.c -- some floating-point combinations
#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;  // const-style constant

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);

    return 0;
}
```
```c
/* flags.c -- illustrates some formatting flags */
#include <stdio.h>
int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0;
}
```
字符串
```c
/* stringf.c -- string formatting */
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    return 0;
}
```
2. 学以致用
#### 4.4.4 转换说明的意义
1. 转换不匹配
2. printf()的返回值
打印字符的个数
3. 打印较长的字符串
#### 4.4.5 使用scanf()
ANSI C中scanf()的转换说明
|**转换说明**|**含义**|
|:-|:-|
%c|字符
%d|有符号十进制整数
%e、%f、%g、%a|浮点数
%e%f%g%a|...
%i|有符号十进制整数
%o|有符号八进制整数
%p|指针
%s|字符串
%u|无符号十进制整数
%x%X|有符号十六进制整数
scanf()转换说明中的修饰符
|**转换说明**|**含义**|
|:-|:-|
*|抑制赋值
数字|最大字段宽度
hh|把整型作为signed char或unsigned char类型
ll|...long long或unsigned long long
h,l或L|。。
j|intmax_t或uintmax_t
z|sizeof
t|两个指针差值
1. 从scanf()角度看输入
2. 格式字符串中的普通字符
3. scanf()的返回值
