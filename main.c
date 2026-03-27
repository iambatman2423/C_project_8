#include <stdio.h>

void findCubes(int *arr, int rows, int cols);

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("\n Q1: String Length using Pointer.\n");
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    
    for (ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
    }
    
    ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length);
    
    int rows, cols;
    printf("\n Q2: Cubes of 2D Array Elements using Pointer.\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    findCubes(&arr[0][0], rows, cols);
    
    printf("\nArray after cubing each element:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void findCubes(int *arr, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i));
    }
}