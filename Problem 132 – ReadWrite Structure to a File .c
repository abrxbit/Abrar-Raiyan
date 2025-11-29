#include <stdio.h>
struct Student{
    char name[50];
    int age;
};
int main(){
    struct Student s1, s2;
    FILE *fp = fopen("student.txt","wb+");
    scanf("%s %d", s1.name, &s1.age);
    fwrite(&s1, sizeof(s1), 1, fp);
    rewind(fp);
    fread(&s2, sizeof(s2), 1, fp);
    printf("%s %d", s2.name, s2.age);
    fclose(fp);
    return 0;
}
