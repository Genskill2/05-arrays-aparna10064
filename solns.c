/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
/*Maximum*/
int max(int a[], int n)
{
	int max = 0;
	for(int i=0; i<n; i++) {
		if(a[i]>max)
		max= a[i]; 
	}
	return max;
}

/*Minimum*/
int min(int a[], int n)  
{
	int min = a[0];
	for(int i=0; i<n; i++) 
	{
		if(a[i]<min)
		min =a[i];
	}
return min;
}

float average(int arr[], int n)
{

	float sum = 0;
	float avg =0;
	for(int i=0; i<n; i++) 
	{
		sum = sum+arr[i];
	}
	avg = sum/n;
	return avg;
}

int mode(int arr[], int n)
{
 int i,j,cnt =0, count=0, max=0;
	for(i=0; i<n; i++)
	{
	for(j=0; j<n; j++)
	{
		if(arr[i] == arr[j]){
		cnt ++;
	}
	}
	if(cnt>=max)
	{
		count = max;
		max = arr[i];
	}
        }
 return max;
}

int factors(int n, int arr[])
{
	int i,j=0;
	for(i=2; i<=n; i++) 
	{
		if(n%i == 0)
		{
			arr[j] = i;
			j++;
			n =n/i;
		}
	}
	return j;
	
}
			
			
	



	
