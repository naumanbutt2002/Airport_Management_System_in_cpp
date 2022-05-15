
// Header Files for standard and manipulation of input

#include<iostream>
#include<iomanip>
#include<string.h>
// Keyword provides scope to identifiers(functions,variables,constants.)

int size=5;
//GLOBAL VARIABLE INITIALIZATION
using namespace std;

void display();
void data_dis_design();
void traversing(string tr_airlines[]);
void traversing(int tr_airlines[]);
void searching(string name[],string no[],string arr_t[],string dep_t[],string nam_no, int t_passengers[]);
void insertstart(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[],string n_name,string n_no,string n_arr_t,string n_dep_t, int n_t_passengers);
void insertlast(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[],string n_name,string n_no,string n_arr_t,string n_dep_t, int n_t_passengers);
void delstart(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[]);
void dellast(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[]);
// main function starts.

int main()	// main function header with return type int.
// main function body.
{	
	int slc;
	// ARRAY INITIALIZATION
	string airline_name[size+1]={"EMIRATES","SHAHEEN","EMIRATES","EMIRATES","PIA"};
	string airline_no[size+1]={"PK_191","EM_101","PK_191","PK_191","PK_181"};
	int total_passengers[size+1]={111,222,223,221,123,211};
	string arrival_time[size+1]={"11:30AM","12:30PM","01:10PM","11:10AM","01:30AM"};
	string dep_time[size+1]={"11:10AM","10:30AM","09:30AM","11:10PM","00:30AM"};
	
	// DO WHILE FOR MENU DRIVEN 
	do{
	label:
	//CLEAR THE SCREEN
	system("cls");
	display();
	cout<<"ENTER YOUR SELECTION= ";
	cin>>slc;
	//SELECTION TO SELECT WHICH OPERATION FOR MAIN MENUS
	switch(slc)
	{
		case 0:			
			break;
			
			
		case 1:
			int slc_1;
			label1:
			cout << "Press 0 TO EXIT\n";
			cout << "Press 1 FOR AIRLINES DATABASE\n";
	        cout << "Press 2 FOR AIRLINES NAMES\n";
	        cout << "Press 3 FOR AIRLINES NOs\n";
	        cout << "Press 4 FOR AIRLINES TOTAL PASSENGERS\n";
	        cout << "Press 5 FOR AIRLINES TIME (Arrival and Departure)\n";
	        
	        cout << "PRESS= ";
	        cin >> slc_1;
	        system("cls");
	        if(slc_1==0)
	        	break;
	        if (slc_1 == 1)
	        {	
	        	data_dis_design();
			    for (int i = 0; i < size; i++)
			    {
			        cout <<"= "<<i+1<<setw(25);
					cout<<airline_name[i] <<setw(25);
					cout<< airline_no[i] <<setw(25);
					cout<< total_passengers[i] <<setw(25);
					cout<< arrival_time[i] <<setw(25);
					cout<< dep_time[i] <<setw(27)<<"="<< "\n";
			    }
	        	cout<<"===========================================================================================================================================================\n"<<endl;
	            goto label1;
	        }
	        else if (slc_1 == 2)
	        {
	            cout<<"\nNAMES OF AIRLINES:-\t\t";
				traversing(airline_name);
	       		goto label1; 
			}
	        else if (slc_1 == 3)
	        {
	            cout<<"\nNO OF AIRLINES:-\t\t";
				traversing(airline_no);
				goto label1;
	        }
	        else if (slc_1 == 4)
	        {
	            cout<<"\nPASSENGERS OF AIRLINES:-\t";
				traversing(total_passengers);
				goto label1;
	        }
	        else if (slc_1 == 5)
	        {
	            		
				cout<<"\nARRIVAL TIME OF AIRLINES:-\t";
				traversing(arrival_time);
				cout<<"DEPARTURE TIME OF AIRLINES:-\t";
				traversing(dep_time);
				goto label1;
	        }
	        
	        else
	        {
	            cout << "PRESS 0 TO 5 ONLY."<<endl;
	            goto label1;
	        }
			break;	
			
		case 2:
			
			int slc_2;
			label2:
			cout << "Press 0 TO EXIT\n";
	        cout << "Press 1 FOR AIRLINES NAMES\n";
	        cout << "Press 2 FOR AIRLINES NOs\n";
	        cout<<"PRESS= ";
	        cin >> slc_2;
	        system("cls");
	        if(slc_2==0)
	        break;
	        else if (slc_2 == 1)
	        {	
	        	string s_name;
	            cout<<"ENTER AIRLINES NAME TO SEARCH= ";
	            cin>>s_name;
	            cout<<"SEARCHING AIRLINES NAME:-"<<endl;
				searching(airline_name,airline_no,arrival_time,dep_time,s_name,total_passengers);
				goto label2;
	        }
	        else if (slc_2 == 2)
	        {	
	        	string s_name;
	            cout<<"ENTER AIRLINES NO TO SEARCH= ";
	            cin>>s_name;
	            cout<<"SEARCHING AIRLINES NOs:-"<<endl;
				searching(airline_name,airline_no,arrival_time,dep_time,s_name,total_passengers);
				goto label2;
	        }
	        
	        else
	        {
	            cout << "PRESS 0 TO 2 ONLY."<<endl<<endl;
	            goto label2;
	        }
			break;
			
		case 3:
			label8:
			int upd;
			cout << "Press 0 TO EXIT\n";
	        cout << "\nENTER 1 TO INSERT FROM FIRST.";
	        cout << "\nENTER 2 TO INSERT FROM LAST.";
	        cout<<"\nPRESS= ";
	        cin >> upd;
	        system("cls");
	        if(upd==0)
	        	break;
	        else if (upd == 1)
	        {
	            string newnam,newno,n_arr,n_dep;
	            int new_t_pass;
	            cout << "ENTER THE NEW AIRLINES NAME= ";
	            cin >> newnam;
	            cout << "ENTER THE NEW AIRLINES NO= ";
	            cin >> newno;
	            cout << "ENTER THE NEW AIRLINES TOTAL PASSENGERS= ";
	            cin >> new_t_pass;
	            cout << "ENTER THE NEW AIRLINES ARRIVAL TIME= ";
	            cin >> n_arr;
	            cout << "ENTER THE NEW AIRLINES DEPARTURE TIME= ";
	            cin >> n_dep;
				insertstart(airline_name, airline_no, arrival_time,  dep_time, total_passengers, newnam, newno, n_arr, n_dep,  new_t_pass);

	            goto label8;
	        }
	        else if (upd == 2)
	        {
	            string newnam,newno,n_arr,n_dep;
	            int new_t_pass;
	            cout << "ENTER THE NEW AIRLINES NAME= ";
	            cin >> newnam;
	            cout << "ENTER THE NEW AIRLINES NO= ";
	            cin >> newno;
	            cout << "ENTER THE NEW AIRLINES TOTAL PASSENGERS= ";
	            cin >> new_t_pass;
	            cout << "ENTER THE NEW AIRLINES ARRIVAL TIME= ";
	            cin >> n_arr;
	            cout << "ENTER THE NEW AIRLINES DEPARTURE TIME= ";
	            cin >> n_dep;
	            
	            insertlast(airline_name, airline_no, arrival_time,  dep_time, total_passengers, newnam, newno, n_arr, n_dep,  new_t_pass);
	        goto label8;
			}
	        else
	        {
	            cout << "PRESS 0 TO 2 ONLY.";
	            goto label8;
	        }
	        break;
			
		case 4:
			label7:
			int dell;
			cout << "Press 0 TO EXIT\n";
	        cout << "ENTER 1 TO DELETE FROM FIRST."<<endl;
	        cout << "ENTER 2 TO DELETE FROM LAST."<<endl;
	        cout<<"PRESS= ";	        
	        cin >> dell;
	        system("cls");
	        if(dell==0)
	        	break;
	        else if (dell == 1)
	        {
				delstart(airline_name, airline_no, arrival_time, dep_time,total_passengers);
			    goto label7;
	        }
	        else if (dell == 2)
	        {
				dellast(airline_name, airline_no, arrival_time, dep_time,total_passengers);
	        	goto label7;
	        }
	        else
	        {
	            cout << "PRESS 0 TO 2 ONLY.";
	            goto label7;
	        }
			break;
			
			
			
			
			
			
		default:
			cout<<"PRESS 0 TO 4 ONLY."<<endl;
			goto label;
			
	}
	
	
	}	
	while(slc!=0);
	
	
	return(0);//It means main function returns 0.
}	















