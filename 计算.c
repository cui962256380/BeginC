#include <stdio.h>


int add() {
	int sum; //���ؽ���������ʱ������� �ڴ��е�4���ֽ�
	int a, b;

	printf("���������ӷ���������:\n");

	scanf("%d %d",&a,&b);	 //����ҲҪ��-����
	sum = a +b ;
	return sum;
}

int minus() {
	int result; //���ؽ���������ʱ������� �ڴ��е�4���ֽ�
	int a, b;

	printf("��������������������:\n");

	scanf("%d %d",&a,&b);	 //����ҲҪ��-����
	result = a  -b ;
	return result;
}

int chengfa() {
	int result; //���ؽ���������ʱ������� �ڴ��е�4���ֽ�
	int a, b;

	printf("���������˷���������:\n");

	scanf("%d %d",&a,&b);	 //����ҲҪ��-����
	result = a  * b ;
	return result;
}

int chufa() {
	int result; //���ؽ���������ʱ������� �ڴ��е�4���ֽ�
	int a, b;

	printf("��������������������:\n");

	scanf("%d %d",&a,&b);	 //����ҲҪ��-����
	if(b == 0){
		printf("��������Ϊ0");
		return 0 ; 
	}
	result = a  / b ;
	printf("a / b =%d \n",result);
	return result;
}

void switchcalc() {
	int a;
	int result;
	printf("��ѡ��Ӽ��˳�");
	printf("1���ӷ�");
	printf("2������");
	printf("3: �˷�");
	printf("4: ����\n");
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
