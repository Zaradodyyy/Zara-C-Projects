#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* InsertionFunc(int* Arr, size_t sizeOfarr);

int main(){
    /*
    Creating seed to generate random intergers up to 50 to add into an array up to 10 elements
    */
    srand(2);
    int rdm_Arr[10];
    size_t sizeArray = sizeof(rdm_Arr)/sizeof(int);
    
    for(int i =0; i<sizeArray; i++){
        int rdmNum = (rand()% 50);
        rdm_Arr[i] = rdm_Arr;
    }





    return 0;
}

int* InsertionFunc(int* Arr, size_t sizeOfarr){

    for(int i = 0; i < sizeOfarr; i++){
        int currentPosition = i;
    }

    return Arr;
}