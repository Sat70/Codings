// Satam Gupta
// Roll No 59
// Section D
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string sourceFileName = "source.txt";
    string destinationFileName = "destination.txt";
    ifstream sourceFile(sourceFileName);
    if (!sourceFile.is_open())
    {
        cout << "Unable to open source file: " << sourceFileName;
        return 0;
    }
    ofstream destinationFile(destinationFileName);
    if (!destinationFile.is_open())
    {
        cout << "Unable to open destination file";
        sourceFile.close();
        return 0;
    }
    int lineCount = 0;
    int wordCount = 0;
    string line;
    while (getline(sourceFile, line))
    {
        lineCount++;
        int i = 0;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ')
            {
                wordCount++;
            }
        }
        wordCount++;
        destinationFile << line << endl;
    }
    sourceFile.close();
    destinationFile.close();
    cout << "Successfully copied";
    cout << "Number of lines :" << lineCount << endl;
    cout << "Number of words :" << wordCount << endl;

    return 0;
}
