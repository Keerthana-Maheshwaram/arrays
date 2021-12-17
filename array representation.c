#include<stdio.h>
#include<stdlib.h>

struct array
{
   int *A;
   int size;
   int length;
};

void display(struct array arr) //for displaying elements ina na array
{
    int i;
    printf("\n elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);

}

int main() {
    struct array arr;//arr ius name of array
    int n,i;
    printf("enter size of array\n"); //this is to mention what size array is going to be
    scanf("%d",&arr.size);
    arr.A=(int *)malloc (arr.size*sizeof(int)); //creating array in heap
    arr.length=0;

    printf("enter number of numbers\n"); //once u have mentioned size the number of numbers u need to insert can be less than or equal to size
    scanf("%d",&n);

    printf("enter all elements\n"); //now enter what numbers u want to insert
    for(i<0;i<n;i++)
        scanf("%d",&arr.A[1]);
    arr.length=n;

    display(arr);

return 0;
}
