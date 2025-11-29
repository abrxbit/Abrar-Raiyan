#include <stdio.h>
struct Student{
    char name[50];
    int age;
    float cgpa;
};
int main(){
    struct Student s;
    scanf("%s %d %f", s.name, &s.age, &s.cgpa);
    printf("%s %d %.2f", s.name, s.age, s.cgpa);
    return 0;
}
