#include <stdio.h>

int main(void) {
	int p[3];
	int count=0;
	scanf("%d %d %d %d",&p[0],&p[1],&p[2],&p[3]);
	for(int i=0;i<3;i++)
	{
	  if(p[i]<10)
	  {
	      count++;
	  }
	}
	printf("%d",count);
	return 0;
}