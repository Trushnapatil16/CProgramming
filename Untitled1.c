#include<stdio.h>
int main()
{
	int var=789;
	//pointer for var
	int*ptr2;
	
	//double pointer for ptr2
	int**ptr1;
	
	//storing address of var in ptr2
	ptr2=&var;
	
	//storing address of var in ptr2
	ptr2=&ptr2;
	
	
	printf("value of var=%d\n",var);
	printf("value of var using single pointer=%d\n",*ptr2);
	printf("value of var using double pointer=%d\n",**ptr1);
	
	return 0;
}
