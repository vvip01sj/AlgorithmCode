#include <stdio.h>
//선택정 렬  
int main()
{ 
  int arr[10]={1,9,6,10,5,7,4,8,2,3};
  int i=0,j=0,tmp=0;
  int min,index;
  
  for(i=0;i<10;i++){
  	min=999999;//arbitary number
     for(j=i;j<10;j++){
	 	if(min>arr[j]){//find the smallest number index  
			min=arr[j];
			index=j;
		 }  
	 }
	 tmp=arr[i];  //swap
	 arr[i]=arr[index];
	 arr[index]=tmp;
	 }
   

  for(i=0;i<10;i++)printf(" %d",arr[i]);


 return 0;
}

