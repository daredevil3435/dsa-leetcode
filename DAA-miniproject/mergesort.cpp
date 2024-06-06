// Assignment 7 b
// Implement merge sort and multithreaded merge sort. Compare time required by both the algorithms. Also analyze the performance of each algorithm for the best case and the worst case.

#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
using namespace std;
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void mergeSortMultithread(vector<int>& arr, int left, int right, int depth) {
    if (depth == 0 || left >= right) {
        mergeSort(arr, left, right);
        return;
    }

    int mid = left + (right - left) / 2;

    thread leftThread(mergeSortMultithread, ref(arr), left, mid, depth - 1);
    thread rightThread(mergeSortMultithread, ref(arr), mid + 1, right, depth - 1);

    leftThread.join();
    rightThread.join();

    merge(arr, left, mid, right);
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arrSize = arr.size();

    auto startSimple = chrono::high_resolution_clock::now();
    mergeSort(arr, 0, arrSize - 1);
    auto endSimple = chrono::high_resolution_clock::now();
    chrono::duration<double> durationSimple = endSimple - startSimple;

    cout << "Sorted array (Simple Merge Sort): ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    cout << "Time taken by Simple Merge Sort: " << durationSimple.count() << " seconds" << endl;

    arr = {12, 11, 13, 5, 6, 7};

    auto startMultithread = chrono::high_resolution_clock::now();
    mergeSortMultithread(arr, 0, arrSize - 1, 2); // Using 2 threads
    auto endMultithread = chrono::high_resolution_clock::now();
    chrono::duration<double> durationMultithread = endMultithread - startMultithread;

    cout << "Sorted array (Multithreaded Merge Sort): ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    cout << "Time taken by Multithreaded Merge Sort: " << durationMultithread.count() << " seconds" << endl;

    return 0;
}