#include <fstream>
#include <iostream>

#define MAX_SIZE 100

int main()
{
    int N, R[MAX_SIZE], P[MAX_SIZE], Q[MAX_SIZE];
    std::ifstream infile("C:\\Users\\pkubo\\OneDrive\\Dokumenty\\GitHub\\Politechnika\\SPD\\lab1\\data.txt");

    std::string data_selector = "data.3";
    std::string tmp;
    while (tmp != data_selector) {
        infile >> tmp;
    }
    infile >> N;
    for (int i = 0; i < N; i++){
        infile >> R[i] >> P[i] >> Q[i];
    }
    infile.close();

    for (int i = 0; i < N; i++) {
        std::cout << R[i] << " : " << P[i] << " : " << Q[i] << "\r\n";
    }

    std::cout << "Hello World!\n";
    std::cin >> N;
}
