#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
//Global Variable Declaration
int num,n,rollno,refno,chair,fan,board,numb,id,length;
char Y;
fstream temp;
fstream CMSfile;
int found =0 ;
string Name,gender,company;
void menu_system();
void add_items();
void display_items();
void update_item();
void delete_item();
void check_item();
void forgot();
void registr();
void login();
void Exit();
void choices();
int main();
int main()
{
	system("cls");	
	int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to login page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:
                        cout<<"Program Exit Successfully \n\n";
						exit(0);
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        main();
        }
	
}
void menu_system()
{
	
		system("cls");
	cout<<"---------------------------------------------------------------"<<endl<<endl<<endl;
	cout<<"       Welcome to our Class Management System                 "<<endl<<endl<<endl;
	cout<<"---------------------------------------------------------------"<<endl<<endl<<endl;
	cout<<"1.Add new Record"<<endl;
	cout<<"2.Display all Record"<<endl;
	cout<<"3.Update an Record"<<endl;
	cout<<"4.Delete an Record"<<endl;
	cout<<"5.Check Specific Record"<<endl;
	cout<<"6.Exit the Menu System"<<endl;
	cout<<"0.Exit the Program"<<endl;
	cout<<"Your Choice = ";
	cin>>num;
}
void add_items()
{
	system("cls");
	do
	{ 
	system("cls");
	cout<<"1.Add Students"<<endl;
	cout<<"2.Add Teachers"<<endl;
	cout<<"3.Add Chair"<<endl;
	cout<<"4.Add Boards"<<endl;
	cout<<"5.Add Fans"<<endl;
	cout<<"Your Choice = ";
	cin>>n;
	if(n == 1)
	{
		CMSfile.open("Students Data.txt",ios::app | ios::out);
		system("cls");
	cout<<"How many Students do you wants to add: ";
	cin>>numb;
	cout<<endl<<endl;
	for(int i=1;i<=numb;i++)
	{
		
		cout<<"Enter student roll number = ";
		cin>>rollno;
		cout<<"Enter Student Name = ";
		cin>>Name;
		cout<<"Enter Student Gender = ";
		cin>>gender;
		cout<<endl<<endl;
		CMSfile<<rollno<<endl;
		CMSfile<<Name<<endl;
		CMSfile<<gender<<endl;
	}
		CMSfile.close();	
	}
	else if(n == 2)
	{
		CMSfile.open("Teachers Data.txt",ios::out | ios::app);
		system("cls");
	cout<<"How many Teachers do you wants to add: ";
	cin>>numb;
	cout<<endl<<endl;
	for(int i=1;i<=numb;i++)
	{
		cout<<"Enter Teachers reference number = ";
		cin>>refno;
		cout<<"Enter Teacher Name = ";
		cin>>Name;
		cout<<"Enter Gender = ";
		cin>>gender;
		cout<<endl<<endl;
		CMSfile<<refno<<endl;
		CMSfile<<Name<<endl;
		CMSfile<<gender<<endl;
	}
	CMSfile.close();
	}
	else if(n == 3)
	{
		CMSfile.open("Chair Data.txt",ios::app | ios::out);
			system("cls");
	cout<<"How many Chair do you wants to add: ";
	cin>>numb;
	cout<<endl<<endl;
	for(int i=1;i<=numb;i++)
	{
		cout<<"Enter Chair Number = ";
		cin>>chair;
		cout<<"Enter Company Name = ";
		cin>>company;
		cout<<"Enter Length = ";
		cin>>length;
		CMSfile<<chair<<endl;
		CMSfile<<company<<endl;
		CMSfile<<length<<endl;
	}
	CMSfile.close();
}
	else if(n == 4)
	{
		CMSfile.open("Board Data.txt",ios::app | ios::out);
		system("cls");
	cout<<"How many boards do you wants to add: ";
	cin>>numb;
	cout<<endl<<endl;
	for(int i=1;i<=numb;i++)
	{
		cout<<"Add boards number = ";
		cin>>board;
		cout<<"Enter Company Name = ";
		cin>>company;
		cout<<"Enter Lenghth = ";
		cin>>length;
		CMSfile<<board<<endl;
		CMSfile<<company<<endl;
		CMSfile<<length<<endl;
	}
	CMSfile.close();	
	}
	else if(n == 5)
	{
		CMSfile.open("Fans Data.txt",ios::app | ios::out);
		system("cls");
	cout<<"How many fans do you wants to add: ";
	cin>>numb;
	cout<<endl<<endl;
	for(int i=1;i<=numb;i++)
	{
		cout<<"Add fans number = ";
		cin>>fan;
		cout<<"Enter Company Name = ";
		cin>>company;
		cout<<"Enter number of wings = ";
		cin>>length;
		CMSfile<<fan<<endl;
		CMSfile<<company<<endl;
		CMSfile<<length<<endl;
	}
	CMSfile.close();
	}
	else
	{
		cout<<"Error"<<endl;
    }	
 	cout<<"Do you want to continue(y/n): ";
	cin>>Y;
	cout<<"Data is Written"<<endl;
}
while(Y == 'y');
}
void display_items()
{
	system("cls");
	cout<<"1.Display Students"<<endl;
	cout<<"2.Dispaly Teachers"<<endl;
	cout<<"3.Display Chair"<<endl;
	cout<<"4.Display Board"<<endl;
	cout<<"5.Display Fans"<<endl;
	cout<<"Your Choice: "<<endl;
	cin>>n;
	if(n == 1)
	{
		system("cls");
		CMSfile.open("Students Data.txt",ios::in | ios::out );
		cout<<"Students Roll Number"<<setw(25)<<"Students Name"<<setw(25)<<"Students Gender"<<endl;
		CMSfile>>rollno>>Name>>gender;
		while(!CMSfile.eof())
		{
			cout<<rollno<<setw(35)<<Name<<setw(25)<<gender<<endl;
			CMSfile>>rollno>>Name>>gender;
		}
		CMSfile.close();
	}
	else if(n == 2)
		{
		system("cls");
		CMSfile.open("Teachers Data.txt",ios::in | ios::out );
		cout<<"Teacher Reference Number"<<setw(25)<<"Teacher Name"<<setw(25)<<"Teacher Gender"<<endl;
		CMSfile>>refno>>Name>>gender;
		while(!CMSfile.eof())
		{
			cout<<refno<<setw(40)<<Name<<setw(25)<<gender<<endl;
			CMSfile>>refno>>Name>>gender;
		}
		CMSfile.close();
	}
	else if(n == 3)
		{
		system("cls");
		CMSfile.open("Chair Data.txt",ios::in | ios::out );
		cout<<"Chair Number"<<setw(25)<<"Company Name"<<setw(25)<<"Length"<<endl;
		CMSfile>>chair>>company>>length;
		while(!CMSfile.eof())
		{
			cout<<chair<<setw(31)<<company<<setw(27)<<length<<endl;
			CMSfile>>chair>>company>>length;
		}
		CMSfile.close();
	}
	else if(n == 4)
		{
		system("cls");
		CMSfile.open("Board Data.txt",ios::in | ios::out );
		cout<<"Board Number"<<setw(25)<<"Company Name"<<setw(25)<<"Length"<<endl;
		CMSfile>>board>>company>>length;
		while(!CMSfile.eof())
		{
			cout<<board<<setw(31)<<company<<setw(27)<<length<<endl;
			CMSfile>>board>>company>>length;
		}
		CMSfile.close();
	}
	else if(n == 5)
		{
		system("cls");
		CMSfile.open("Fans Data.txt",ios::in | ios::out );
		cout<<"Fans Number"<<setw(25)<<"Company Name"<<setw(25)<<"Number of Wings"<<endl;
		CMSfile>>fan>>company>>length;
		while(!CMSfile.eof())
		{
			cout<<fan<<setw(31)<<company<<setw(27)<<length<<endl;
			CMSfile>>fan>>company>>length;
		}
		CMSfile.close();
	}
	else
	{
		cout<<"Error"<<endl;	
	}	
}
void delete_item()
{
	system("cls");
	cout<<"1.Delete Students"<<endl;
	cout<<"2.Delete Teachers"<<endl;
	cout<<"3.Delete Chair"<<endl;
	cout<<"4.Delete Board"<<endl;
	cout<<"5.Delete Fans"<<endl;
	cout<<"Your Choice: ";
	cin>>n;
	if(n == 1)
	{
		system("cls");
		CMSfile.open("Students Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Student = ";
		cin>>id;
		CMSfile>>rollno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=rollno)
			{
				temp<<rollno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
				found++;
			}
			CMSfile>>rollno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Students Data.txt");
		rename("Temp.txt","Students Data.txt");
		if(found != 0)
	{
		cout<<"Your record with id number "<<id<<" has been deleted."<<endl;
	}
	else
	{
		cout<<"Your record with id number "<<id<<" has not found."<<endl;
	} 
	}
	else if(n == 2)
	{
		system("cls");
		CMSfile.open("Teachers Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Teacher = ";
		cin>>id;
		CMSfile>>refno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=refno)
			{
				temp<<refno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
				found++;
			}
			CMSfile>>refno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Teachers Data.txt");
		rename("Temp.txt","Teachers Data.txt");
		if(found != 0)
	{
		cout<<"Your record with id number "<<id<<" has been deleted."<<endl;
	}
	else
	{
		cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	}
	else if(n == 3)
	{
		system("cls");
		CMSfile.open("Chair Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the chair = ";
		cin>>id;
		CMSfile>>chair>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=chair)
			{
				temp<<chair<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>chair>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Chair Data.txt");
		rename("Temp.txt","Chair Data.txt");
		if(found != 0)
	{
		cout<<"Your record with id number "<<id<<" has been deleted."<<endl;
	}
	else
	{
		cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	}
	else if(n == 4)
	{
		system("cls");
		CMSfile.open("Board Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the board = ";
		cin>>id;
		CMSfile>>board>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=board)
			{
				temp<<board<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>board>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Board Data.txt");
		rename("Temp.txt","Board Data.txt");
		if(found != 0)
	{
		cout<<"Your record with id number "<<id<<" has been deleted."<<endl;
	}
	else
	{
		cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	}
	else if(n == 5)
	{
		system("cls");
		CMSfile.open("Fans Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the fans = ";
		cin>>id;
		CMSfile>>fan>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=fan)
			{
				temp<<fan<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>fan>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Fans Data.txt");
		rename("Temp.txt","Fans Data.txt");
		if(found != 0)
	{
		cout<<"Your record with id number "<<id<<" has been deleted."<<endl;
	}
	else
	{
		cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	}
	else
	{
		cout<<"Error"<<endl;
	}
}
void  update_item()
{
	int roll,Refno,Chair,Board,Fan,Length;
	string name,Gender,Company;
	system("cls");
	cout<<"1.Update Students"<<endl;
	cout<<"2.Update Teachers"<<endl;
	cout<<"3.Update Chair"<<endl;
	cout<<"4.Update Board"<<endl;
	cout<<"5.Update Fans"<<endl;
	cout<<"Your Choice: ";
	cin>>n;
	if(n == 1)
	{
		system("cls");
		cout<<"1.Update Roll Number of Student"<<endl;
		cout<<"2.Update Name of Student"<<endl;
		cout<<"3.Update Gender of Student"<<endl;
		cout<<"4.Update all data of the Student"<<endl;
		cout<<"Your Choice: ";
		cin>>numb;
		if(numb == 1)
	{
		system("cls");
		CMSfile.open("Students Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Student = ";
		cin>>id;
		cout<<"Enter new roll number of Student = ";
		cin>>roll;
		CMSfile>>rollno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=rollno)
			{
				temp<<rollno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
			}
			else
			{
				temp<<roll<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
				found++;
			}
			CMSfile>>rollno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Students Data.txt");
		rename("Temp.txt","Students Data.txt"); 
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 2)
	{
		system("cls");
		CMSfile.open("Students Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Student = ";
		cin>>id;
		cout<<"Enter new name of Student = ";
		cin>>name;
		CMSfile>>rollno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=rollno)
			{
				temp<<rollno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
			}
			else
			{
				temp<<rollno<<endl;
				temp<<name<<endl;
				temp<<gender<<endl;
				found++;
			}
			CMSfile>>rollno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Students Data.txt");
		rename("Temp.txt","Students Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl; 
	}
	else if(numb == 3)
	{
		system("cls");
		CMSfile.open("Students Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Student = ";
		cin>>id;
		cout<<"Enter new gender of Student = ";
		cin>>Gender;
		CMSfile>>rollno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=rollno)
			{
				temp<<rollno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
			}
			else
			{
				temp<<rollno<<endl;
				temp<<Name<<endl;
				temp<<Gender<<endl;
				found++;
			}
			CMSfile>>rollno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Students Data.txt");
		rename("Temp.txt","Students Data.txt"); 
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 4)
	{
		system("cls");
		CMSfile.open("Students Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Student = ";
		cin>>id;
		cout<<"Enter new roll number of Student = ";
		cin>>roll;
		cout<<"Enter new name of Student = ";
		cin>>name;
		cout<<"Enter new gender of Student = ";
		cin>>Gender;
		CMSfile>>rollno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=rollno)
			{
				temp<<rollno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
			}
			else
			{
				temp<<roll<<endl;
				temp<<name<<endl;
				temp<<Gender<<endl;
				found++;
			}
			CMSfile>>rollno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Students Data.txt");
		rename("Temp.txt","Students Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl; 
	}
	else
	{
		cout<<"Error"<<endl;
	}
	}
	else if(n == 2)
	{
		system("cls");
		cout<<"1.Update reference Number of Teacher"<<endl;
		cout<<"2.Update Name of Teacher"<<endl;
		cout<<"3.Update Gender of Teacher"<<endl;
		cout<<"4.Update all data of the Teacher"<<endl;
		cout<<"Your Choice: ";
		cin>>numb;
		if(numb == 1)
		{
			system("cls");
		CMSfile.open("Teachers Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Teacher = ";
		cin>>id;
		cout<<"Enter new reference number of teacher = ";
		cin>>Refno;
		CMSfile>>refno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=refno)
			{
				temp<<refno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
				found++;
			}
			else
			{
				temp<<Refno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
				found++;
			}
			CMSfile>>refno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Teachers Data.txt");
		rename("Temp.txt","Teachers Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
		}
		else if(numb == 2)
		{
			system("cls");
		CMSfile.open("Teachers Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Teacher = ";
		cin>>id;
		cout<<"Enter new name of teacher = ";
		cin>>name;
		CMSfile>>refno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=refno)
			{
				temp<<refno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
			}
			else
			{
				temp<<refno<<endl;
				temp<<name<<endl;
				temp<<gender<<endl;
				found++;
			}
			CMSfile>>refno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Teachers Data.txt");
		rename("Temp.txt","Teachers Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
		}
		else if(numb == 3)
		{
			system("cls");
		CMSfile.open("Teachers Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Teacher = ";
		cin>>id;
		cout<<"Enter new gender of teacher = ";
		cin>>Gender;
		CMSfile>>refno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=refno)
			{
				temp<<refno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
			}
			else
			{
				temp<<Refno<<endl;
				temp<<Name<<endl;
				temp<<Gender<<endl;
				found++;
			}
			CMSfile>>refno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Teachers Data.txt");
		rename("Temp.txt","Teachers Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
		}
		else if(numb == 4)
		{
			system("cls");
		CMSfile.open("Teachers Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter Id of the Teacher = ";
		cin>>id;
		cout<<"Enter new reference number of teacher = ";
		cin>>Refno;
		cout<<"Enter new name of teacher = ";
		cin>>name;
		cout<<"Enter new gender of teacher = ";
		cin>>Gender;
		CMSfile>>refno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(id!=refno)
			{
				temp<<refno<<endl;
				temp<<Name<<endl;
				temp<<gender<<endl;
			}
			else
			{
				temp<<Refno<<endl;
				temp<<name<<endl;
				temp<<Gender<<endl;
				found++;
			}
			CMSfile>>refno>>Name>>gender;
		}
		CMSfile.close();
		temp.close();
		remove("Teachers Data.txt");
		rename("Temp.txt","Teachers Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
		}
	}
	else if(n == 3)
	{
		system("cls");
		cout<<"1.Update all data of chair"<<endl;
		cout<<"2.Update Number of Chairs"<<endl;
		cout<<"3.Update Chair Company Name"<<endl;
		cout<<"4.Update Length of the Chair"<<endl;
		cout<<"Your Choice = ";
		cin>>numb;
		if(numb == 1)
		{
	system("cls");
		CMSfile.open("Chair Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the chair = ";
		cin>>id;
		cout<<"Enter new number of the chair = ";
		cin>>Chair;
		cout<<"Enter new company name = ";
		cin>>Company;
		cout<<"Enter new Length = ";
		cin>>Length;
		CMSfile>>chair>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=chair)
			{
				temp<<chair<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<Chair<<endl;
				temp<<Company<<endl;
				temp<<Length<<endl;
				found++;
			}
			CMSfile>>chair>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Chair Data.txt");
		rename("Temp.txt","Chair Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 2)
	{
		CMSfile.open("Chair Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the chair = ";
		cin>>id;
		cout<<"Enter new number of the chair = ";
		cin>>Chair;
		CMSfile>>chair>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=chair)
			{
				temp<<chair<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<Chair<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>chair>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Chair Data.txt");
		rename("Temp.txt","Chair Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 3)
	{
		CMSfile.open("Chair Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the chair = ";
		cin>>id;
		cout<<"Enter new company name = ";
		cin>>Company;
		CMSfile>>chair>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=chair)
			{
				temp<<chair<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<chair<<endl;
				temp<<Company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>chair>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Chair Data.txt");
		rename("Temp.txt","Chair Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 4)
	{
		CMSfile.open("Chair Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the chair = ";
		cin>>id;
		cout<<"Enter new Length = ";
		cin>>Length;
		CMSfile>>chair>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=chair)
			{
				temp<<chair<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<chair<<endl;
				temp<<company<<endl;
				temp<<Length<<endl;
				found++;
			}
			CMSfile>>chair>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Chair Data.txt");
		rename("Temp.txt","Chair Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else
	{
		cout<<"Error"<<endl;
	}
}
	else if(n == 4)
	{
		cout<<"1.Update Number of Board"<<endl;
		cout<<"2.Update Board Company Name"<<endl;
		cout<<"3.Update Board Length"<<endl;
		cout<<"4.Update All Data of board"<<endl;
		cout<<"Your Choice = ";
		cin>>numb;
		if(numb == 1)
		{
		system("cls");
		CMSfile.open("Board Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the board = ";
		cin>>id;
		cout<<"Enter new number of the board = ";
		cin>>Board;
		CMSfile>>board>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=board)
			{
				temp<<board<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else 
			{
				temp<<Board<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>board>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Board Data.txt");
		rename("Temp.txt","Board Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 2)
	{
		system("cls");
		CMSfile.open("Board Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the board = ";
		cin>>id;
		cout<<"Enter new company name of the board = ";
		cin>>Company;
		CMSfile>>board>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=board)
			{
				temp<<board<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else 
			{
				temp<<board<<endl;
				temp<<Company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>board>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Board Data.txt");
		rename("Temp.txt","Board Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 3)
	{
		system("cls");
		CMSfile.open("Board Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the board = ";
		cin>>id;
		cout<<"Enter new length of the board = ";
		cin>>Length;
		CMSfile>>board>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=board)
			{
				temp<<board<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else 
			{
				temp<<board<<endl;
				temp<<company<<endl;
				temp<<Length<<endl;
				found++;
			}
			CMSfile>>board>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Board Data.txt");
		rename("Temp.txt","Board Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 4)
	{
		system("cls");
		CMSfile.open("Board Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the board = ";
		cin>>id;
		cout<<"Enter new number of the board = ";
		cin>>Board;
		cout<<"Enter new Company Name of the Board = ";
		cin>>Company;
		cout<<"Enter new Length of the Board = ";
		cin>>Length;
		CMSfile>>board>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=board)
			{
				temp<<board<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else 
			{
				temp<<Board<<endl;
				temp<<Company<<endl;
				temp<<Length<<endl;
				found++;
			}
			CMSfile>>board>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Board Data.txt");
		rename("Temp.txt","Board Data.txt");
		if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else
	{
		cout<<"Error"<<endl;
	}
	}
	else if(n == 5)
	{
		cout<<"1.Update number of Fans"<<endl;
		cout<<"2.Update Fan company Name"<<endl;
		cout<<"3.Update number of wings in the Fans"<<endl;
		cout<<"4.Update all data of the Fan"<<endl;
		cout<<"Your Choice = ";
		cin>>numb;
		if(numb == 1)
		{
		system("cls");
		CMSfile.open("Fans Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the fans = ";
		cin>>id;
		cout<<"Enter new number of the fan = ";
		cin>>Fan;
		CMSfile>>fan>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=fan)
			{
				temp<<fan<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<Fan<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>fan;
		}
		CMSfile.close();
		temp.close();
		remove("Fans Data.txt");
		rename("Temp.txt","Fans Data.txt");
	if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 2)
	{
		system("cls");
		CMSfile.open("Fans Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the fans = ";
		cin>>id;
		cout<<"Enter new company name of the fan = ";
		cin>>Company;
		CMSfile>>fan>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=fan)
			{
				temp<<fan<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<fan<<endl;
				temp<<Company<<endl;
				temp<<length<<endl;
				found++;
			}
			CMSfile>>fan>>company>>length;
		}
		CMSfile.close();
		temp.close();
		remove("Fans Data.txt");
		rename("Temp.txt","Fans Data.txt");
	if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 3)
	{
		system("cls");
		CMSfile.open("Fans Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the fans = ";
		cin>>id;
		cout<<"Enter new length of the fan = ";
		cin>>Length;
		CMSfile>>fan>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=fan)
			{
				temp<<fan<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<Fan<<endl;
				temp<<company<<endl;
				temp<<Length<<endl;
				found++;
			}
			CMSfile>>fan>>length>>fan;
		}
		CMSfile.close();
		temp.close();
		remove("Fans Data.txt");
		rename("Temp.txt","Fans Data.txt");
	if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
	else if(numb == 4)
	{
		system("cls");
		CMSfile.open("Fans Data.txt",ios::in);
		temp.open("Temp.txt",ios::out | ios::app);
		cout<<"Enter number of the fans = ";
		cin>>id;
		cout<<"Enter new number of the fan = ";
		cin>>Fan;
		cout<<"Enter new Company Name  of the fan = ";
		cin>>Company;
		cout<<"Enter new Length of the Fan";
		cin>>Length;
		CMSfile>>fan>>company>>length;
		while(!CMSfile.eof())
		{
			if(id!=fan)
			{
				temp<<fan<<endl;
				temp<<company<<endl;
				temp<<length<<endl;
			}
			else
			{
				temp<<Fan<<endl;
				temp<<Company<<endl;
				temp<<Length<<endl;
				found++;
			}
			CMSfile>>fan>>Company>>Length;
		}
		CMSfile.close();
		temp.close();
		remove("Fans Data.txt");
		rename("Temp.txt","Fans Data.txt");
	if(found !=0)
	cout<<"Your record with id number "<<id<<" has been updated."<<endl;
	else
	cout<<"Your record with id number "<<id<<" has not found."<<endl;
	}
}
}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;

        ifstream input("data.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello "<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
         choices();       
}
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                system("pause");
                main();
        }
}
void registr()
{

        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("data.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        system("pause");
        main();


}
void forgot()
{
        int ch;
        system("cls");
        cout<<"Forgotten ? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;

                        ifstream searchu("data.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\n Account found Successfully \n";
                                cout<<"\nYour password is: "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }

                case 2:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}
void check_item()
{
	system("cls");
	cout<<"1.Check Student Data"<<endl;
	cout<<"2.Check Teacher Data"<<endl;
	cout<<"3.Check Chair Data"<<endl;
	cout<<"4.Check Board Data"<<endl;
	cout<<"5.Check Fan Data"<<endl;
	cout<<"Your Choice = ";
	cin>>n;
	if(n == 1)
	{
		system("cls");
		CMSfile.open("Students Data.txt",ios::in);
		cout<<"Enter Id of Student = ";
		cin>>id;
		CMSfile>>rollno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(rollno == id)
			{
				cout<<"Roll Number of Student:"<<endl;
				cout<<"                       "<<rollno<<endl;
				cout<<"Name of Student:"<<endl;
				cout<<"                "<<Name<<endl;
				cout<<"Gender of Student:"<<endl;
				cout<<"                  "<<gender<<endl;
				found++;
			}
			CMSfile>>rollno>>Name>>gender;
		}
		CMSfile.close();
		if(found == 0)
	{
		cout<<"Your record with ID number "<<id<<" has not found"<<endl;
	}
	}
	else if(n == 2)
	{
		system("cls");
		CMSfile.open("Teachers Data.txt",ios::in);
		cout<<"Enter Id of Teacher = ";
		cin>>id;
		CMSfile>>refno>>Name>>gender;
		while(!CMSfile.eof())
		{
			if(refno == id)
			{
				cout<<"Reference Number of Teacher:"<<endl;
				cout<<"                       "<<refno<<endl;
				cout<<"Name of Teacher:"<<endl;
				cout<<"                "<<Name<<endl;
				cout<<"Gender of Teacher:"<<endl;
				cout<<"                  "<<gender<<endl;
				found++;
				
			}
			CMSfile>>refno>>Name>>gender;
		}
		CMSfile.close();
		if(found == 0)
	{
		cout<<"Your record with ID number "<<id<<" has not found"<<endl;
	}
	}
	else if(n == 3)
	{
		system("cls");
		CMSfile.open("Chair Data.txt",ios::in);
		cout<<"Enter Id of Chair = ";
		cin>>id;
		CMSfile>>chair>>company>>length;
		while(!CMSfile.eof())
		{
			if(chair == id)
			{
				cout<<"Id Number of Chair:"<<endl;
				cout<<"                     "<<chair<<endl;
				cout<<"Name of the Company of Chair:"<<endl;
				cout<<"                             "<<company<<endl;
				cout<<"Length of the Chair:"<<endl;
				cout<<"                    "<<length<<endl;
				found++;
				
			}
			CMSfile>>chair>>company>>length;
		}
		CMSfile.close();
		if(found == 0)
	{
		cout<<"Your record with ID number "<<id<<" has not found"<<endl;
	}
	}
	else if(n == 4)
	{
		system("cls");
		CMSfile.open("Board Data.txt",ios::in);
		cout<<"Enter Id of Board = ";
		cin>>id;
		CMSfile>>board>>company>>length;
		while(!CMSfile.eof())
		{
			if(board == id)
			{
				cout<<"Id Number of Chair:"<<endl;
				cout<<"                     "<<board<<endl;
				cout<<"Name of the Company of Chair:"<<endl;
				cout<<"                             "<<company<<endl;
				cout<<"Length of the Chair:"<<endl;
				cout<<"                    "<<length<<endl;
				found++;
				
			}
			CMSfile>>board>>company>>length;
		}
		CMSfile.close();
		if(found == 0)
	{
		cout<<"Your record with ID number "<<id<<" has not found"<<endl;
	}
	}
	else if(n == 5)
	{
		system("cls");
		CMSfile.open("Fans Data.txt",ios::in);
		cout<<"Enter Id of Fan = ";
		cin>>id;
		CMSfile>>fan>>company>>length;
		while(!CMSfile.eof())
		{
			if(fan == id)
			{
				cout<<"Id Number of Fan:"<<endl;
				cout<<"                     "<<fan<<endl;
				cout<<"Name of the Company of Fan:"<<endl;
				cout<<"                             "<<company<<endl;
				cout<<"Length of the Fan:"<<endl;
				cout<<"                    "<<length<<endl;
				found++;
				
			}
			CMSfile>>fan>>company>>length;
		}
		CMSfile.close();
		if(found == 0)
	{
		cout<<"Your record with ID number "<<id<<" has not found"<<endl;
	}
	}
	else
	{
		cout<<"Error"<<endl;
	}			
}
void choices()
{
	menu_system();
	switch(num)
	{
		case 1:
		{
			add_items();
			system("pause");
			choices();
			break;	
		}
		case 2:
		{
			do
			{
			display_items();
			cout<<endl<<endl;
			system("pause");
			cout<<"Do you want to display another record(y/n): ";
			cin>>Y;
		}
		while(Y == 'y');
		choices();
			break;
		}
		case 4:
		{
			do
			{
			delete_item();
			cout<<endl<<endl;
			system("pause");
			cout<<"Do you want to delete another record(y/n): ";
			cin>>Y;
		}
		while(Y == 'y');
		choices();
			break;
		}
		case 3:
		{
			do
			{
			update_item();
			system("pause");
			cout<<"Do you want to update another record(y/n): ";
			cin>>Y;
		}
		while(Y == 'y');
		choices();
			break;	
		}
		case 5:
		{
			do
			{
			check_item();
			system("pause");
			cout<<"Do you want to check another record(y/n): ";
			cin>>Y;
		}
		while(Y == 'y');
		choices();
			break;
		}	
		case 6:
			{
				Exit();
				break;
			}
		case 0:
		{
			system("cls");
			cout<<"Exiting the Program"<<endl;
			exit(0);
			break;	
		}
		default:
		{
			cout<<"Error"<<endl;
			system("pause");
			choices();
		}		
	}
}
void Exit()
{
	system("cls");
	cout<<"Exiting the Menu System"<<endl;
	system("pause");
	main();
}