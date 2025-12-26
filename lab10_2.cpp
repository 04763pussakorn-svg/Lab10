#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	string textline;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	cout << "-------------------- BOOM ---------------------\n";
	
	while (getline(source,textline)){
	    cout << textline << '\n';
	}

    cout << "-------------------- HA!! ---------------------";
    
    source.close();
    dest.close();
	return 0;
}
