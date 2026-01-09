#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    /*get the array is numbers with space seperated
     */
    int queries;
    int L, R;
    int sum = 0;



    scanf("%d %d", &size,&queries);
    vector<unsigned long long> numbers(size);
        // the best time is a trad off between the memeory
    // store array is called prefix and initalized by zero
    vector<unsigned long long> prefix(size+1 , 0);

    for (int i = 0; i < size; i++)
    {
        scanf("%llu", &(numbers[i]));
    }

    // scan the queries rightindex and leftindex
    // this is bad algorithm as it is n^2
    // for (int i = 0; i < queries; i++)
    // {
    //     // L -> R
    //     cin>> L;
    //     cin>> R;
    //     for(int i=L-1;i<R;i++)
    //     {
    //         sum+=numbers[i];
    //     }
    //     cout <<sum<< "\n";
    //     sum=0;
    // }

    // prefix[0]=numbers[0];
    for (int i = 0; i <size; i++)
    {
        prefix[i+1 ] = prefix[i] + numbers[i];
    }
// print the prefix array
    // for (int i = 0; i < size+1; i++)
    // {
    //    cout<<"prefix at index  "<<i <<" is  "<<prefix[i ] <<endl;
    // }

    for (int i = 0; i < queries; i++)
    {
        cin >> L;
        cin >> R;
        cout << prefix[R]-prefix[L-1]<<endl;
    }

    return 0;
}