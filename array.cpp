#include <iostream>
#include "array.h"
#include <fstream>


void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
}

int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int findMinimumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int enterDataIntoArray(int array[]) {
    cout << "Enter data into array" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
    return 0;
}

float calculateAverege(int array[]) {
    int sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum += array[i];
    }
    float average = static_cast<float>(sum) / SIZE;
    return average;
}

int saveArrayToFile(int array[]) {
    ofstream outfile("array.txt");
    if (!outfile.is_open()) {
        return 1;
    }

    for (int i = 0; i < SIZE; ++i) {
        outfile << "array[" << i << "] = " << array[i] << endl;
    }

    outfile.close();
    return 0;
}

void displayFromFile(int []){
    ifstream infile("array.txt");
    if (!infile.is_open()) {
        cout << "\nError with file opening!\n";
        return;
    }

    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
}