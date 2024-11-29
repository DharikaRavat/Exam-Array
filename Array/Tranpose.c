#include <stdio.h>

int main() {
	
    int i,j,rows, cols;
    
    printf("Enter the array's row & column size: ");
    scanf("%d %d", &rows,&cols);

    
    int array[rows][cols], transpose[cols][rows];
    
    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = array[i][j];
        }
    }
    
    printf("The transpose matrix of an array:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
