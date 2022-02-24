#include <bits/stdc++.h>

using namespace std;

int main()
{
    string filePath = "./a_an_example.in.txt";
    // reading the file
    ifstream fs;
    fs.open(filePath);
    string line;

    // getting contributers and projects
    getline(fs, line);
    // Number of contributers
    int N = line[0] - '0';
    // Number of projects
    int P = line[2] - '0';

    // getting contributors and their skills
    for (int i = 0; i < N; i++)
    {
    }

    return 0;
}