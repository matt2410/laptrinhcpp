#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream readFile ("doc.txt"); // input file stream
    /*
    File modes
    - ios::in (ifstream default)
    - ios::out (ofstream default)
    - ios::    #include <iostream>
    #include <fstream>
    using namespace std;
    
    int main() {
        // 1) Read only
        // ifstream = input file stream
        // ios::in = open file for reading
        ifstream inFile("data.txt", ios::in);
    
        // 2) Write only
        // ofstream = output file stream
        // ios::out = open file for writing
        // If file exists, old content may be overwritten
        ofstream outFile("data.txt", ios::out);
    
        // 3) Read and write
        // fstream = input + output
        // ios::in | ios::out = open for both reading and writing
        fstream ioFile("data.txt", ios::in | ios::out);
    
        // 4) Append to the end
        // ios::app = write at the end of file without deleting old content
        ofstream appendFile("data.txt", ios::app);
    
        // 5) Binary mode
        // ios::binary = open file as binary, not text
        ofstream binaryFile("data.bin", ios::out | ios::binary);
    
        // 6) Clear file content before writing
        // ios::trunc = truncate file (remove old content)
        ofstream truncFile("data.txt", ios::out | ios::trunc);
    
        // 7) Open file and move pointer to end
        // ios::ate = open file and place cursor at the end
        fstream ateFile("data.txt", ios::in | ios::out | ios::ate);
    
        // 8) Fail if file does not exist
        // ios::nocreate = only open if file already exists
        ofstream noCreateFile("data.txt", ios::out | ios::nocreate);
    
        // 9) Fail if file already exists
        // ios::noreplace = do not overwrite if file already exists
        ofstream noReplaceFile("new.txt", ios::out | ios::noreplace);
    
        return 0;
    }
    */
    return 0;
}