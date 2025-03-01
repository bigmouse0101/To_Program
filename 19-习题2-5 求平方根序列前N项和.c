// 本题要求编写程序，计算平方根序列 根号1 + 根号2 ​+ 根号3 + ⋯ 的前N项之和。可包含头文件math.h，并调用sqrt函数求平方根。

// 输入格式: 输入在一行中给出一个正整数N。

// 输出格式: 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后两位。题目保证计算结果不超过双精度范围。

// 输入样例:
// 10
// 输出样例:
// sum = 22.47

#include<stdio.h>
#include<math.h> 
int main()
{
	int i,N;
	double s;
	scanf("%d",&N);
	s=0;
	for(i=1;i<=N;i++){
	    s=s+sqrt(i);
	    //不用写i=i+1 
	}
	printf("sum = %.2f\n",s);
	return 0;
}
//下文与该题目无关。
/*改文件顺便发个牢骚：今天终于切身体会到什么叫“一朝被蛇咬，十年怕井绳”； 并且今天（2025/2/16）有了新的人生体验：不由自主地抽搐+发抖 真的自己控制不了...
还有，拔完智齿去旁边的社区医院吊水，护士技术不错，且接近手的管子被粘上了暖贴固定在衣服上（虽然这样也没能阻止我的左手冷得快没知觉了）但还是感叹社区医院居然已经人性化到这个程度了...
现代医学的发展对普通人的意义无非就是能减轻人的痛苦...或许人类有一天也能完全战胜癌症。经常上医院+打麻药+吊水
（在此许愿以后都要健健康康的少上医院！平安喜乐！万事胜意！努力都有回报！）的人都知道，的的确确各项技术是有发展的。
就单说麻药这么一个事，将近十年前拔牙打麻药的时候感觉很疼，一个针就直直地戳进去了；但是今天打麻药的时候基本没有什么感觉；以我粗糙的物理学知识，应当是“面积增大，压强减小”；
另外就是装留置针这个事，2022年暑假的时候扎的感觉很疼，但2024年暑假再扎的时候基本没什么感觉了（但也不排除医生/护士技术问题）
记得之前在哔站上看到评论说 有公司已经在发明鼻吸式胰岛素了...不过从临床试验到上市 再普及 又不知道要花多长时间。
另外，不是有一句话这么说吗“你的苦难就是他的遗憾”。 毛主席应该说过这么一句话“我提议，学生的睡眠时间再增加一小时。现在是八小时，
实际上只有六七小时，普遍感到睡不够。因为知识青年容易神经衰弱，他们往往睡不着，醒不来。一定要规定九小时睡眠时间。要下一道命令，不要讨论，强迫执行。青年们要睡好，教师也要睡足。”
但是现在现实很骨感。六个小时已经很难了...更别说九个小时...*/
