#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

	int v1=0;
	int v2=0;

	if(argc!=2)
		exit(0);	

	for(v1=1; v1<9;v1++)
		for(v2=1;v2<9;v2++)
			printf("%d\n",v1*v2);


	return 0;
}
