/*Write a program that receives 10 points (3 dimensional) from the user and return the center of mass*/
#include <stdio.h>
#define N 3

int main(){
    double point[N][3]; /*creating the points matrix*/
    double center_of_mass [3];

    center_of_mass[0] = center_of_mass[1] = center_of_mass[2] = 0.0;
    int i, j;
    for(i=0; i<N; i++){
        printf("Please enter the next point(with a space in between each numer): ");
        for(j=0; j<3; j++){
            scanf("%lf", &point[i][j]);
            center_of_mass[j] += (point[i][j])/N;
        }
    }
    printf("Center of Mass is: %lf, %lf, %lf", center_of_mass[0],center_of_mass[1],center_of_mass[2]);
    return 0;
}

