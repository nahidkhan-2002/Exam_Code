#include<stdio.h>
int main ()
{
	int n;
	printf("Enter The Size of The Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d Elements : ",n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum = 0 ;
	for (int i=0;i<n;i++)
	{
		sum+=arr[i];
	}

    printf("\nSum of %d elements of the Array is : %d",n,sum);

	return 0;
}