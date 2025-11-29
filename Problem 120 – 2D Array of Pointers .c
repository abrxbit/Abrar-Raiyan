#include <stdio.h>
int main(){
    int a=1,b=2,c=3,d=4;
    int *p[2][2]={{&a,&b},{&c,&d}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%d ", *p[i][j]);
        printf("\n");
    }
    return 0;
}
