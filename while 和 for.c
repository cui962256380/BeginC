#include <stdio.h>
int main() {

	int fahr =0 ; //�����¶�
	int celsius=0; //�����¶�
	int lower =0; //�¶ȱ������
	int upper =300; //�¶ȱ������
	int step =20 ;  //���

	//�� =��5/9�� *��f-32��    == 5 * (f-32)/9

	while(fahr <= upper) { //�ж������Ƿ�����
		celsius = 5 * (fahr-32) /9 ;
		printf("While %3d\t%6d\n",fahr,celsius);  //%3d ==����ռ 3���ַ����
		fahr = fahr+step ;
	}
	int i;   //gcc ������    for(int i= 0; i <= 10; i++) ����д������������� 
	for( i= 0; i <= 10; i++) {
		printf("For %3d \n",i);  //%3d ==����ռ 3���ַ����
	}



	return 0;

}
