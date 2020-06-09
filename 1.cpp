#include<stdio.h>
int a[200];
int Gery(int n,int t){//格雷码长度为t=num ,n代表第几次划分
	int i,j;
	if(n>1) 
	   Gery(n-1,t);
        /*如果上次最末尾为0，此次变为1*/
	if(a[n-1]==0)
	   a[n-1]=1;
	/*如果上次最末尾为1，此次变为0*/
	else
	   a[n-1]=0;
	/*输出此次格雷码*/ 
	for(int i=t-1;i>=0;i--)
	   printf("%d",a[i]);
	printf("\n");
	if(n>1)
	   Gery(n-1,t);
}
int main(){
	int n;
	printf("请输入n：");
	scanf("%d",&n) ;
	
	Gery(0,n);
	Gery(n,n);

}
