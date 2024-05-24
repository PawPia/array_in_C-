
#include <iostream>
#include "array.h"


void menu(void){
    cout << "Select an option:" << endl;
    cout << "1. Enter the values into array" << endl;
    cout << "2. Display the content of the array" << endl;
    cout << "3. Determine the minimum value" << endl;
    cout << "4. Determine the maximum value" << endl;
    cout << "5. Determine the average value" << endl;
    cout << "6. Save to file" << endl;
    cout << "7. Restore from file" << endl;
    cout << "0. Exit" << endl;
    cout << "Select an option here:" << endl;
}

int main() {
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Simple array" << endl;

    int option = 0;
    do{
        menu();
        cin >> option;
        switch (option){
            case 0 :
                break;
            case 1 :
                cout << "Entering the values into array" << endl;
                enterDataIntoArray(array);
                break;
            case 2 :
                displayArray(array);
                break;
            case 3 : {
                int min = findMinimumValue(array);
                cout << "Minimum value =" << min << endl;
                break;
            }
            case 4 : {
                int max = findMaximumValue(array);
                cout << "Maximum value =" << max << endl;
                break;
            }
            case 5 :{
                float average = calculateAverege(array);
                cout << "Average value =" << average << endl;
                break;}
            case 6:
                cout << "Saving data to the file" << endl;
                if (!saveArrayToFile(array)){
                    cout << "Array saved to the file" << endl;
                } else {
                    cout << "Something went wrong..." << endl;
                }
                break;
            case 7 :
                displayFromFile(array);
                break;
            default:
                cout << "Choose a right option" << endl;
        }
    }
    while(option !=0);
    cout << "THE END" << endl;
    return 0;
}
