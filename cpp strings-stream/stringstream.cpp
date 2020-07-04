#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int k_size,k_item;

    string line;
    getline(cin,line);
    istringstream ss(line);

    ss >>k_size;
    for(int j=0; j<k_size; j++){
        ss >> k_item;
        cout<<" | "<<k_item;
    }

    //istream& getline (char* s, streamsize n );
    //istream& getline (char* s, streamsize n, char delim );

    stringstream ss;
    ss.str("set the string value");
    cout<<ss.str()<<endl;

    char name[256], title[256];
    cout << "Please, enter your name: ";
    cin.getline (name,256);
    cout << "Please, enter your favourite movie: ";
    cin.getline (title,256);
    cout<<name<<"'s favourite movie "<<title;

    char first, last;
    cout << "Please, enter your first name followed by your surname: ";
    first = cin.get();     // get one character
    cin.ignore(256,' ');   // ignore until space
    last = cin.get();      // get one character
    cout << "Your initials are " << first << last << '\n';

    return 0;
}
