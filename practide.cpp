#include<bits/stdc++.h>
using namespace std;
void swap(int *a ,int *b){
   int temp ;
   temp = *a;
   *a = *b ;
   *b = temp;
}
void heapify(int arr[],int n ,int current){
   int smallest = current;
   int leafChild = 2*current+1;
   int rightChild = 2*current+2;

   if(leafChild<n && arr[leafChild] < arr[smallest]){
       smallest = leafChild;
   }
   if(rightChild < n && arr[rightChild] < arr[smallest]){
       smallest = rightChild;
   }
   if(smallest != current){
       swap(arr[current],arr[smallest]);
       heapify(arr,n,smallest);
   }
}
void heapSort(int arr[],int size){
   for (int i = size-1; i >=0; i--)
   {
       swap(arr[0],arr[i]);
       heapify(arr,i,0);
   }


}
void printArray(int arr[], int n)
{
   for (int i = 0; i < n; ++i)
       cout << arr[i] << " ";
   cout <<endl;
}

int main(){
   int arr[]={20,50,40,5,30,15};
   int n = sizeof(arr)/sizeof(arr[0]);

   int nonleafstop = (n / 2) - 1;
   for (int i = nonleafstop; i >= 0; i--)
   {
       heapify(arr,n,i);
   }

   heapSort(arr,n);
   cout<<"sorted to array "<<endl;
   printArray(arr,n);

   return 0;
}

