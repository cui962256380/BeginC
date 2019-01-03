#include <stdio.h>

/*arr[] =形参*/ 
/*形参 和 实参 的地址 是一样的  不会创建新的数组 */
/*
* 地址就等同于 酒店的房间号 
*/
void addStudentNo(int arr[])
{	
	printf("arr[0] 地址=%p \n",&arr[0]);    
	
	printf("请输入学生编号: \n");
	int i;
	for(i=0; i<5; i++) {
	 	scanf("%d",&arr[i]);  // c  是面向内存进行赋值的，所以是&arr[i]    
	}						  //  scanf 不能有其他的内容 只能有 占位符 和 具体的要赋值的地址 
		
} 



int main(int argc,char const *argv[]) 
{
	int it; 
	 
	int studentNoArr[5];    //int =4个字节， 5个int 就是20个字节大小   这块内存是连续的
	
	int arr[3] ={02,18,22};
	int arrlen=sizeof(arr)/sizeof(int); //数组的长度等于  数组的大小 /具体类型的大小
	for(it =0; it<arrlen;it++){
		printf("arr[%d]的值为%d \n",it,arr[it]);
	
	} 
	 
	
	printf("studentNoArr数组的大小%d \n",sizeof(studentNoArr));

	int i ; 
	for(i=0; i<5; i++) {
		printf("studentNoArr Id=[%d] 地址=%p \n",i,&studentNoArr[i]);   //&代表着地址 地址 是16位的   %p 是打印地址的 /* #和p一起 =0x可有可无 */
	}
	
	addStudentNo(studentNoArr); // studentNoArr 实际参数 
	
	for(i=0; i<5; i++) {
		printf("studentNoArr Id=[%d] 编号=%d \n",i,studentNoArr[i]);   //&代表着地址 地址 是16位的   %p 是打印地址的 /* #和p一起 =0x可有可无 */
	}
	
	return 0;

}
