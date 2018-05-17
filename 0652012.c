#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void remain(int[]);
void remain1(int[]);

int main()
{
	int pon[5],a=0;
	remain(pon);
	remain1(pon);
	for(a=0;a<5;a++)
	printf("%d\n",pon[a]);
	return 0;
}

void remain(int data[])
{
	 int i,x;
    srand( (unsigned)time(NULL));//產生10~40亂數 
    for(x=0; x<5 ; x++){         //將亂數依序存入陣列 
		data[x]=10+rand()%41 ;  
		for(i=0;i<x;i++){
			if(data[i]==data[x]){
				data[i]=rand()%41+10;
				i=i-1;	
			}
				
		}	     
    }
	return;   
}
void remain1(int vixx[])       //亂數排大小 
{
	int x=0,y=0;
	int temp=0;
	for(x=0;x<5;x++){
		for(y=0;y<x;y++){
			if(vixx[y]>vixx[x]){
				temp=vixx[y];
				vixx[y]=vixx[x];
				vixx[x]=temp;
			}
			
		}
	}
	return;
}
