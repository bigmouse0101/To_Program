// 本题要求编写程序，计算学生们的平均成绩，并统计及格（成绩不低于60分）的人数。题目保证输入与输出均在整型范围内。

// 输入格式: 输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔。 

// 输出格式: 按照以下格式输出：

// average = 成绩均值
// count = 及格人数
// 其中平均值精确到小数点后一位。 

// 输入样例:
// 5
// 77 54 92 73 60
// 输出样例:
// average = 71.2
// count = 4

#include <stdio.h>
int main()
{
	int i,n,count;
	double score,s;
	scanf("%d",&n);
        count=0;
	s=0;
	for(i=0;i<n;i++){
		scanf("%lf",&score);
		s+=score;
		if(score>=60){
			count++;
		}	
	}
	if(n==0){
		printf("average = 0.0\n");
		printf("count = 0");
	}else{
	printf("average = %.1f\n",s/n);
	printf("count = %d",count);
    }
	
	return 0;
}
//count用于统计个数，注意n=0的时候要单独讨论，不然测试点没分
