#include<iostream>
using namespace std;

class person{
	protected:
		string name;
		int age;
		string gender;
		string address;
		string phone;
	
	public:
		person(){
		}
		
		person(string nam , int a , string g , string add , string contact){
			name=nam;
			age=a;
			gender=g;
			address=add;
			phone=contact;
		}
		
		virtual void display(){
			
			cout<<" name of the person is "<<name<<endl;
			
			cout<<" gender of the person is "<<gender<<endl;
			
			cout<<" age of the person is "<<age<<endl;
			
			cout<<" address of the person is "<<address<<endl;
			
			cout<<" phone number of the person is "<<phone<<endl;
		}
};

class teacher : public person{
	string qualification;
	int salary;
	
	public:
		teacher(){
		}
		
		teacher(string nam , int a , string g , string add , string contact , string qual , int sal):person(nam , a , g , add , contact){
			qualification=qual;
			salary=sal;
		}
		
		void display(){
			cout<<" name of the teaher is "<<name<<endl;

			cout<<" age of the teaher is "<<age<<endl;

			cout<<" gender of the teaher is "<<gender<<endl;

			cout<<" address of the teaher is "<<address<<endl;

			cout<<" phone number of the teaher is "<<phone<<endl;

			cout<<" qualification of the teaher is "<<qualification<<endl;

			cout<<" salary of the teacher is "<<salary<<endl<<endl;
		}
};

class student : public person{
	string previous_education;
	int obtain_marks;
	int total_marks;
	
	public:
		student(){
		}
		
		student(string nam , int a , string g , string add , string contact , string prev_edu , float obt , float t_m):person(nam , a , g , add , contact){
			previous_education=prev_edu;
			obtain_marks=obt;
			total_marks=t_m;
		}
		
		void display(){
			cout<<"The name of the student is "<<name<<endl;
			cout<<"The age of the student is "<<age<<endl;
			cout<<"The gender of the student is "<<gender<<endl;
			cout<<"The address of the student is "<<address<<endl;
			cout<<"The phone number of the student is "<<phone<<endl;
			cout<<"The previous education of the student is "<<previous_education<<endl;
			cout<<"The obtain marks of the student is "<<obtain_marks<<endl;
			cout<<"The total_marks of the student is "<<total_marks<<endl<<endl;
		}
};

int main(){
	student stdobj("hassan" , 20 , "male" , "north" , "03101234567" , "class intermediate" , 700 , 850);
	teacher teachobj("uzair" , 19 , "Male" , "naz" , "032112345678" , "class Intermediate" , 87654);
	
	person *teachobj_ptr , *stdobj_ptr;
	
	teachobj_ptr=&teachobj;
	stdobj_ptr=&stdobj;
	
	stdobj_ptr->display();
	teachobj_ptr->display();
	
}
