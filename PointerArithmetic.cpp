#include <iostream>
using namespace std;

int main(){
    //null pointer
    int* pPointer = nullptr;
    int numbersArray[3] = {10, 20, 30};

    //assign the address of first element to pointer
    pPointer = numbersArray;

    //output the address of the first element
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numbersArray[0]: " << numbersArray << endl;

    //output the value of the first element using the pointer and indirection
    cout << "value at pPointer: " << *pPointer << endl;

    //This outputs the value of the second element
    cout << "value at ++pPointer: " << *(++pPointer) << endl;

    //assign address of first element to pointer
    pPointer = numbersArray;

    //This outputs the value of the first element
    cout << "value at pPointer++: " << *(pPointer++) << endl;

    return 0;

}