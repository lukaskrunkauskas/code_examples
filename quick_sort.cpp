#include <iostream>
#include <vector>

using namespace std;

vector <int> A = {4,5,7,3,2,7,9,3,1,3,8};

void printVector(vector <int> A) {
    for(int j=0;j<A.size();j++)
        cout << A[j] << " ";
}

void sort(int j, int pivot) {
    if(A.size() == 1)
        return;
    if(j >= pivot)
        return;
    int temp, i = j-1;

    for(j;j<pivot;j++)
        if(A[pivot] > A[j]) {
            i++;

            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }

    temp = A[pivot];
    A[pivot] = A[i+1];
    A[i+1] = temp;
    sort(0, i);
    sort(i+2, pivot);
}
int main() {
    int pivot = A.size()-1;
    sort(0, pivot);
    printVector(A);

}


