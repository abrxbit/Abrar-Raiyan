#include <stdio.h>
struct Student{
    int id;
    int age;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&s[i].id,&s[i].age);

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(s[i].age > s[j].age){
                struct Student t=s[i];
                s[i]=s[j];
                s[j]=t;
            }

    for(int i=0;i<n;i++)
        printf("%d %d\n", s[i].id, s[i].age);
    return 0;
}
