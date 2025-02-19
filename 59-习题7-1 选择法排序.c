// 本题要求将给定的n个整数从大到小排序后输出。

// 输入格式：输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。

// 输出格式：在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。

// 输入样例：
// 4
// 5 1 7 6
// 输出样例：
// 7 6 5 1

#include<stdio.h>
int main()
{
    int n,index,i,k,temp;
    int a[10];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
	//对n个数进行排序 
    for(k=0;k<n-1;k++){
    	index=k;//index存放最大值所在的下标 
        for(i=k+1;i<n;i++){
        	if(a[i]>a[index]){
        		index=i;
			}
		}//一次大循环中，内循环都执行完后才进行一次交换部分 
		temp=a[index];////最大元素与下标为k的元素交换，每一轮保证剩余部分最大值在相对最高位
		a[index]=a[k];
		a[k]=temp;
    }
    for(i=0;i<n-1;i++){
    	printf("%d ",a[i]);
	}
    printf("%d",a[n-1]);
	printf("\n");
	
    return 0;
}
