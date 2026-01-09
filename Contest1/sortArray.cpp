#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    scanf("%d",&size);
    /*get the array is numbers with space seperated 

    */
   vector<int> v1 (size);
   for(int i=0;i<size;i++)
   {
    scanf("%d",&(v1[i]));
   }
   sort(v1.begin(),v1.end());

      for(int j=0;j<size;j++)
   {
    printf("%d ",v1[j]);
   }

   


    return 0;
}