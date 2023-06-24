#include<bits/stdc++.h>
using namespace std;
class student{
	string passcode;
	friend class bestfriend;
	protected:
		int age;
	public:
		string name;
		int id;
		void into(){
			cout<<"my name is"<<name<<",my id is "<<id<<"passcord is"<<passcode<<endl;
		}
		void setpass(string s,int a){
			passcode=s;
			age=a;
		}
		friend void hacker(student s);
		//friend class bestfriend;
};
void hacker(student s){
	cout<<s.passcode<<" "<<s.age<<endl;
}
class bestfriend{
	public:
		void sharingSecret(student s){
			cout<<s.passcode<<" "<<s.age<<endl;	
		}
};
int main(){
	student s1;
	s1.setpass("0001",10);
	bestfriend bff;
	//bff.sharingSecret(s);
	hacker(s1);
}
