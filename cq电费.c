#include<stdio.h>

int main(){
	double a,b;
	printf("请输入月用电量：\n");
	scanf("%lf",&a);
	if(a<=50){
		b=a*0.53;
	}else{
		b=a*0.58;
	}
printf(	"应支付电费=%.2f\n",b);
	return 0;
}

/*
  为了倡导居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的居民用户电价分为两个“阶梯”：月用电量50千瓦时以内的(<= 50)，电价为0.53元/千瓦时；月用电量超过50千瓦时，所有用电电价为0.58元/千瓦时。编写程序，输入用户的月用电量（千瓦时），计算并输出该用户应支付的电费（元）。
  
 **输入提示信息："请输入月用电量：\n"
 **输入格式要求："%lf" 
 **输出格式要求："应支付电费=%.2f\n"
  
  程序运行示例如下：
  请输入月用电量：
  32↙
  应支付电费=16.96↙
  
  
  请输入月用电量：
  100↙
  应支付电费=58.00↙
 */
