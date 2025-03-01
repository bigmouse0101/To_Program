// 本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。

// 输入格式: 输入为10个字符。最后一个回车表示输入结束，不算在内。

// 输出格式: 在一行内按照 letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数的格式输出。

// 输入样例:
// aZ &
// 09 Az
// 输出样例:
// letter = 4, blank = 3, digit = 2, other = 1

#include<stdio.h>
int main()
{
	int i,letter=0,digit=0,blank=0,other=0;
	char ch;
	for(i=1;i<=10;i++){
		scanf("%c",&ch);//'&'不能丢！！！
		if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A')){
			letter++;
		}else if(ch==' '||ch=='\n'){
			blank++;
		}else if(ch>='0'&&ch<='9'){
			digit++;
		}else{
			other++;
		}
		}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	return 0;
}
//注意字符需要用单引号引起来；另外判断需要用双等号，一个等号会报错
