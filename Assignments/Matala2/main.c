#include <stdio.h>
#include "my_mat.h"
#define LEN 10

/* This is the main function. Given an input from the user, the main function chooses which order to calculate.*/

int main(){
    char user_input; // 'Define' the input. 'user_input' was assigned memoty but currently its value is garbage.
    scanf("%c", &user_input); // 'Initialize' -  'user_input is now assigned value in the memory location.
    while(user_input != 'D'){
        if(user_input == 'A'){
            create_matrix();
            calc_shortest_route();
        }
        else if(user_input == 'B'){
            contains_edge();
        }
        else if(user_input == 'C'){
            print_shortest_route();
        }
        scanf("%c", &user_input);
    }
     return 0;
}