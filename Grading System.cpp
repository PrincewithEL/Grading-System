#include <iostream>

using namespace std;
//137187 Asher Yisrael Kutswa
int main(){
	int mark;
	string name;
	cout<<"Please Enter Student Name : ";
	cin>>name;
	cout<<"\n\n";
	cout<<"Please Enter Marks : ";
	cin>>mark;
	if(mark>=70){
		cout<<name;
		cout<<" Grade is A. \n";
		cout<<"-----------------------";
	}
	else if(mark>=60){
	cout<<name;
		cout<<"Grade is B. \n";
		cout<<"-----------------------";
	} else if(mark>=50){
	cout<<name;
		cout<<"Grade is C. \n";
		cout<<"-----------------------";
	} else if(mark>=40){
	cout<<name;
		cout<<"Grade is D. \n";
		cout<<"-----------------------";
	}else if(mark<40){
cout<<name;
		cout<<"Grade is F. \n";
		cout<<"-----------------------";
	}
	else{
		cout<<"Marks are Invalid.";
	}

 return 0;
}
