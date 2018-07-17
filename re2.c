#include <stdio.h>
int foo(int a1, int a2, int a3)
{
	return a1+a2+a3;
}
int main()
{
	char v1[1024]={0};
	
	foo(1,2,10);

	printf("%d",foo(5,1,2));
	return 0;

}
