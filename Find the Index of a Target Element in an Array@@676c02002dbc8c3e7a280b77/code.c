#include<stdio.h>
int target(int array[],int n,int t){
    for(int i=0;i<n;i++){
    if(array[i]==t){
        return i;
        break;
    }
}
return -1;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
     for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int t;
    scanf("%d",&t);
    int result=target(array,n,t);
    if(result!=-1){
        printf("%d",result);
    }
    else{
        printf("%d",-1);
        }
}
