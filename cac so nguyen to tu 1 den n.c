#include <stdio.h>
int main(){
	unsigned long long i,n,test=1;
	printf("nhap n: ");
	scanf("%llu",&n);
    for(i=1;i<n;i++){
    	if(n%i==0){
    		test=-1;
		}
	}
	if(test==1){
		printf("n la so nguyen to");
	}
	else{
		printf("n khong phai la so nguyen to");
	}

	return 0;
}
    
       
      
