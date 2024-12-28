// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int MAX(int a, int b, int c) {
    int MAX;
    MAX = a;
    if (b > MAX)MAX = b;
    if (c > MAX)MAX = c;
    return MAX;
}

int main()
{
    int n, m, p, max;
    cout << "Enter The Dimensions (n*m) (m*p) :" << endl;
    cin >> n >> m >> p;
    max = MAX(n, m, p);

    int A[50][50] = { 0 };
    int B[50][50] = { 0 };
    int C[50][50] = { 0 };

    // Getting Elements for A
    cout << "A:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];

        }
    }

    // Getting Elements for B
    cout << "B:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> B[i][j];

        }
    }

    // Calculating C  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];

            }

        }
    }

    for (int j = 0; j < MAX(n, m, p); ++j) {
        
        for (int i = 0; i < m; ++i) {
            cout << A[j][i]<<" ";


        }
        cout << "    ";
        for (int i = 0; i < p; ++i) {
            cout << B[j][i]<<" ";


        }
        cout << "    ";
        for (int i = 0; i < p; ++i) {
            cout << C[j][i] << " ";


        }
        cout << endl;
    }











}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
