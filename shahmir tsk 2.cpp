/*Task 1
#include <iostream>
using namespace std;
int main(){
	float score=0;
	cout<< "Write your score : "<<endl;
	cin >>score;
	if(score>=90&&score<=100){
		cout << "Your grade is A"<<endl;}
	else if(score>=75&&score<90){
		cout << "Your grade is B"<<endl;
	}
	else if(score>=60&&score<75){
		cout << "Your grade is C"<<endl;
	}
	else if(score>=45&&score<60){
		cout << "Your grade is D"<<endl;
	}
	else if(score>=0&&score<45){
		cout << "Your grade is F"<<endl;
	}
	else {cout<<"You enterend invalid score"<<endl;
return 0;
}*/
/*Task 2
#include <iostream>
using namespace std;
int main()
{
int a;
cout <<"Write a Number: "<< endl;
cin >> a;
if(a%2==0&&a%5==0)	{
	cout<<"The Number is both even and divisible by 5"<<endl;
}
else if(a%2==0){
	cout<<"The Number is Even but not divisible by 5"<<endl;
}
else if(a%5==0){
	cout<<"The Number is not Even but divisible by 5"<<endl;
}
else{
	cout<<"The Number is not even and not divisible by 5"<<endl;
}
return 0;
}*/
/* Task 3
#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Write the year : "<<endl;
	cin>>a;
	if(a%4==0){
		cout<<"The year is leap year.";
	}
	else{
		cout<<"The year is not leap year";
	}
	return 0;
}*/
/*Task 4
#include<iostream>
using namespace std;
int main (){
	float g=0,a=0;
	cout<<"wrtie your GPA: "<<endl;
	cin>>g;
	cout<<"Write your attendence percentage: ";
	cin>>a;
	if(g>=3.5&&a>=80)
	{
		cout<<"You are eligible for scholarship"<<endl;
	}
	else {
		cout<<"You are not eligible for scholarship"<<endl;
	}
	return 0;
}*/
/*Task 5
#include<iostream>
#include<string>
using namespace std;
int main(){
	string inp;
	cout << "Write an alphabet : "<<endl;
	cin>>inp;
	if (inp=="a"||inp=="A"||inp=="e"||inp=="E"||inp=="i"||inp=="I"||inp=="o"||inp=="O"||inp=="u"||inp=="U")
	{cout<<"The alphabet is vowel";
	}
	else {
		cout<<"The alphabet is consonant"<<endl;
	}
	return 0;
}*/

