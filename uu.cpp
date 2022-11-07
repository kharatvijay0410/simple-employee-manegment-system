#include<iostream>
#include<windows.h>   //because sleep function
#include<conio.h>
using namespace std;

void exit();

struct emp{
		string name;
		string id;
		string address; 
		string contact;
		string salary;
		
	}; 
	struct emp e1[100];
	int total=0;
	int i;
	string numid;

class same{
	protected:
	int n;
		public:
			
			void display(void)
			{
				cout<<"How Many Employee Enter :  "<<endl;
				cin>>n;
				for(int i=total;i<total+n;i++)
				{
				cout<<"Please Enter "<<i+1<<" Data"<<endl;
				cout<<"enter employee name : ";
				cin>>e1[i].name;
				cout<<"enter employee id : ";
				cin>>e1[i].id;
				cout<<"enter employee address : ";
				cin>>e1[i].address;
				cout<<"enter employee contact : ";
				cin>>e1[i].contact;
				cout<<"enter employee salary : ";
				cin>>e1[i].salary;
			}
			total=total+n;
			}
	
	
};


class employee: public same{
	public:
		
		
		 
};

class showdata: public same{
	public:
		void show(void)
		{
			if(total!=0)
			{
           for(i=0;i<total;i++)
           {
           	cout<<i+1<<" Employee Record"<<endl;
           	
           	cout<<"Employee Name : "<<e1[i].name<<endl;
           	cout<<"Employee Id : "<<e1[i].id<<endl;
           	cout<<"Employee Address : "<<e1[i].address<<endl;
           	cout<<"Employee Contact : "<<e1[i].contact<<endl;
           	cout<<"Employee Salary : "<<e1[i].salary<<endl;
           	
		   }
	}
	else
	{
		cout<<"empty data"<<endl;
	}
		}
};

class serchdata: public same , public showdata{
	
	public:
		
		void serch(void)
			{
			if(total!=0)
			{
				
				cout<<"enter id to serch : "<<endl;
				cin>>numid;
				for(i=0;i<total;i++)
				{
					if(numid==e1[i].id)
					{
						cout<<i+1<<" Employee Record"<<endl;
           	
           	            cout<<"Employee Name : "<<e1[i].name<<endl;
           	            cout<<"Employee Id : "<<e1[i].id<<endl;
                     	cout<<"Employee Address : "<<e1[i].address<<endl;
           	            cout<<"Employee Contact : "<<e1[i].contact<<endl;
                    	cout<<"Employee Salary : "<<e1[i].salary<<endl;                   	
						
					}
				}
			}
			else
			{
				cout<<"Empty data"<<endl;
			}
		}
};

class update: public serchdata{
	 public:
	 	void u(void)
	 	{
	 		if(total!=0)
	 		{
	 			cout<<"enter id to updated employee record : "<<endl;
				cin>>numid;
				for(i=0;i<total;i++)
				{
					if(numid==e1[i].id)
					{
						cout<<i+1<<" Employee Preveours  Record"<<endl;
           	
           	            cout<<"Employee Name : "<<e1[i].name<<endl;
           	            cout<<"Employee Id : "<<e1[i].id<<endl;
                     	cout<<"Employee Address : "<<e1[i].address<<endl;
           	            cout<<"Employee Contact : "<<e1[i].contact<<endl;
                    	cout<<"Employee Salary : "<<e1[i].salary<<endl;
						
						cout<<"Enter Employee New Record"<<endl;
						
						cout<<"Please Enter "<<i+1<<" Data"<<endl;
			        	cout<<"enter employee name : ";
			        	cin>>e1[i].name;
			         	cout<<"enter employee id : ";
		        		cin>>e1[i].id;
			        	cout<<"enter employee address : ";
			        	cin>>e1[i].address;
			        	cout<<"enter employee contact : ";
		         		cin>>e1[i].contact;
		        		cout<<"enter employee salary : ";
			        	cin>>e1[i].salary;                 	
						
					}
				}
	 			
	 			
			 }
			 
			 else
			 {
			 	cout<<"empty data"<<endl;
			 }
	 		
	 		
		 }
	
};

