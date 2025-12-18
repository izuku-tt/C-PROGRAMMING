#include <stdio.h>
int main() {
	int r;
	printf("enter the number of rows:");
	scanf("%d",&r);
	int c;
	printf("enter the number of column:");
	scanf("%d",&c);
	int arr[r][c];
	printf("enter the value for %d*%d matrix\n",r,c);

	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int transpose[c][r];
	for (int i=0; i<c; i++) {
		for (int j=0; j<r; j++) {
			transpose[i][j]=arr[j][i];
		}
    }
		printf("the transpose is:\n");
		for (int i=0; i<c; i++) {
			for (int j=0; j<r; j++) {
				printf("%d ",transpose[i][j]);
			}
			printf("\n");
		}
    return 0;
}