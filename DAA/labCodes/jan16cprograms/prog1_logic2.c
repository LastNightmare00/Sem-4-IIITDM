#include<stdio.h>
void main()
{	int a[100],n,temp;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter the array:(only 0,1,2)\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);  
    for (int i = 1; i < n; i++) 
    {  
        int temp= a[i];  
        int j = i - 1;  
        while (j >= 0 && a[j] >temp) 
        {  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] =temp;  
        
    }  
    for(int i=0;i<n;i++)
		printf("%d",a[i]);
}  
