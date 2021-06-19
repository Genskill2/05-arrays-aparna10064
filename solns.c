/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[], int n)
{
	int max = a[0];
	for(int i=0; i<n; i++)
	{
		if(a[i]>max)
		max= a[i]; 
	}
	return max;
}

int min(int a[], int n)  
{
	int min;
	min = a[0];
	for(int i=0; i<n; i++) 
	{
		if(a[i]<min)
		min =a[i];
	}
	return min;
}

float average(int avg[], int n)
{

	int sum = 0;
	float avg =0;
	for(int i=0; i<n; i++) 
	{
		sum = sum+a[i];
	}
	avg = (float)sum/n;
	return avg;
}

int mode(int arr[], int n)
{
 int cnt =0, coutn=0, max=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(arr[i] == arr[j])
			cnt ++;
		}
	}
	if(cnt>=max)
	{
		coutn = max;
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
		if(n%i ==0)
		{
			a[j] = i;
			j++;
			n =n/i;
		}
	}
	return j;
	
}
			
			
	



	
