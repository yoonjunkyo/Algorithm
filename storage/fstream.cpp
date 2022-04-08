#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream ifs;
    ifs.open("in2.txt");
    if(!ifs){
        cerr << "no file";
        exit(100);
    }
    
    int size =10;
    char *input = new char[size];
    
    ifs.getline(input,10); //first line
    cout<<input<<endl;
    int n = atoi(input); //string to int

    string arr[1000][2];
    int count=0;

    while(count<n){
    
    ifs.getline(input,10,' ');
    arr[count][0]=input;

    ifs.getline(input,10);
    arr[count][1]=input;
    
    cout<< arr[count][0]<<" "<<arr[count][1]<<endl;
    count++;
    }
    
    ifs.close();
    
    return 0;
}