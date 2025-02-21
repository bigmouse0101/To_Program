// 本题要求编写程序，读入5个字符串，按由小到大的顺序输出。

// 输入格式：输入为由空格分隔的5个非空字符串，每个字符串不包括空格、制表符、换行符等空白字符，长度小于80。

// 输出格式：按照以下格式输出排序后的结果：

// After sorted:
// 每行一个字符串
// 输入样例：
// red yellow blue black white
// 输出样例：
// After sorted:
// black
// blue
// red
// white
// yellow

#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][80];
    char t[80];
    int i,j;
    for(i=0;i<5;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }
    }
    printf("After sorted:\n");
    for(i=0;i<5;i++){
        printf("%s\n",a[i]);
    }
}
