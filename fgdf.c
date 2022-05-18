#include<stdio.h>

int main(){

int n;
printf("enter the number of elements\n");
scanf("%d",&n);
int a[n];

printf("enter the arr\n");
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

//sorting algo
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    
}
    return 0;
}
