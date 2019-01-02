#include <stdio.h>


int add() {
	int sum; //返回结果，定义的时候会申请 内存中的4个字节
	int a, b;

	printf("请输入做加法两个数字:\n");

	scanf("%d %d",&a,&b);	 //输入也要用-输入
	sum = a +b ;
	return sum;
}

int minus() {
	int result; //返回结果，定义的时候会申请 内存中的4个字节
	int a, b;

	printf("请输入做减法两个数字:\n");

	scanf("%d %d",&a,&b);	 //输入也要用-输入
	result = a  -b ;
	return result;
}

int chengfa() {
	int result; //返回结果，定义的时候会申请 内存中的4个字节
	int a, b;

	printf("请输入做乘法两个数字:\n");

	scanf("%d %d",&a,&b);	 //输入也要用-输入
	result = a  * b ;
	return result;
}

int chufa() {
	int result; //返回结果，定义的时候会申请 内存中的4个字节
	int a, b;

	printf("请输入做除法两个数字:\n");

	scanf("%d %d",&a,&b);	 //输入也要用-输入
	if(b == 0){
		printf("除数不能为0");
		return 0 ; 
	}
	result = a  / b ;
	printf("a / b =%d \n",result);
	return result;
}

void switchcalc() {
	int a;
	int result;
	printf("请选择加减乘除");
	printf("1：加法");
	printf("2：减法");
	printf("3: 乘法");
	printf("4: 除法\n");
	scanf("%d-%d",&a);

	switch(a) {
		case 1 :
			result = add();
			printf("a + b =%d \n",result);
			break;
		case 2 :
			result = minus();
			printf("a - b =%d \n",result);
			break;
		case 3 :
			result = chengfa();
			printf("a * b =%d \n",result);
			
			break;
		case 4 :
			chufa();
			break;
	}

}


int main(int argc,char const *argv[]) {

	switchcalc();

	return 0;
}
