#include <iostream>
#include <vector>
using namespace std;

int* odds(vector<int> vals, int& sz);
int main(){
   vector<int> num;
   num.push_back(1);
   num.push_back(4);
   num.push_back(8);
   num.push_back(5);
   num.push_back(24);
   num.push_back(13);
   int len=0;
   int* arr = odds(num,len);
   for (int i=0;i<len;i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   delete [] arr; //delete a dynamic array
}
int* odds(vector<int> vals, int& sz){
   int count=0;
   for (int i=0;i<vals.size();i++){
      if (vals[i]%2==1) count++;
   }
   int* oddValues = new int[count];
   int j=0;
   for (int i=0;i<vals.size();i++){
      if (vals[i]%2==1) 
        oddValues[j++]=vals[i];
   }
   sz=count; 
   return oddValues;
}
