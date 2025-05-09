#include <stdio.h>

#define n 3

int main(){
    int matriz1[n][n];
    
    for(int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++){
            if (i == j){
                matriz1[i][j] = 1;
            } else {
                matriz1[i][j] = 0;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for (int j = 0; i< n ; j++){
            printf("%d", matriz1[i][j]);
        }
        printf("\n");
    } 

}
