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
        rdm_Arr[i] = rdmNum;
    }

    for(int k =0; k<sizeArray; k++){
        printf("%d", rdm_Arr[k]);
    }




    return 0;
}

int* InsertionFunc(int* Arr, size_t sizeOfarr){

    for(int i = 1; i < sizeOfarr; i++){
        int insert = i;
        int currentPositionV = Arr[i];
        for(int j = i-1; i<sizeOfarr; j++){
            if(Arr[j]> currentPositionV){
                Arr[insert] = Arr[j];
        Arr[j] = currentPositionV; 
            }
        }
    }

    return Arr;
}