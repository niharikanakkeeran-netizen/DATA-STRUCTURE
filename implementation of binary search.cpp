#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
int a[20],n,i,x,low,high,mid,flag=0;
printf ("Enter the number of elements in the array\n");
scanf("%d",&n);
printf ("Enter the number of elements in the array one by one in sorted order\n");
for(i=0;i<n;i++)
{
printf ("Enter the element\n");
scanf ("%d", &a[i]);
}
printf ("Enter the element to be searched\n");
scanf("%d",&x);
low=0;
high=n-1;
while(low <= high)
{
mid=low+floor(((high-low)/2));
if(x==a[mid])
{
printf("The element is present at %d position",mid);
flag=1;
break;
}
else if(x<a[mid])
high=mid-1;
else if(x>a[mid])
low=mid+1;
}
if(flag==0)
printf("The element to be searched is not present in the list");
getch ();
}


OUTPUT

Enter the number of elements in the array
4
Enter the number of elements in the array one by one in sorted order
Enter the element
10
Enter the element

86

20
Enter the element
45
Enter the element
78
Enter the element to be searched
45
The element is present at 2 position
