//92500588002
//Write a tower of hanoi program

#include<stdio.h>

void tower(int n,char source,char helper,char destination)
{
    if(n==1)
    {
        printf("move disk 1 from %c to %c\n",source, destination);
        return;
    }

    tower(n - 1 , source , destination , helper);
    printf("Move disk %d from %c to %c\n" , n, source, destination);

    tower(n - 1 , helper , source , destination);
}

void main()
{
    int n;

    printf("Enter a disk number : ");
    scanf("%d",&n);

    tower(n, 'a' , 'b' , 'c');
}
