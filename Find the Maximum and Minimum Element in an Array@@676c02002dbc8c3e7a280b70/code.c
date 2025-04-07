#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int maximum=array[0];
    int minimum=array[0];
    for(i=0;i<n;i++){
        if(array[i]>maximum){
            maximum=array[i];
        }
        if(array[i]<minimum){
            minimum=array[i];
        }
    }
    printf("%d ",minimum);
    printf("%d",maximum);
}
