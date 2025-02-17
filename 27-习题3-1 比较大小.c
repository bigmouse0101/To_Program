// 本题要求将输入的任意3个整数从小到大输出。

// 输入格式: 输入在一行中给出3个整数，其间以空格分隔。

// 输出格式: 在一行中将3个整数从小到大输出，其间以“->”相连。 

// 输入样例:
// 4 2 8
// 输出样例:
// 2->4->8

#include<stdio.h>
int main()
{   
    int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&b<c){
		printf("%d->%d->%d",a,b,c);
	}else if(a<c&&c<b){
		printf("%d->%d->%d",a,c,b);
	}else if(b<c&&c<a){
		printf("%d->%d->%d",b,c,a);
	}else if(b<a&&c>a){
		printf("%d->%d->%d",b,a,c);
	}else if(c<a&&b>a){
		printf("%d->%d->%d",c,a,b);
	}else{
		printf("%d->%d->%d",c,b,a);
	}
	return 0;
}
//三个数的比大小用if-else还可以，但是再多的数进行排序的话就考虑用排序法了。
