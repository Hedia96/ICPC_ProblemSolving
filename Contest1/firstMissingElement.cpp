#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    scanf("%d",&size);
    /*get the array is numbers with space seperated 
    */int range;
scanf("%d",&range);
   vector<int> v1 (size);
   for(int i=0;i<size;i++)
   {
    scanf("%d",&(v1[i]));
   }
   
/*
-M -> M so the range 2*M+1 this size of bitset or boolean presence array initially intialized by false
then loop on the lenght so the O(n)


*/
int size_bitset=(2*range)+1;
vector<bool> bitset(size_bitset,false);
/**
 * 0 -> -M
 * 1 -> -M+1
 * .
 * .
 * 2M+1 -> M
 */
for(int i=0;i<size;i++)
{
bitset[v1[i]+range]=true;
}
// check on the first false this means where the  index is misssing
int j=0;
while(j<size_bitset && bitset[j])
{
    j++;
}

printf("%d", j-range);
   


    return 0;
}