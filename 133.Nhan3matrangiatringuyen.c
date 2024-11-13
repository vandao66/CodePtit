#include <stdio.h>
#include <math.h>
#include <string.h>
// đầu vào lần lượt là n,m,p a(nxm) b(mxp) và array để lưu
// tích ma trận
void tmt(int n,int m,int p,int a[][100],int b[][100],int c[][100]){
	for(int i=0;i<n;i++){
	    for(int q=0;q<p;q++){
		int s=0;
		for(int j=0;j<m;j++){
		    int c=a[i][j]*b[j][q];
			s+=c;
		}
		c[i][q]=s;
	}
	}
}
int main(){
	int n,m,p,q;
	scanf("%d %d %d %d",&m,&n,&p,&q);
	int a[100][100],b[100][100],c[100][100],d[100][100],e[100][100];
	// nhập các ma trận vào
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&c[i][j]);
		}
	}
	//  ma trận a nhân b lưu vào d, d đem nhân với c lưu vào e
	tmt(m,n,p,a,b,d);
	tmt(m,p,q,d,c,e);
	//in ra ma trận e là tích 3 ma trận
    for(int i=0;i<m;i++){
    	for(int j=0;j<q;j++){
    		printf("%d ",e[i][j]);
		}
		printf("\n");
	}
	return 0;
}