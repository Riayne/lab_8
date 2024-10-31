#include <stdio.h>

int main(){

    int arr[3][3]={{2,3,4},{5,6,7},{8,9,1}},transpose[3][3],i,j,temp;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}