#include<stdio.h>

int binarySearch(int rollno[],int low,int high,int key) 
{
	int mid;
	
	if(low > high )
	   return -1;
	   
	mid = (low+high)/2;
	
	if(rollno[mid] == key)
	return mid;
	
	if(key < rollno[mid])
	return binarySearch( rollno,low,mid-1,key);
	
	return binarySearch( rollno, mid+1,high, key);	
	
}
int main()
{
	int rollno[]={10,20,30,40,50,60,70};
	int n=7;
	int key,result;
	
	printf("enter the roll no to search");
	scanf("%d",&key);
	
	result = binarySearch(rollno,0,n-1,key);
	
	if(result != -1)
	    printf("roll no %d is found %d",key,result );
	else
	    printf("roll no %d is not found",key);
	
	 return 0;

}
