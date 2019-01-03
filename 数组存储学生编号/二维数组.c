#include <stdio.h>

void addStudentArr(int arrStudent[][3]){  //形参必须 指明二维列 
	int i,j;
	for (i =0;i< 2;i++){
		for (j=0;j<3;j++){
			printf("请输入[%d][%d]的编号： \n",i,j);
			scanf("%d",&arrStudent[i][j]);			
		}
	}
	 	
	
}



int main(int argc,char const *arrgv[])
{
	int arr[][3]={1,2,3,4};  //  二维数组必须定义 二维的列，    这个就是申请了 6个 int的字节    {1,2,3,4} 个数大于3 二维数组的列，相当于2行，所以就是 2*3 
	
	int arrlen=sizeof(arr)/sizeof(int);
	int arrlenone=arrlen/3;
	
	
	printf("arrlen=%d arrlenone=%d \n",arrlen,arrlenone); 
	
	printf("arr[0][0]= %d \n",arr[0][0]); 
	printf("arr[1][2]= %d \n",arr[1][2]);    //只是申请了内存，并没有赋值，所以为0；  但是内存是存在的 
	 
	 
   int studentarr[2][3];
   
   addStudentArr(studentarr);   //实际参数 
	 

	int i,j;
	for (i =0;i< 2;i++){
		for (j=0;j<3;j++){
			printf("[%d][%d]的编号为 %d \n",i,j,studentarr[i][j]);		
		}
	}	
	
		
   return 0;
	 
} 
