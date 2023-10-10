#include <iostream>
#include <string>

using namespace std;

string updateFunction(int someArray[], int size);

int main() {
    int size = 100;
    int size2 = 500;
    int tempArray[100];
    int secondTempArray[500];

    for (int i = 0; i < 100; i++) {
        tempArray[i] = i+1;
        cout << tempArray[i] << " ";
    }
    cout << endl;
  updateFunction(tempArray, size);
}

string updateFunction(int someArray[], int size) {
    //int firstArray[size];
    string secondArray[size];
    string finishMessage = "Done";
    for (int j = 0; j < 100; j++) {
        if ((someArray[j] % 5 == 0) && (someArray[j] % 3 == 0)) {
            secondArray[j] = "FizzBuzz";
            cout << "FizzBuzz" << " ";
        } else if (someArray[j] % 5 == 0) {
            secondArray[j] = "Buzz";
            cout << "Buzz" << " ";
        } else if (someArray[j] % 3 == 0) {
            secondArray[j] = "Fizz";
            cout << "Fizz" << " ";
        } else {
            secondArray[j] = to_string(j+1);
            cout << someArray[j] << " ";
        }

    }
    return finishMessage;
}
