#include <stdio.h>

void addStudentArr(int arrStudent[][3]){  //�βα��� ָ����ά�� 
	int i,j;
	for (i =0;i< 2;i++){
		for (j=0;j<3;j++){
			printf("������[%d][%d]�ı�ţ� \n",i,j);
			scanf("%d",&arrStudent[i][j]);			
		}
	}
	 	
	
}



int main(int argc,char const *arrgv[])
{
	int arr[][3]={1,2,3,4};  //  ��ά������붨�� ��ά���У�    ������������� 6�� int���ֽ�    {1,2,3,4} ��������3 ��ά������У��൱��2�У����Ծ��� 2*3 
	
	int arrlen=sizeof(arr)/sizeof(int);
	int arrlenone=arrlen/3;
	
	
	printf("arrlen=%d arrlenone=%d \n",arrlen,arrlenone); 
	
	printf("arr[0][0]= %d \n",arr[0][0]); 
	printf("arr[1][2]= %d \n",arr[1][2]);    //ֻ���������ڴ棬��û�и�ֵ������Ϊ0��  �����ڴ��Ǵ��ڵ� 
	 
	 
   int studentarr[2][3];
   
   addStudentArr(studentarr);   //ʵ�ʲ��� 
	 

	int i,j;
	for (i =0;i< 2;i++){
		for (j=0;j<3;j++){
			printf("[%d][%d]�ı��Ϊ %d \n",i,j,studentarr[i][j]);		
		}
	}	
	
		
   return 0;
	 
} 
