#include <stdio.h>
int main() {
    int n, mat[10][10], sym = 1;
    printf("Enter n (square matrix): ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &mat[i][j]);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j] != mat[j][i]) { sym = 0; break; }
        }
    }
    if(sym) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}