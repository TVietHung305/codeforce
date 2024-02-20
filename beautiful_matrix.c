#include<stdio.h>

int main(){
	int arr[MAX][MAX];
	int i,j;
	int row, col;
	int count = 0;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			scanf("%d", &arr[i][j]);
			if(arr[i][j] == 1){
				count = abs(i-3) + abs(j-3);
			}
		}
	}	
	printf("%d\n", count);
	return 0;
}
