#include <stdio.h>

int main() {
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int SaddlePoint = 0;
     int rowMin;
        int col;

    printf("Saddle points in the matrix:\n");
    for (int i = 0; i < 3; i++) {
        rowMin = matrix[i][0];
        col = 0;
       
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
                col = j;
            }
        }

        int Saddle = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix[k][col] > rowMin) {
                Saddle = 0;
                break;
            }
        }

        if (Saddle) {
            printf("Saddle point found at [%d][%d] = %d\n", i+1, col+1, rowMin);
            SaddlePoint = 1;
        }
    }

    if (!SaddlePoint) {
        printf("No saddle point found in the matrix.\n");
    }

    return 0;
}