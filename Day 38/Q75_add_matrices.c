#include <stdio.h>
int main() {
    int r, c, a[10][10], b[10][10];
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix A:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &a[i][j]);
    printf("Enter matrix B:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &b[i][j]);
    printf("Sum:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) printf("%d ", a[i][j]+b[i][j]);
        printf("\n");
    }
    return 0;
}