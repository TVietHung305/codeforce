#include<stdio.h>
# define MAX 5

void find_location(int arr[MAX][MAX], int *row, int *col){
	int k,l;
	for( k = 0; k < 5; k++){
		for( l = 0; l < 5; l++){
			if(arr[k][l] == 1){
				*row = k;
				*col = l;
				return;
			}
		}
	}
}

int main(){
	int arr[MAX][MAX];
	int i,j;
	int row, col;
	int count = 0;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	find_location(arr, &row, &col);
	
	do{
		if(arr[row][col] == arr[2][2] && arr[2][2] == 1){
			break;
		}
		
		if(row < 2){
			row++;
			count++;	
		}else if(row > 2){
			row--;
			count++;
		}
		if(col < 2){
			col++;
			count++;	
		}else if(col > 2){
			col--;
			count++;
		}
		
	}while(row != 2 || col != 2);
	printf("%d\n", count);
	return 0;
}
