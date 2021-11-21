#include <stdio.h>
#include <string.h>
struct Person{
    char name[20];
    int age;
    double weight;
    char city[20];
};

int main(){
    struct Person p1, p2;
    //assigning variables:
    strcpy(p1.name, "Leead");
    strcpy(p1.city, "Raanana");
    p1.age = 25;
    p1.weight = 70.5;
    printf("Name: %s\nCity: %s\nAge; %d\nWeight: %lf", p1.name,p1.city,p1.age,p1.weight);
    return 0;
}