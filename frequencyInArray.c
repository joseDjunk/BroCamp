#include <stdio.h>
//#define NULL_VALUE -1 //if the array contains negative numbers, this can be used
int main() {
    int inputArray[]={2,1,2,3,3,3,4,4,4,4}; //Initializing the input array
    int size=sizeof(inputArray)/sizeof(inputArray[0]);  //Determining the size of the array
    int frequencyArray[size];   //Array for storing the array for storing the frequency of each element.
    int alreadyChecked = -1;    //Flag to check whether the element is already checked
    
    //Initializing the frequency checking array to 1
    //this makes the array [1,1,1,1,1,1,1]
    for(int i=0;i<size;i++){
        frequencyArray[i]=1;
    }
    
    printf("Input Array is \n[");
    for(int i=0;i<size;i++){    //Printing the input array
        if(i==0){
            printf("%d",inputArray[i]);
        }else{
            printf(", %d",inputArray[i]);
        }
    }
    printf("]\n");
    
    //Checking each element of the array
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(frequencyArray[i]==alreadyChecked){  //Checking whether the element is already checked
            continue;
        }
            if(inputArray[i] == inputArray[j]){
                frequencyArray[i]+=1;   //Increasing the count of element if it present more than once
                frequencyArray[j]=alreadyChecked;   //make sure to skip the element for second time
            }
        }
    }
    
    //The following loop prints the frequency of each element
    for(int i=0;i<size;i++){
        if(frequencyArray[i]!=alreadyChecked){
            printf("\n%d occures %d times.",inputArray[i],frequencyArray[i]);
        }
    }
    printf("\n");
    
    // The following loop prints the element which is exactly 2 elements
    for(int i=0;i<size;i++){
        if(frequencyArray[i]!=alreadyChecked && frequencyArray[i] == 2){
            printf("\n%d occures only %d times.",inputArray[i],frequencyArray[i]);
        }
    }
    

    return 0;
}
