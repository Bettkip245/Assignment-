#include <stdio.h>

int main() {
 int i;
 int j;
 
    
    int score[2][2] = {{65,92},{35,70},{84,72},{59,67}};
        
     for( i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("score [%d] [%d]  =%d\n",i,j,score[i][j]);
        
    }
    
    
    return 0;
}
