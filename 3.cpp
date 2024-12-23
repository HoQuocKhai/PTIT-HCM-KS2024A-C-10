#include<stdio.h>

int main(){
	int arr[]={1,3,2,10,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for (int i = 1; i < n; i++){
		int flag = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j]> flag){
			arr[j + 1] = arr[j];
			j = j -1;
		}
		arr[j + 1]= flag;
	}
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
}
