#include<stdio.h>
int a[200];
int Gery(int n,int t){//�����볤��Ϊt=num ,n����ڼ��λ���
	int i,j;
	if(n>1) 
	   Gery(n-1,t);
        /*����ϴ���ĩβΪ0���˴α�Ϊ1*/
	if(a[n-1]==0)
	   a[n-1]=1;
	/*����ϴ���ĩβΪ1���˴α�Ϊ0*/
	else
	   a[n-1]=0;
	/*����˴θ�����*/ 
	for(int i=t-1;i>=0;i--)
	   printf("%d",a[i]);
	printf("\n");
	if(n>1)
	   Gery(n-1,t);
}
int main(){
	int n;
	printf("������n��");
	scanf("%d",&n) ;
	
	Gery(0,n);
	Gery(n,n);

}
