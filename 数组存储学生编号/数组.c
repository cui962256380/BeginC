#include <stdio.h>

/*arr[] =�β�*/ 
/*�β� �� ʵ�� �ĵ�ַ ��һ����  ���ᴴ���µ����� */
/*
* ��ַ�͵�ͬ�� �Ƶ�ķ���� 
*/
void addStudentNo(int arr[])
{	
	printf("arr[0] ��ַ=%p \n",&arr[0]);    
	
	printf("������ѧ�����: \n");
	int i;
	for(i=0; i<5; i++) {
	 	scanf("%d",&arr[i]);  // c  �������ڴ���и�ֵ�ģ�������&arr[i]    
	}						  //  scanf ���������������� ֻ���� ռλ�� �� �����Ҫ��ֵ�ĵ�ַ 
		
} 



int main(int argc,char const *argv[]) 
{
	int it; 
	 
	int studentNoArr[5];    //int =4���ֽڣ� 5��int ����20���ֽڴ�С   ����ڴ���������
	
	int arr[3] ={02,18,22};
	int arrlen=sizeof(arr)/sizeof(int); //����ĳ��ȵ���  ����Ĵ�С /�������͵Ĵ�С
	for(it =0; it<arrlen;it++){
		printf("arr[%d]��ֵΪ%d \n",it,arr[it]);
	
	} 
	 
	
	printf("studentNoArr����Ĵ�С%d \n",sizeof(studentNoArr));

	int i ; 
	for(i=0; i<5; i++) {
		printf("studentNoArr Id=[%d] ��ַ=%p \n",i,&studentNoArr[i]);   //&�����ŵ�ַ ��ַ ��16λ��   %p �Ǵ�ӡ��ַ�� /* #��pһ�� =0x���п��� */
	}
	
	addStudentNo(studentNoArr); // studentNoArr ʵ�ʲ��� 
	
	for(i=0; i<5; i++) {
		printf("studentNoArr Id=[%d] ���=%d \n",i,studentNoArr[i]);   //&�����ŵ�ַ ��ַ ��16λ��   %p �Ǵ�ӡ��ַ�� /* #��pһ�� =0x���п��� */
	}
	
	return 0;

}
