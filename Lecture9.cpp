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
			student(){
				
			}
			student(int i,string n,string p,int a){
				this->name=name;
				this->id=i;
				this->passcode=passcode;
				this->age=age;
			}
		//	void into(){
				//cout<<"My name is"<<name<<", my id is"<<id<<"passcord is"<<passcode<<endl;
			//}
		//	void setter(string s,int a,string n,int i){
				//passcode=s;
			//	age=a;
			//}
			friend void hacker(student s);
			
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
			student s1(1,"mohit","0001",10);
			//student s2;
			//s2=s1;
			//s2.into();
			//bestfriend bff;
			//hacker(s1);
			return 0;
		}
