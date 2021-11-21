/*POINTERS*/


/*1) Write a function that receives the length of a radius and returns the area and perimeter of the circle*/

#define PI 3.14
void circle_perimeter_and_area(double radius, double *p_perim, double *p_area){
    *p_perim = 2 * PI * radius;
    *p_area = PI * (radius*radius);
}

/*2) Write a function that receives 3 poiters a,b,c to different integerrs, and changes their order to ascending*/
void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void sort3(int *p_a, int *p_b, int *p_c){
    if(*p_a > *p_b){
        swap(*p_a, *p_b);
    }
    if(*p_a > *p_c){
        swap(*p_a, *p_c);
    }
    if(*p_b > *p_c){
        swap(*p_b, *p_c);
    }
}

/*3) Write a function the receives an int array and a pointer (to the last element), and returns the length of the array.*/
int get_array_length(int a[], int *p_last){
    return p_last -a + 1;
}