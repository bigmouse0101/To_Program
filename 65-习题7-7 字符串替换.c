// 本题要求编写程序，将给定字符串中的大写英文字母按以下对应规则替换：

// 原字母	对应字母
// A	Z
// B	Y
// C	X
// D	W
// …	…
// X	C
// Y	B
// Z	A
// 输入格式：输入在一行中给出一个不超过80个字符、并以回车结束的字符串。

// 输出格式：输出在一行中给出替换完成后的字符串。

// 输入样例：
// Only the 11 CAPItaL LeTtERS are replaced.
// 输出样例：
// Lnly the 11 XZKRtaO OeGtVIH are replaced.

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
	char arr[81];
	gets(arr);
	
	int length=strlen(arr);//不是strlen（arr[i]） 
	for(i=0;i<length;i++){
	    if(arr[i]>='A'&&arr[i]<='Z'){
		   printf("%c",155-arr[i]);
    	}else{
		printf("%c",arr[i]);
	    }
	}
    return 0;
}
