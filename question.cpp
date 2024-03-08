#include <stdio.h>
#define Maxsize 10
typedef struct{
	int data[Maxsize];
	int length=7;
}SQ;
bool dele(SQ &L,int s, int t){
	int i,k=0;
	if(L.length==0||s>=t){
		return false;
		for(i=0;i<L.length;i++){
			if(L.data[i]>=s&&L.data[i]<=t)
			k++;
			else
				L.data[i-k]=L.data[i];
			
		}
		L.length-=k;
		return true;
	}
}
int main(){
	SQ L;
	L.data[0]=1;
	L.data[1]=1;
	L.data[2]=2;
	L.data[3]=3;
	L.data[4]=4;
	L.data[5]=5;
	L.data[6]=6;
	dele(L,1,3);
		for(int i=0;i<L.length;i++)
		printf("data[%d]=%d\n",i,L.data[i]);
		
	
	return 0;
}