void display()
{	cout<<"\n\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t\t\t\t\t~ AIRPORT MANAGEMENT SYSTEM ~\n\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl<<endl;
	cout<<"SLECTION LIST::--\n0 FOR EXIT\n1 FOR TRAVERSING\n2 FOR FIND AND REPLACE\n3 FOR INSERTION\n4 FOR DELETION"<<endl<<endl;
}
void data_dis_design()
{
		cout<<"\n==========================================================================================================================================================="<<endl;
		cout << "= POS"<<setw(25);
		cout<<"AIRLANE NAME"<<setw(25);
		cout<<"AIRLANE NO"<<setw(25);
		cout<<"TOTAL PASSENGERS"<<setw(25);
		cout<<"ARRIVAL TIME"<<setw(25);
		cout<<"DEPARTURE TIME"<<setw(25)<<"="<<endl;
		cout<<"==========================================================================================================================================================="<<endl;
}
void traversing(string tr_airlines[])
{	
	for (int i = 0; i < size; i++)
	{
		cout<<tr_airlines[i]<<" ";
	}
	cout<<endl<<endl;
}
void traversing(int tr_airlines[])
{
	for (int i = 0; i < size; i++)
	{
		cout<<tr_airlines[i]<<" ";
	}
	cout<<endl<<endl;
}

