#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int size, key;
    cout<<"Enter the size :";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the "<<i+1<<"th element :";
        cin>>array[i];
    } 
   cout<<"Enter the key element";
   cin>>key;
   int start = 0;
   int end = sqrt(size); 
   while(array[end] <= key && end < size) {
      start = end; 
      end += sqrt(size);
      if(end > size - 1)
         end = size; 
   }
    int p=0;
   for(int i = start; i<end; i++) {
      if(array[i] == key)
           {
           p=i;
           break;
           }
   }
   if(p!=0)
   cout<<"Found at "<<p+1<<"th position";
   else
   cout<<"Not found";
}