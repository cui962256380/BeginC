#include <stdio.h>

int main() {								    	//c	   //java 

	printf("char类型字节数=%d\n",sizeof(char));  //  sizeof()==大小   		 1     2

	printf("short类型字节数=%d\n",sizeof(short));  //  sizeof()==大小 		 2     2
	
	printf("int类型字节数=%d\n",sizeof(int));  //  sizeof()==大小    		 4     4
	
	printf("long类型字节数=%d\n",sizeof(long));  //  sizeof()==大小  		 8     8
	
	printf("doubule类型字节数=%d\n",sizeof(double));  //  sizeof()==大小    8      2
	
	
	int  *p;	
	char *cp;
		
	printf("int 指针类型字节数=%d\n",sizeof(p));  //  sizeof()==大小       8
	printf("char 指针类型字节数=%d\n",sizeof(cp));  //  sizeof()
	
	return 0;

}
