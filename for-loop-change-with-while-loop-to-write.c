#include<stdio.h>
int main () {
	int a[10],i,t,ture=0,juge1=1,n;
	printf("请输入你要循环元素的个数(不能太大)：\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
		a[i]=1;
	t=1;
	while(1) {
		for(i=n-1; i>-1; i--)
			printf("%-5d",a[i]);
		printf("\n");
		if(a[0]==n) {
			a[0]=0;
			while(1) {
				if(a[t]==n)
					a[t]=1,t++;
				else
					ture=1,a[t]++;
				if(ture==1) {
					t=1;
					break;
				}
				if(t==n) {
					juge1=0;
					break;
				}
			}
		}
		ture=0;
		a[0]++;
		if(juge1==0)
			break;
	}
}
