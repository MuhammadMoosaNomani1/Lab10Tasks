#include<stdio.h>
int main(){
	int r,c;
	printf("Enter row: ");
	scanf("%d", &r);
	printf("Enter column: ");
	scanf("%d", &c);
	int matrix[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int sum = 0;
	
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sum=sum+matrix[i][j];
		}
		
	}
		printf("\nSum of all elements in matrix is %d \n",sum);
		
		return 0;
}


