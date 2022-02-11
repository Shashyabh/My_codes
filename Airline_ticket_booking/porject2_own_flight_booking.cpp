#include<iostream>

using namespace std;

class Management
{
		protected:
			int id;
			char name[10];
			char add[100];
			int age;
			char gender[100];
		
		public:
			void information()
				{
					cout<<"______Welocme to Shashyabh's Airline______"<<endl<<endl;
					cout<<"Provide your registration details:"<<endl;
					cout<<"Enter your name\t\t"<<endl;
					cin>>name;
					cout<<"Enter your id\t\t"<<endl;
					cin>>id;
					cout<<"Enter your address\t\t"<<endl;
					cin>>add;
					cout<<"Enter your age\t\t"<<endl;
					cin>>age;
					cout<<"Enter your gender\t\t"<<endl;
					cin>>gender;
					
				}
			void DUB()
			{
				cout<<"Welcome to USA to DUB flight\t\t"<<endl;
				cout<<"Here are the detaails of flight\t\t"<<endl;
				cout<<"USA-DUB -498 "<<endl;
				cout<<"\t04-02-2022   8:00AM 10 Hr Rs 14000";
			}
			void UK()
			{
				cout<<"Welcome to USA to UK flight\t\t"<<endl;
				cout<<"Here are the detaails of flight\t\t"<<endl;
				cout<<"USA-IND -498 "<<endl;
				cout<<"\t04-02-2022   8:00AM 10 Hr Rs 14000";
			}
			void INDIA()
			{
				cout<<"Welcome to USA to INDIA flight\t\t"<<endl;
				cout<<"Here are the detaails of flight\t\t"<<endl;
				cout<<"USA-IND -498 "<<endl;
				cout<<"\t04-02-2022   8:00AM 10 Hr Rs 14000";
			}
			void JAPAN()
			{
				cout<<"Welcome to USA to JAPAN flight\t\t"<<endl;
				cout<<"Here are the detaails of flight\t\t"<<endl;
				cout<<"USA-JAP -498 "<<endl;
				cout<<"\t04-02-2022   8:00AM 10 Hr Rs 14000";
			}
			
			//void print()
		//	{
				void DUB1()
				{
					cout<<"Your ticket are Printed belows\t\t"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<name<<endl;
					cout<<"USA-DUB -498   \t04-02-2022   8:00AM 10 Hr Rs 14000"<<endl;
					cout<<age<<"M"<<endl;;
					cout<<add;
				}
				void UK1()
				{
					cout<<"Your ticket are Printed belows\t\t"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<name<<endl;
					cout<<"USA-UK -498   \t04-02-2022   8:00AM 10 Hr Rs 14000"<<endl;
					cout<<age<<"M"<<endl;
					cout<<add;
				}
				void IND1()
				{
					cout<<"Your ticket are Printed belows\t\t"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<name<<endl;
					cout<<"USA-IND -498   \t04-02-2022   8:00AM 10 Hr Rs 14000"<<endl;
					cout<<age<<"M"<<endl;
					cout<<add;
				}
				void JAP1()
				{
					cout<<"Your ticket are Printed belows\t\t"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<"_______________________________________"<<endl;
					cout<<name<<endl;
					cout<<"USA-JAP -498   \t04-02-2022   8:00AM 10 Hr Rs 14000"<<endl;
					cout<<age<<"M"<<endl;
					cout<<add;
				}
			
		//	}	
			
			
			
			
			void flight()
			{
				cout<<endl<<endl;
				cout<<"_________Welocme to the Flight booking system_________"<<endl;
				cout<<"Flights are folllowing"<<endl;
				cout<<"1.USA to DUB"<<endl<<"2.USA to UK"<<endl<<"3.USA to INDIA"<<endl<<"4.USA to JAPAN"<<endl;
				int ch;
				cout<<"Enter your choice  :";
				cin>>ch;
				cout<<endl<<endl;
				switch(ch)
				{
					case 1:DUB();
							cout<<"\tPress 1 for generating the ticket\t  :"<<endl;
							int a;
							cin>>a;
							if(a==1)
							{
								DUB1();
							}
							break;
					case 2:UK();
							cout<<"\tPress 1 for generating the ticket\t  :"<<endl;
							int b;
							cin>>b;
							if(b==1)
							{
								UK1();
							}
							break;
					case 3:INDIA();
							cout<<"\tPress 1 for generating the ticket\t  :"<<endl;
							int c;
							cin>>c;
							if(c==1)
							{
								IND1();
							}
							break;
					case 4:JAPAN();
							cout<<"\tPress 1 for generating the ticket\t  :"<<endl;
							int d;
							cin>>d;
							if(d==1)
							{
								JAP1();
							}
							break;
					default:
							cout<<"Invalid choice\t\t"<<endl;
				}
	
			}				
};

int main()
{
	Management M;
	M.information();
	M.flight();
	return 0;
}
