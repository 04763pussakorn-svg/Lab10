#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int stu = 1;
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << stu << "]: ";
		cin >> grade; 
		
		if(true) {} 
		    if(grade == "0"){
			break;
		    }
		
		if(true){
		    if(grade == "A"){
			count[0] = count[0] + 1;
		    }
		    
		    if(grade == "B"){
			count[1] = count[1] + 1;
		    }
		
		   if(grade == "C"){
			count[2] = count[2] + 1;
		    }
		    
		   if(grade == "D"){
			count[3] = count[3] + 1;
		    }
		    
		   if(grade == "F"){
			count[4] = count[4] + 1;
		    }
	 
		    if (grade > "F" or grade < "A"){
			cout << "Wrong input. Please input again.\n";
			stu--;
		    }
		
		}
		
	stu++;
	}while(true);
	
	
	cout << "In total " << stu-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	
	return 0;
}