#include <iostream>
#include <string>
#include <vector>


using namespace std;






int main() {

    int size1 = 10, size2 = 100, size3 = 1000, size4=100000, size5 = 1000000 ;
    int *array1 = new int[size1], *array2 = new int[size2], *array3 = new int[size3], *array4 = new int[size4], *array5 = new int[size5];




    // Store the starting time
    double duration;
    clock_t startTime = clock();
    // Code block


    //For N = 10
    //maxSubSum1(array1,size1);               //0.004 miliseconds.
    //maxSubSum2(array1,size1);               //0.002 miliseconds.
    //maxSubSum3(array1,size1);               //0.003 miliseconds.
    //maxSubSum4(array1,size1);               //0.002 miliseconds.


    //For N = 100
    //maxSubSum1(array2,size2);               //0.546 miliseconds.
    //maxSubSum2(array2,size2);               //0.018 miliseconds.
    //maxSubSum3(array2,size2);               //0.004 miliseconds.
    //maxSubSum4(array2,size2);               //0.003 miliseconds.


    //For N = 1000
    //maxSubSum1(array3,size3);               //465.739 miliseconds.
    //maxSubSum2(array3,size3);               //1.803 miliseconds.
    //maxSubSum3(array3,size3);               //0.081 miliseconds.
    //maxSubSum4(array3,size3);               //0.007 miliseconds.


    //For N = 10000
    //maxSubSum1(array4,size4);               // NA
    //maxSubSum2(array4,size4);               //12756.5 miliseconds.
    //maxSubSum3(array4,size4);               //7.547 miliseconds.
    //maxSubSum4(array4,size4);               //0.514 miliseconds.


    //For N = 100000
    //maxSubSum1(array5,size5);               // NA
    //maxSubSum2(array5,size5);               // NA.
    //maxSubSum3(array5,size5);               //88.434 miliseconds.
    //maxSubSum4(array5,size5);               //5.081 miliseconds.


    //Compute the number of milliseconds that passed since the starting time
    duration = 1000 * double( clock() - startTime ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration << " milliseconds." << endl;


    return 0;
}
