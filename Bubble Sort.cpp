//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 21

#include <iostream>

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int array[7] = {3,66,1,78,10,10,21};
 
    for(int i = 0; i < 6; i++){
        for(int j = 0 ;j < 7 - i + 1; j++){
            if(array[j]  > array[j + 1]){
                swap(array[j],array[j + 1]);
            }
        }
    }
 
    for(int i = 0; i < 7 ; i ++){
        std::cout<<array[i]<<"\t";
    }
    return 0;
}

/*
Sample Output:
1	3	10	10	21	66	78
*/
