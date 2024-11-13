#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a[100];
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int d=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]) d++;
		}
		printf("%d\n",d);
	}
	return 0;
}