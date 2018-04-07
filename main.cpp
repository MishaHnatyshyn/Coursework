#include <iostream>
#include <limits>
#include "BinaryTree.h"
#include <ctime>
#include <sys/time.h>
#include <fstream>
using namespace std;

typedef unsigned long long timestamp_t;

static timestamp_t
get_timestamp ()
{
    struct timeval now;
    gettimeofday (&now, NULL);
    return  now.tv_usec + (timestamp_t)now.tv_sec * 1000000;
}

void merge(int * arr,int p,int q,int r){
    int n1 = q - p + 1, n2 = r - q;
    int L[n1 + 1], R[n2 + 1];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[p + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[q + j + 1];
    }

    L[n1] = numeric_limits<int>::max();
    R[n2] = numeric_limits<int>::max();

    int i = 0, j = 0;

    for (int k = p;k < r + 1;k++){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }

}
void mergeSort(int * arr,int p, int r){
    if (p < r){
        int q = (p + r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

int partition(int * arr, int p, int r){

    int pivot = arr[r-1];
    int i = p - 1;

    for (int j = p; j < r-1; j++){
        if (arr[j] <= pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[r-1];
    arr[r-1] = temp;
    return i + 1;
}
void quick_sort(int * arr, int p, int r){
    if (p < r){
        int q = partition(arr, p, r);
        quick_sort(arr, p, q);
        quick_sort(arr, q + 1, r);
    }
}

void b_sort(TreeLetter * curr,int * arr,int*index){
    if (curr != nullptr){
        b_sort(curr->leftChild,arr,index);
        arr[*index] = curr->data;
        *index += 1 ;
        b_sort(curr->rightChild,arr,index);
    }
}
void binarySort(int * arr, int length){
    BinaryTree tree;
    for (int i = 0; i < length; i++) {
        tree.addLetter(arr[i]);
    }
    int index = 0;
    b_sort(tree.getRoot(),arr,&index);
}

void printTestRes (float arr[][2], int count){
    for (int i = 0; i < count; ++i) {
        cout << arr[i][0] << " : " << arr[i][1]<< endl;
    }
    cout << endl;
}

double * testRes(int length, int repeats, double * result){
    int arr1[length];
    int arr2[length];
    int arr3[length];
    srand(time(NULL));
    timestamp_t t0, t1;
    double merge_time = 0,quick_time = 0,binaryTree_time = 0;

    for (int i = 0; i < repeats; ++i) {
        for (int j = 0; j < length; ++j) {
            int val = rand()%length*2;
            arr1[j] = val;
            arr2[j] = val;
            arr3[j] = val;
        }

        t0 = get_timestamp();
        mergeSort(arr1,0,length-1);
        t1 = get_timestamp();
        merge_time += (t1 - t0) / 1000000.0L;

        t0 = get_timestamp();
        quick_sort(arr2,0,length);
        t1 = get_timestamp();
        quick_time += (t1 - t0) / 1000000.0L;

        t0 = get_timestamp();
        binarySort(arr3,length);
        t1 = get_timestamp();
        binaryTree_time += (t1 - t0) / 1000000.0L;
    }
    result[0] = merge_time;
    result[1] = quick_time;
    result[2] = binaryTree_time;
}

void test(int repeats, int start, int end, int step){
    const int count = (end - start)/step;
    float merge_arr[count][2];
    float quick_arr[count][2];
    float binaryTree_arr[count][2];
    int i = 0;

    while (start <= end){
        double tempArr[3] = {};
        testRes(start,repeats,tempArr);
        merge_arr[i][0] = start;
        merge_arr[i][1] = tempArr[0];

        quick_arr[i][0] = start;
        quick_arr[i][1] = tempArr[1];

        binaryTree_arr[i][0] = start;
        binaryTree_arr[i][1] = tempArr[2];
        i++;
        start += step;
    }

    ofstream data_file("/home/mhnatyshyn/Курсач/program/data_for_graph.csv", ios::app);
    for (int j = 0; j < count; ++j) {
        data_file << merge_arr[j][0] << "," <<merge_arr[j][1]<<"," <<quick_arr[j][1]<<","<<binaryTree_arr[j][1]<<"\n";
    }
    data_file.close();
}


int main() {
    int repeats = 100,  start = 100, end = 10000, step = 100;
    test(repeats,start,end,step);
    return 0;
}

