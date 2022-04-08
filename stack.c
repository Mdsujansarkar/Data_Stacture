#include <stdio.h>
#include <stdlib.h>
#define MAX 80000000
int arr_std[MAX];
int top = -1;
void push(int data) {
    if(top == MAX -1) {
        printf("Stack Overflow");
        return;
    }
    top = top +1;
    arr_std[top] = data;
}
int main()
{
       for(int i=0; i<80000000; i++)  
        {  
            push(i); 
        } 
     for(int i=0; i<80000000; i++)  
        {  
            printf("%d  ", arr_std[i]);  
        } 
    return 0;
}