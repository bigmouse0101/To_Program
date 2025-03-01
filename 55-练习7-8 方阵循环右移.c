// 本题要求编写程序，将给定n×n方阵中的每个元素循环向右移m个位置，即将第0、1、⋯、n−1列变换为第n−m、n−m+1、⋯、n−1、0、1、⋯、n−m−1列。

// 输入格式： 输入第一行给出两个正整数m和n（1≤n≤6）。接下来一共n行，每行n个整数，表示一个n阶的方阵。

// 输出格式： 按照输入格式输出移动后的方阵：即输出n行，每行n个整数，每个整数后输出一个空格。

// 输入样例：
// 2 3
// 1 2 3
// 4 5 6
// 7 8 9
// 输出样例：
// 2 3 1 
// 5 6 4 
// 8 9 7 

#include<stdio.h>
int main()
{
    int i,j,n,m;
    int a[6][6];
    
	scanf("%d %d",&m,&n);
    
    if(n<1||n>6){
    	printf("error");
	}
	//遍历赋值 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);//scanf的双引号里不要带空格；不要忘了写取地址符！！！ 
        }
    }
    m%=n;//m=n时复原了，没有变化，所以取余数 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][(n-m+j)%n]);// (n-m+j)%n需要分析出来 
        }
        putchar('\n');
    }
    return 0;
}
