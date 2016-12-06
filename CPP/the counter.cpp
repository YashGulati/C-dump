#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char ch;
    char word[50];
    int counter=0;
    ifstream infile("thefile.txt",ios::in);

    while(infile.getline(word,50,' '))
        if (word[0] == 't' && word[1] == 'h' && word[2] == 'e' && word[3] == '\0')
            counter++;
    cout<<counter;
    return 0;
}
