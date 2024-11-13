#include <stdio.h>
void snp(int n){
	int l=0,a[100];
	if(n==0) printf("0");
	while(n>0){
		int d=n%2;
		a[l++]=d;
		n/=2;
	}
	for(int i=l-1;i>=0;i--){
		printf("%d",a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	snp(n);
	return 0;
}