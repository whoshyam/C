 #include<stdio.h>

 int main(){

    int numbers[3][3]; //rows*col

    int rows =sizeof(numbers)/sizeof(numbers[0]);
    //size of entire matrix / size of one of row 

    int columns= sizeof(numbers[0])/sizeof(numbers[0][0]);
    //size of 1st row / size of one of the elements found in the first row


    printf("rows: %d\n", rows);
    printf("colums: %d\n", columns);
    
    numbers[0][0]=1;
    numbers[0][1]=2;
    numbers[0][2]=3;
    numbers[1][0]=4;
    numbers[1][1]=5;
    numbers[1][2]=6;
    numbers[2][0]=7;
    numbers[2][1]=8;
    numbers[2][2]=9;

    for(int i=0;i<rows;i++){
        for(int j=0;j< columns;j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n") ;
    }
// rows: 3
// colums: 3
// 1 2 3
// 4 5 6 
// 7 8 9 


 }