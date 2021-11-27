#include <stdio.h>
#define LEN 10
#define False -1

// initializing the matrix (size = 10x0):
int mat[LEN][LEN];

/* This function recieves from the user numbers and inserts them in the matrix according to the order. */

void create_matrix(){
    int i,j;
    for(i=0; i<LEN; i++){
        for(j=0; j<LEN; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

/* This function receivs two integers from the user and prints 'True' or 'False' if there is en edge between them. */

void contains_edge(){
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    if(mat[i][j] != 0){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}

/* This function prints the shortest route given two integers. */

void print_shortest_route(){
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    if(mat[i][j] == 0){
        printf("%d\n", False);
    }
    else{
        printf("%d\n", mat[i][j]);
    }
}

/* This function calculates the shortest route between two integers using the 'Floyd-Warshall_algorithm. */

void calc_shortest_route(){
    int i, j, k;
    for(k=0; k<LEN; k++){
        for(i=0; i<LEN; i++){
            for(j=0; j<LEN; j++){
                if(mat[i][k] == 0 || mat[k][j] == 0){
                    continue;
                }
                if(mat[i][j] == 0 && i != j){
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
                else if(mat[i][j] > mat[i][k] + mat[k][j]){
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
}