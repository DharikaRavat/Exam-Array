#include <stdio.h>

int main() {
	
    int i, j, rows, cols;
    
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
    
    int largest = array[0][0];
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}
