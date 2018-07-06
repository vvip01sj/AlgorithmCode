#include <stdio.h>
//선택정 렬  
int main()
{ 
  int arr[10]={1,9,6,10,5,7,4,8,2,3};
  int i=0,j=0,tmp=0;
  int min;
  
  for(i=0;i<9;i++){
     for(j=i+1;j<10;j++){
	 	if(arr[i]>arr[j]){
	 		tmp=arr[j];
	 		arr[j]=arr[i];
	 		arr[i]=tmp;
		 }
	 }
	 }
   

  for(i=0;i<10;i++)printf(" %d",arr[i]);


 return 0;
}

