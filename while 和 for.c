#include <stdio.h>
int main() {

	int fahr =0 ; //华氏温度
	int celsius=0; //摄氏温度
	int lower =0; //温度表的下限
	int upper =300; //温度表的上线
	int step =20 ;  //间隔

	//℃ =（5/9） *（f-32）    == 5 * (f-32)/9

	while(fahr <= upper) { //判断条件是否满足
		celsius = 5 * (fahr-32) /9 ;
		printf("While %3d\t%6d\n",fahr,celsius);  //%3d ==至少占 3个字符宽度
		fahr = fahr+step ;
	}
	int i;   //gcc 不允许    for(int i= 0; i <= 10; i++) 这种写法，必须提出来 
	for( i= 0; i <= 10; i++) {
		printf("For %3d \n",i);  //%3d ==至少占 3个字符宽度
	}



	return 0;

}
