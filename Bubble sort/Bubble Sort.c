/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int*, int);
int main(){
    int n, i;
    printf("Enter n value:\n");
    scanf("%d", &n);
    int* p;
    p = (int*)malloc(n * sizeof(int));
    printf("\nEnter elements into array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", (p + i));
    }
    printf("\nBefore sorting the array is :\n");
    for(i = 0; i < n; i++){
        printf("%d ", *(p + i));
    }
    bubbleSort(p, n);//bubbleSort function calling
    printf("\nAfter sorting the array is :\n");
    for(i = 0; i < n; i++){
        printf("%d ", *(p + i));
    }
    return 0;
}
void bubbleSort(int* p, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(p[j] > p[j + 1]){
                int t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
        }
    }
}
