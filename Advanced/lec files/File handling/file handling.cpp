#include <iostream>
#include <fstream>
using namespace std;
/*
void open(const * filename, ios::openmode);

ios::app // 'append mode' all output operations are performed at end of file appending content of the current filebuf

ios::in // file is opened to read

ios::out // file is opened to write

ios::binary  // file is opened in binary mode_t

ios::ate // sets the initial position at end of file *if flag is not set initial position is beginning of file*

ios::trunc // if file is opened for output operations and if it already exists its previous content is deleted and replaced by a new one

ofstream outfile;
outfile.open("file.dat", ios::out|ios::trunc);

// opening a file using constructor

ifstream(const char*filename, ios_base::openmode mode=ios_base::in);
ifstream fin(filename, openmode)by default openmode = ios::in
ifstream fin("filename");

// opening a file using open method

ifstream fin;
fin.open(filename, openmode)
fin.open("filename");

filename.close()


int main()
{
    char data[100];
    ofstream outfile; // opening a file in write mode
    outfile.open("file.dat");

    cout<<"writing to a file"<<endl;
    cout<<"Enter your name"<<endl;
    cin.getline(data, 100);

    outfile<<"writing to a file"<<endl;
    cout<<"Enter your age: "<<endl;
    cin>>data;
    cin.ignore();

    outfile<<data<<endl;
    outfile.close(); // closes the opened file

    ifstream infile;
    infile.open("file.dat");
    cout<<"Reading from file"<<endl;
    infile>>data;
    cout<<data<<endl;
    infile>>data;
    cout<<data<<endl;
    infile.close();
    return 0;
}
*/

// creating a new file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream st;
    st.open("learn.txt", ios::out);
    if(!st) // checking whether file exist
    {
        cout<<"File creation failed";
        return 0;
    }

        cout<<"New file created";
        st.close(); // closing the file

    return 0;
}
