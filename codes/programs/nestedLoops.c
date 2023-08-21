#include<stdio.h>

int main(){
    
    int rows;
    int column;
    char symbol;

    printf("\nenter # of rows");
    scanf("%d", &rows);

    printf("\nenter # of column");
    scanf("%d", &column);

    for(int i=1; i<=rows; i++){
       
        for(intj=1; j<=column; j++){
             printf("%d", j);
        }
        printf("\n");
    }



}