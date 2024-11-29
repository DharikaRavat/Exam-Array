#include <stdio.h>

int main() {
	
    int i , j, rows, cols;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int array[rows][cols];
    
    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    int num1, num2;
    
    printf("Enter row number: ");
    scanf("%d", &num1);
    
    int sum1 = 0;
    printf("Elements of row %d: ", num1);
    for (i = 0; i < cols; i++) {
        printf("%d ", array[num1][i]);
        sum1 += array[num1][i];
    }
    printf("\nThe sum of row %d: %d\n", num1, sum1);
    
    printf("Enter column number: ");
    scanf("%d", &num2);
    
    int sum2 = 0;
    printf("Elements of column %d: ", num2);
    for (i = 0; i < rows; i++) {
        printf("%d ", array[i][num2]);
        sum2 += array[i][num2];
    }
    printf("\nThe sum of column %d: %d\n", num2, sum2);

    return 0;
}
