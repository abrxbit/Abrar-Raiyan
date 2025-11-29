#include <stdio.h>
#include <stdlib.h>

struct Data{
    int n;
    int arr[];
};

int main(){
    int n;
    scanf("%d",&n);
    struct Data *d = malloc(sizeof(struct Data) + n*sizeof(int));
    d->n = n;
    for(int i=0;i<n;i++) scanf("%d",&d->arr[i]);
    for(int i=0;i<n;i++) printf("%d ", d->arr[i]);
    free(d);
    return 0;
}
