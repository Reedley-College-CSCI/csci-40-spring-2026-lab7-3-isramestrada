#include <iostream>
#include <fstream>
using namespace std;

// Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.

struct TemperatureRecord {
    int day;
    int temperature;
};

TemperatureRecord tempHistory[MAX_DAYS];

// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord array[], int& size) {
    ifstream inputFile("temps.txt");

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return;
    }

    size = 0;
    int day, temp;

    while (!inputFile.eof()) {
        inputFile >> day >> temp;

        if (inputFile.fail()) {
            break;
        }
        array[size].day = day;
        array[size].temperature = temp;
        size++;
    }
}



; // TODO: Fix the parameters
void printTemperatures(const ???);
TemperatureRecord findMin(const ???);
TemperatureRecord findMax(const ???);
double findAverage(const ???);

int main() {
    // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    TemperatureRecord tempArray[31];
    int size = 0;  // Actual number of records read

    // TODO: Step 3 - Call readTemperatures() to load data from file

    readTemperatures(tempArray, size);
    // TODO: Step 4 - Print the temperatures
    for (i = 0; i < size; i++) {
        cout << "Day " << tempArray[i].day
            << cout" was " << tempArray[i].temperature << " degrees. " << endl;

    }

    // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array

// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
