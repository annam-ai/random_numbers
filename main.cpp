#include <iostream>
#include <iomanip>
#include <cmath>
#include "nr.h"
using namespace std;

// Driver for routines ran0, ran1, ran2, ran3

void createRN(int amount, DP func(int &), string file_name) {
    int seed = 1337;
    double rand;
    ofstream file;
    file.open(file_name);
    for (int i=0; i<amount; i++) {
        rand = func(seed);
        file << rand << endl;
    }
    file.close();
}

int main(void) {
    int amounts [4] = {5, 10, 100, 10000};
    auto ran_functions = {NR::ran0, NR::ran1, NR::ran2, NR::ran3, NR::ran4};

    cout << "Creating random numbers: 5, 10, 100, 1000." << endl;
    for (int f=0; f < 5; f++) {
        string filename;
        filename = "ran" + to_string(f) + "_";
        cout << "Current random number generator: ran" << f << endl;
        for (int i=0; i < 4; i++) {
            string amount = to_string(amounts[i]);
            createRN(amounts[i],  *(ran_functions.begin() + f), filename  + amount + "_.csv");
        }
    }
    return 0;
}

