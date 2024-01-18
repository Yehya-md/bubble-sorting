#include <iostream>

using namespace std;

int main()
{
   int n=10;
   int temp;
   int arr[n]={2,4,6,8,0,1,3,5,7,9};

   for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    n--;
   }
    return 0;
}
