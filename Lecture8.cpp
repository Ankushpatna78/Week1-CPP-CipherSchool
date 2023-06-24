#include<bits/stdc++.h>
using namespace std;
class student{
	string passcode;
	public:
		string name;
		int id;
		student(){
			
		}
	student(string passcode,string name,int id){
			this->name=name;
			this->id=id;
			this->passcode=passcode;
			}
		//student(string passcode,string name,int id):name(name),passcode(passcode),id(id)
		//	{
				
		//	}
		void into(){
			cout<<"My name is"<<name<<", my id is"<<id<<"passcord is"<<passcode<<endl;
		}
		void setPass(string s){
			passcode=s;
		}
	};
	int main(){
		student s1;
		student s2("10", "mohit", 1);
		student s3;
		s3=s2;
		s3.into();
			
		return 0;
	}