class delet{
        public:
        	void delall(void)
        	{
        		total=0;
			}
			
			void delspy(void)
			{
				string d;
			    cout<<"enter id to de;et"<<endl;
				cin>>d;	
				for(i=0;i<=total;i++)
				{
					if(d==e1[i].id)
					{
					e1[i].name==e1[i+1].name;
					e1[i].id==e1[i+1].id;
					e1[i].address==e1[i+1].address;
					e1[i].contact==e1[i+1].contact;
					e1[i].salary==e1[i+1].salary;
				}
			}
				total=total-1;
			}
};
					
	






int main()
{
	string name,password,n,p;
	int i;
	cout<<"\t\t\t Employee Manegment System"<<endl;
	cout<<endl;
	cout<<"\t\t\t ------>Sing up<------"<<endl;
	cout<<"\t\t Enter User Name :  ";
	cin>>name;
	cout<<endl;
	cout<<"\t\t Enter User password : ";
	cin>>password;
	cout<<"You Are Succsesfully Sing up";
	for(i=0;i<3;i++)
		{
		cout<<".";
		Sleep(1000);
    	}
	
	system("CLS");
	start:
	
	cout<<"\t\t\t Employee Manegment System"<<endl;
	cout<<endl;
	cout<<"\t\t\t ------>Login<------"<<endl;
	cout<<"\t\t Enter User Name :  ";
	cin>>n;
	cout<<endl;
	cout<<"\t\t Enter User password : ";
	cin>>p;
	cout<<endl;
	cout<<"Please Wait";
			for(i=0;i<3;i++)
		{
		cout<<".";
		Sleep(1000);
    	}
	if(name==n && password==p)
	{
		system("CLS");
		int user;
		do
		{
		    cout<<"\t\tPress 1 To Enter Employee Data"<<endl;	
		    cout<<"\t\tPress 2 To Show Employee Data"<<endl;
		    cout<<"\t\tPress 3 To Serch Employee Data"<<endl;
		    cout<<"\t\tPress 4 To Udate Employee Data"<<endl;
		    cout<<"\t\tPress 5 To Delet Employee Data"<<endl;
		    cout<<"\t\tPress 6 To Log Out Employee Data"<<endl;
		    cout<<"\t\tPress 7 To Exit"<<endl;
			
			cout<<"\t\t Press Button : ";
			cin>>user;
			cout<<"Please Wait";
			for(i=0;i<3;i++)
		{
		cout<<".";
		Sleep(1000);
    	}
    	switch(user)
    	{
    		case 1:
    			employee e;
    			e.display();
    			break;
    			
    		case 2:
    			showdata s;
    			s.show();
    			break;
    			
    			case 3:
    			serchdata s1;
    			s1.serch();
    			break;
    			
    			case 4:
    				update up;
    				up.u();
    				 break;
    				 
    			case 5:
    				int button;
    				delet d;
    				cout<<"preess 1 to delet all record :"<<endl;
    				cout<<"press 2 to delet specify record: "<<endl;
    				cout<<"press the button "<<endl;
    				cin>>button;
    				if(button==1)
    				{
    					d.delall();
					}
					else if(button==2)
					{
						d.delspy();
					}
    				break;
    				
    			case 6:
    				goto start;
    				break;
    				
    			case 7:
    				exit(0);
    				break;	    		
		}
			
			
		}while(1);
		
	}
	else if(name!=n && password==p)
	{
		cout<<"\t\tIncorrect name please try again"<<endl;
		for(i=0;i<3;i++)
		{
		cout<<".";
		Sleep(1000);
    	}
    	goto start;
	}
	else if(name==n && password!=p)
	{
		cout<<"\t\tIncorrect password"<<endl;
		for(i=0;i<3;i++)
		{
		cout<<".";
		Sleep(1000);
    	}
    	goto start;
	}
	else
	{
		cout<<"\t\tsomthing is wrong please try again";
		for(i=0;i<3;i++)
		{
		cout<<".";
		Sleep(1000);
    	}
    	goto start;
	}
	return 0;
}
	

