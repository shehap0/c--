#include <iostream>
using namespace std;

/*
    explanation
    
    on test 1
    we see 2 arrays         arr1 {6 15 6}     arr2 {5 12 0 3 7}

    Pick two values from a and merge them into one value equal to their sum?
    lets pick two values from arr1 number 6 and 6 and merge them into number 12 in arr2. DONE

    Pick value from a and split it into two values such that their sum are equal to the initial value?
    lets pick number 15 from arr1 and spilt it to 5 and 10 the 5 exist in arr2 but the 10 not.
    we will spilt the 10 to 3 and 7, they exist in arr2.

    conclusion:
    all numbers in arr1 must be equal to arr2. 

*/
int main(){                     // there always easy way 
    int size1,size2; cin>>size1>>size2;
    int arr1[size1],arr2[size2];
    int sum1=0,sum2=0;

    for(int i=0; i<size1 ; i++)
    {
        cin>>arr1[i];
        sum1+=arr1[i];
    }
    
    for(int i=0; i<size2 ; i++)
    {
        cin>>arr2[i];
        sum2+=arr2[i];
    }

    if(sum1==sum2)
    {
        cout<<"Yes";
    }else{cout<<"No";}
    

    return 0;
}
