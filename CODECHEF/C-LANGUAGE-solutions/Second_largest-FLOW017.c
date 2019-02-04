#include<stdio.h>

int main (void)
{
   	int t;
   	scanf("%d",&t);
  	while(t--)
   	{
   		int a,b,c,max1,max2,temp;
   		scanf("%d %d %d",&a,&b,&c);
   		max1=a;
   		max2=b;

   		if(max1<max2){
            temp=max2;
            max2=max1;
            max1=temp;
   		}


   		if(c>max1){
            max2=max1;
            max1=c;
   		}
   		else if(max2<c){
            max2=c;
   		}

   		printf("%d\n",max2);
   	}

   	return 0;
}

