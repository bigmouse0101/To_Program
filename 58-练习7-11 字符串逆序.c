// 输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。 

// 输入格式： 输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。 

// 输出格式： 在一行中输出逆序后的字符串。 

// 输入样例：
// Hello World!
// 输出样例：
// !dlroW olleH

#include<stdio.h>
#include<string.h>
int main()
{
    char a[81];
    gets(a);
    int len=strlen(a);
    int i,t;
    for(i=0;i<len/2;i++){
        //把字符串前一半与后一半对应交换，二者下标相加为定值
        t=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=t;
        
    }
    for(i=0;i<len;i++){
        printf("%c",a[i]);
    }
}
//这道题主要注意第一个for循环中条件控制问题，不能写成“i<len”。另外“gets(a)”这种写法一般都会显示warning，说是不安全啊什么的，但只要能跑动就行。涉及到字符串问题的要加<string.h>头文件。
