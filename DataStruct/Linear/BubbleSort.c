#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int* SortingFunc(int* rdmArr, size_t arraySize);

int main(){
    //Worst Case
    int rdmArr_Worst[10] = {3,2,4,7,6,9,1,5,8,10};
    size_t worstSize = sizeof(rdmArr_Worst)/sizeof(int);


    //Average Case
    int rdmArr_Average[10] = {1,2,3,5,4,6,8,7,9,10};
    size_t averageSize = sizeof(rdmArr_Average)/sizeof(int);
    int* ptrAverage = rdmArr_Average;
    


    //Best Case
    int rdmArr_Best[10] = {1,2,3,4,5,8,7,9,6,10};
    size_t bestSize = sizeof(rdmArr_Best)/sizeof(int);
    int* ptrBest = rdmArr_Best;
    //Computation call
    int* returnResults = SortingFunc(ptrBest, bestSize);

    for(int i = 0; i<=averageSize; i++){
        printf("%d", returnResults[i]);
    }


    return 0;
}

//function
int* SortingFunc(int* rdmArr, size_t arraySize){
    for(int i = 0; i<=arraySize; i++){
        for(int k =1; k<arraySize; k++){
            if(rdmArr[i]>rdmArr[k]){
                rdmArr[i] = rdmArr[k];
            }
            continue;
        }
    }
    return rdmArr;
} 