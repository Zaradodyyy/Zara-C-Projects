#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int* InsertionFunc(unsigned int* Arr, size_t sizeOfarr);

int main(){
    /*
    Creating seed to generate random intergers up to 50 to add into an array up to 10 elements
    */
    srand(time(NULL));
    unsigned int rdm_Arr[10];
    int len_Arr = sizeof(rdm_Arr)/sizeof(unsigned int);
    size_t sizeArray = sizeof(rdm_Arr)/sizeof(unsigned int);
    
    for(int i =0; i<len_Arr; i++){
        unsigned int rdmNum = (rand() % 50)/2;
        rdm_Arr[i] = rdmNum;
    }



    //To check the RdmArr
    /*
    for(int k =0; k<len_Arr; k++){
        printf("%u ", rdm_Arr[k]);
    }*/




    return 0;   
}

unsigned int* InsertionFunc(unsigned int* Arr, size_t sizeOfarr){

    for(int i = 1; i < sizeOfarr; i++){
        int insert = i;
        int currentPosition = Arr[i];
        for(int j = i-1; i<sizeOfarr; j++){
            if(Arr[j]> currentPosition){
                Arr[insert] = Arr[j];
        Arr[j] = currentPosition; 
            }
        }
    }

    return Arr;
}