#include<stdio.h>

int main(){
	int flag,arr[5]={1,2,3,4,5};
	printf("hay nhap vao phan tu can kiem tra: ");
	scanf("%d",&flag);
	for(int i=0;i<5;i++){
		if(flag==arr[i]){
			printf("%d",i);
			return 0;
		}
	}
	printf("phan tu khong ton tai trong mang");
	return 0;
}
