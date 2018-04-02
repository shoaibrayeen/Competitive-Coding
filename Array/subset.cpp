//
//  subset.cpp
//  Problems
//
//  Created by Mohd Shoaib Rayeen on 02/04/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
using namespace std;

bool isSubset(int* arr1, int* arr2, int m, int n)
{
    int i = 0, j = 0;
    
    if (m < n)
        return 0;
    
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    while (i < n && j < m )
    {
        if( arr1[j] <arr2[i] )
            j++;
        else if( arr1[j] == arr2[i] )
        {
            j++;
            i++;
        }
        else if( arr1[j] > arr2[i] )
            return 0;
    }
    
    return  (i < n)? false : true;
}

int main()
{
    int m , n;
    cout << "\nEnter Size of 1st Array\t:\t";
    cin >> m;
    int *arr1 = new int[m];
    cout << "\nEnter 1st int Array\n";
    for(int i = 0; i < m; ++i ) {
        cin >> arr1[i];
    }
    cout << "\nEnter Size of 2nd Array\t:\t";
    cin >> n;
    int *arr2 = new int[n];
    cout << "\nEnter 2nd Array\n";
    for(int i = 0; i < n; ++i ) {
        cin >> arr2[i];
    }
    if(isSubset(arr1, arr2, m, n))
        cout << "\narr2[] is subset of arr1[] \n";
    else
        cout << "\narr2[] is not a subset of arr1[] \n";
    
    return 0;
}
