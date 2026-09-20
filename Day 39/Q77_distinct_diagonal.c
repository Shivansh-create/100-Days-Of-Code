#include <stdio.h>
int main() {
    int n, mat[10][10], d[10], distinct = 1;
    printf("Enter n (square matrix): ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
            if(i==j) d[i] = mat[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(d[i] == d[j]) { distinct = 0; break; }
        }
    }
    if(distinct) printf("Distinct diagonal elements\n");
    else printf("Not distinct\n");
    return 0;
}