#include <stdio.h>

int main() {								    	//c	   //java 

	printf("char�����ֽ���=%d\n",sizeof(char));  //  sizeof()==��С   		 1     2

	printf("short�����ֽ���=%d\n",sizeof(short));  //  sizeof()==��С 		 2     2
	
	printf("int�����ֽ���=%d\n",sizeof(int));  //  sizeof()==��С    		 4     4
	
	printf("long�����ֽ���=%d\n",sizeof(long));  //  sizeof()==��С  		 8     8
	
	printf("doubule�����ֽ���=%d\n",sizeof(double));  //  sizeof()==��С    8      2
	
	
	int  *p;	
	char *cp;
		
	printf("int ָ�������ֽ���=%d\n",sizeof(p));  //  sizeof()==��С       8
	printf("char ָ�������ֽ���=%d\n",sizeof(cp));  //  sizeof()
	
	return 0;

}
