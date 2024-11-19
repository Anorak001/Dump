#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    
    scanf("%d",&n);

n++;

int* arr=(int*)malloc(n * sizeof(int));

arr[0]=0;

for(int i=1; i<n; i++){
scanf("%d",arr+i);
arr[0]+=arr[i];
if(i==n-1)
printf("%d",arr[0]);
}
free(arr);
    
    return 0;
}
