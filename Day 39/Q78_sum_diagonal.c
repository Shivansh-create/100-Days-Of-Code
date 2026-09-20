#include <stdio.h>
int main() {
    int n, mat[10][10], sum = 0;
    printf("Enter n (square matrix): ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
            if(i==j) sum += mat[i][j];
        }
    }
    printf("Main diagonal sum: %d\n", sum);
    return 0;
}