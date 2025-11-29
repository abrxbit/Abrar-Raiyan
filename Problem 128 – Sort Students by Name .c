#include <stdio.h>
#include <string.h>
struct Student{
    char name[50];
    int age;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++)
        scanf("%s %d", s[i].name, &s[i].age);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(s[i].name,s[j].name)>0){
                struct Student t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
    for(int i=0;i<n;i++)
        printf("%s %d\n", s[i].name, s[i].age);
    return 0;
}