void searching(string name[],string no[],string arr_t[],string dep_t[],string nam_no, int t_passengers[])
{	
	string rp;
	
    int flag,slc = 0,cnt=0;
    for (int i = 0; i < size; i++)
    {
        if (name[i] == nam_no)
        {
            slc = 1;
        }
        else if(no[i] == nam_no)
        {
        	slc = 2;
		}
		
		
    }
   	switch(slc)
   	{
	   	case 1:
	       
		   label3:
		   	cnt=0;
		   	cout<<"\nPRESS 0 TO EXIT";
        	cout<<"\nPRESS 1 FOR FIND ONLY";
        	cout<<"\nPRESS 2 FOR FIND AND REPLACE";
        	cout<<"\nPRESS= ";
        	cin>>flag;
        	system("cls");
        	if(flag==0)
        		break;
		    else if(flag==1)
			    {	data_dis_design();
			    	for (int i = 0; i < size; i++)
				    {
				        if (name[i] == nam_no)
				        {	
							cnt++;
							cout <<"= "<<i+1<<setw(22);
							cout<<name[i]<<setw(25); 
							cout<< no[i]<<setw(25);
							cout<<t_passengers[i]<<setw(25);
							cout<< arr_t[i]<<setw(25);
							cout<< dep_t[i]<<setw(30)<<"="<<endl;     				
						}
				    }
    				cout<<"===========================================================================================================================================================\n"<<endl;
					cout<<"AIRLINE NAME IS FOUND "<<cnt<<" TIMES."<<endl;
					goto label3;
				}
		    else if(flag==2)
			{	cout<<"\nENTER NAME TO WHICH REPLACE= ";
				cin>>rp;
				data_dis_design();
				for (int i = 0; i < size; i++)
				    {	
				        if (name[i] == nam_no)
				        {	
							cnt++;
							name[i]=rp;
				        	
							cout <<"= "<<i+1<<setw(22);
							cout<<name[i]<<setw(25); 
							cout<< no[i]<<setw(25);
							cout<<t_passengers[i]<<setw(25);
							cout<< arr_t[i]<<setw(25);
							cout<< dep_t[i]<<setw(30)<<"="<<endl;
	        				
						}
				    }
				cout<<"===========================================================================================================================================================\n"<<endl;
				cout<<"AIRLINE NAME IS FOUND "<<cnt<<" TIMES."<<endl;
				goto label3;
			}
		    
			else
			cout<<"PRESS 0 TO 2 ONLY."<<endl;
			goto label3;
	    break;
		
		
		case 2:
		   label4:
		   		cnt=0;
			   	cout<<"\nPRESS 0 TO EXIT";
	        	cout<<"\nPRESS 1 FOR FIND ONLY";
	        	cout<<"\nPRESS 2 FOR FIND AND REPLACE";
	        	cout<<"\nPRESS= ";
	        	cin>>flag;
	        	system("cls");
	        	if(flag==0)
	        		break;
			    else if(flag==1)
				    {	data_dis_design();
				    	for (int i = 0; i < size; i++)
					    {
					        if (no[i] == nam_no)
					        {	
								cnt++;
								cout <<"= "<<i+1<<setw(22);
								cout<<name[i]<<setw(25); 
								cout<< no[i]<<setw(25);
								cout<<t_passengers[i]<<setw(25);
								cout<< arr_t[i]<<setw(25);
								cout<< dep_t[i]<<setw(30)<<"="<<endl;     				
							}
					    }
	    				cout<<"===========================================================================================================================================================\n"<<endl;
						cout<<"AIRLINE NO IS FOUND "<<cnt<<" TIMES."<<endl;
						goto label4;
					}
			    else if(flag==2)
				{	cout<<"\nENTER NO TO WHICH REPLACE= ";
					cin>>rp;
					data_dis_design();
					for (int i = 0; i < size; i++)
					    {	
					        if (no[i] == nam_no)
					        {	
								cnt++;
								no[i]=rp;
					        	
								cout <<"= "<<i+1<<setw(22);
								cout<<name[i]<<setw(25); 
								cout<< no[i]<<setw(25);
								cout<<t_passengers[i]<<setw(25);
								cout<< arr_t[i]<<setw(25);
								cout<< dep_t[i]<<setw(30)<<"="<<endl;
		        				
							}
					    }
					cout<<"===========================================================================================================================================================\n"<<endl;
					cout<<"AIRLINE NO IS FOUND "<<cnt<<" TIMES."<<endl;
					goto label4;
				}
			    
				else
				cout<<"PRESS 0 TO 2 ONLY."<<endl;
				goto label4;
		    break;
		
		
		default:
    			cout << "DATA is not found.\n\n";
	}
 
}
void insertstart(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[],string n_name,string n_no,string n_arr_t,string n_dep_t, int n_t_passengers)
{
    for (int i = size; i >= 1; i--)
    {
        name[i] = name[i-1];
        name[i-1] = n_name;
        no[i] = no[i-1];
        no[i-1] = n_no;
        t_passengers[i] = t_passengers[i-1];
        t_passengers[i-1] = n_t_passengers;
        arr_t[i] = arr_t[i-1];
        arr_t[i-1] = n_arr_t;
        dep_t[i] = dep_t[i-1];
        dep_t[i-1] = n_dep_t;
        

    }
    cout<<"\n\nAFTER INSERT:\n";
    data_dis_design();
    for (int i = 0; i <= size; i++)
    {
        cout <<"= "<<i+1<<setw(25);
		cout<<name[i] <<setw(25);
		cout<< no[i] <<setw(25);
		cout<< t_passengers[i] <<setw(25);
		cout<< arr_t[i] <<setw(25);
		cout<< dep_t[i] <<setw(27)<<"="<< "\n";
    }
    cout<<"===========================================================================================================================================================\n"<<endl;

}
void insertlast(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[],string n_name,string n_no,string n_arr_t,string n_dep_t, int n_t_passengers)
{
    cout<<"\n\nAFTER INSERT";
	data_dis_design();
    for (int i = 0; i < size + 1; i++)
    {
        name[size] = n_name;
        no[size] = n_no;
        t_passengers[size] = n_t_passengers;
        arr_t[size] = n_arr_t;
        dep_t[size] = n_dep_t;
        
        cout <<"= "<<i+1<<setw(25);
		cout<<name[i] <<setw(25);
		cout<< no[i] <<setw(25);
		cout<< t_passengers[i] <<setw(25);
		cout<< arr_t[i] <<setw(25);
		cout<< dep_t[i] <<setw(27)<<"="<< "\n";        
    }
	cout<<"===========================================================================================================================================================\n"<<endl;

}
void delstart(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[])
{
			for (int i = 0; i < size; i++)
		    {
		        if (no[i] == no[0] && name[i] == name[0] && t_passengers[i] == t_passengers[0]&& arr_t[i] == arr_t[0] && dep_t[i] == dep_t[0])
		        {
		            for (int j = i; j < size - 1; j++)
		            {
		                no[j] = no[j + 1];
		                name[j] = name[j + 1];
		                t_passengers[j] = t_passengers[j + 1];
		                arr_t[j] = arr_t[j + 1];
		                dep_t[j] = dep_t[j + 1];
		            }
		        }
		    }
		    cout << "\n\n DATA AFTER DELETION FROM THE FIRST INDEX:"<< "\n";
		    data_dis_design();
		    for (int i = 0; i < size - 1; i++)
		    {
		        cout <<"= "<<i+2<<setw(22);
				cout<<name[i]<<setw(25); 
				cout<< no[i]<<setw(25);
				cout<<t_passengers[i]<<setw(25);
				cout<< arr_t[i]<<setw(25);
				cout<< dep_t[i]<<setw(30)<<"="<<endl; 
		    }
		    cout<<"===========================================================================================================================================================\n"<<endl;
}
void dellast(string name[],string no[],string arr_t[],string dep_t[], int t_passengers[])
{	
    cout << "\n\n DATA AFTER DELETION FROM THE LAST INDEX:"<< "\n";
    data_dis_design();
		    for (int i = 0; i < size - 1; i++)
		    {	    	
		        cout <<"= "<<i+1<<setw(22);
				cout<<name[i]<<setw(25); 
				cout<< no[i]<<setw(25);
				cout<<t_passengers[i]<<setw(25);
				cout<< arr_t[i]<<setw(25);
				cout<< dep_t[i]<<setw(30)<<"="<<endl; 
		    }
		    cout<<"===========================================================================================================================================================\n"<<endl;
}


//end program
