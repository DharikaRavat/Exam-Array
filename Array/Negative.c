#include <stdio.h>

int main() {
	
    int a,b,i;

    printf("Enter the array's size: ");
    scanf("%d", &a);

    int array[a];

    printf("Enter array's elements:\n");
    for (i = 0; i < a; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }


    printf("Negative elements from an Array: ");
    for (i = 0; i < a; i++) {
        if (array[i] < 0) {
        	if (b) {
                printf(", ");  
            }
            printf("%d ", array[i]);
            b = 1;
        }
    }
    
    if (!b){
    	printf("No Nagative elements in the array.....\n");
	}

    return 0;
}
