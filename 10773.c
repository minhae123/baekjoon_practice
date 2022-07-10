#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, result, i, j, tmep=1;
	
	scanf("%d", &a);
	
	int*arr=(int*)malloc(sizeof(int)*a);
	
	for(i=0, j=0;i<a;i++, j++){
	scanf("%d", &arr[i]);
	
	if(arr[i]==0){
		while(arr[j]==0){
result-=arr[j-1];
j--;
}
	result-=arr[i-1];
	}
	result+=arr[i];
	}
	printf("%d", result);	
/*
while(arr[i]==0){
result-=arr[i-1];
i--;
}
*/

return 0;
}


