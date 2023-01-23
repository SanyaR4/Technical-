#include<stdio.h>
#include<stdlib.h>
int compare(const void *x,const void *y)
{
    return*(int*)x -*(int*)y;
}
int main()
{
    int arr[]={10,20,30,40,50};
    void *result;
    int size = sizeof(arr)/sizeof(arr[0]);
    int search_element;
    printf("Element to be searched :");
    scanf("%d",&search_element);
    result = bsearch(&search_element,arr,size,sizeof(arr[0]),compare);
    if(result)
        printf("Found");
    else
        printf("Not Found");
}