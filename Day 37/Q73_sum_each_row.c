#include <stdio.h>
int main() {
    int r, c, mat[10][10], rowSum[10] = {0};
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
        printf("Row %d sum: %d\n", i, rowSum[i]);
    }
    return 0;
}