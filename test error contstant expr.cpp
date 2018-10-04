#include<stdio.h>
void bin_search();
void int main()
{
	int n, i, j, c;
	scanf("%d", &n);
	int arr[n], sort[n];
	
	for(i = 0; i<=n-1; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(j = 0; j < n; j++)
	{
	
		int min = arr[0], max = arr[0];
	
		for(i = 0; i < n; i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];	// MAX value
			}
		}
		
	
		for(i = 0; i<n; i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];	// MIN value
				c = i;
			}
		}
		
		
		sort[j] =  min;
		arr[c] = max;
			
	}
	
	printf("Ascending order:\n\n");

	for(i = 0; i<n; i++)
	{
		printf("%d\t", sort[i]);
	}     

	printf("Ascending order:\n\n");

	for(i = 0; i<n; i++)
	{
		printf("%d\t", sort[n-i-1]);
	}     
   cout<<"Do you want to play a program to execute binary search?y/n";
  char ans='n';
  cin>>ans;
  if(ans=='y'){
    bin_search();
  }
}
void bin_search()
{
 int ar[10],n,lb=0,ub=9,mid;
 cout<<"Enter 10 values for sorted array"<<endl;
 for(int i=0;i<10;i++){
  cin>>ar[i]; 

 }
 cout<<"Number to search"<<endl;

 cin>>n;
 int flag=0;
 while(lb<=ub){

  mid=lb+((ub-lb)/2);

  if(n==ar[mid]){

  cout<<"The number has been found at position:"<<mid+1;
  flag=1;  

  }

  else if(n>ar[mid]){

  lb=mid;

  }

  else if(n<ar[mid]){

  ub=mid;

  }

}
 if(flag==0){

  cout<<"Number inserted to search is not present in the array"<<endl;
 }

}
