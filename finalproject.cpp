//importing all the required directories

#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;

//functions and classes


void welcome_page();
void intro();
void thank_you();
void test_success();


class logs
{
	public:
		string reguser,regpass,ru,rp,bg,sex;
        int age;
		void login();
        void registr();
        void forgot();		
};
class quick_test : public logs
{
	public:
		char s1[10],s2[10],s3[10],s4[10],s5[10];
		void test();
		void analyse_symptoms();
		void Final_Report();
		
} T;
class test
{
	public:
		char a1[2],a2[2],a3[2],a4[2],a5[2],a6[2],a7[2],a8[2];
		void routine_test();
        void checkup();
		void display_testresult();  
}R;

//----------------------------------------------------------------------------------------------------------------------------------------------

//test function

void quick_test :: test()
{
	system("cls");
	cout<<"***********************************************************************\n\n\n";
    cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
    cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
    cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
	
	cout<< " *** COVID-19 DIAGONOSIS FORM *** "<<endl<<endl;
	
	cout<<"1. Are you experiencing any of the following symptoms? \
	        \nCough(C) \
        	\nFever(F) \
	        \nDifficulty in Breathing(B) \
			\nNone of the Above(N)\n";
    cin>>s1;
    
    cout<<"2. Have you ever had any one of the following:\
	        \nDiabetes(D)\
	        \nHypertension(HT)\
	        \nLung disease(L)\
        	\nHeart disease(H) \
			\nNone of the above(N)\n";
    cin>>s2;
    
    cout<<"3. Have you travelled anywhere internationally in the last 14 days?\n \
	         Yes(Y)\n\
			 No(N)\n";
    cin>>s3;
    
    cout<<"4. Which of the following apply to you?\n\
	 		('1')I have recently interacted or lived with someone who has tested positive for COVID-19.\n \
			('2')I am a healthcare worker and I examined a COVID-19 confirmed case without protective gear.\n \
			None of above(N)\n";
    cin>>s4;
    
    cout<<"5.Having any other disorders?......Less common symptoms:\n \
			 aches and pains(AP)\
			 \n diarrhoea(D) \
			 \n headache(H) \
			 \n loss of taste and smell(TS) \
			 \n None(N)";
    cin>>s5;
}
//------------------------------------------------------------------------------------------------------------------------------------------

//analyse symptoms function

void quick_test :: analyse_symptoms()
{

    if( (s1 =="C" || s1 == "F" || s1 == "B") & (s2 == "D" || s2 == "HT" || s2 == "L" || s2 == "H") )
    {
    	cout<<"You are suffering from:"<<s1<<"and"<<s2<<"It can be major problem.";
	}
	else
	{ 
	    cout<<"Your risk factor is low! ";
	}
	
	if((s3 =="Y")||(s4 =="1"))
	{
		if(s4 =="2")
		{
			cout<<"You should quarntine youself for 14 days and sholud follow all the precautions!!";
		}
		else
		{
			cout<<"You have high risk factor....should go for covid test as soon as possible..";
		}
	}
	else
	{
		cout<<"You are safe..but still you should follow covid precautions...Be safe!"; 
	}
	
	if(s5=="AP"||s5=="D"||s5=="H"||s5=="TS")
	{
		cout<<"You have normal symptom of "<<s5;
	}
	else
	{
		cout<<"No other disorders...You are healthy!!";
	}

	//ofstream obj("record.txt",ios::app);
	//obj<<Final_Report();   
}

//make a previous test function
//make a personal details function

//---------------------------------------------------------------------------------------------------------------------------------

//daignosis function

void diagnosis(void)
{
system("cls");
cout<<" ** C O V I D - 1 9   D I A G N O S I S   W I N D O W **   ";
cout<<"\n\n\n";
cout<<" Let's have a look at the symptoms.........";
cout<<"\n\n\n";
cout<<" Please enter the form in the next page .";
cout<<"\n\n\n\n\n\n\t\t\t ";
cout<<"***** PRESS ANY KEY ***** "<<endl<<endl;
getch();
}


// Routine checkup function

void checkup(void)
{
system("cls");
cout<<" ** D I A G N O S I S   W I N D O W **   ";
cout<<"\n\n\n";
cout<<" Let's have a look at the symptoms.........";
cout<<"\n\n\n";
cout<<" Please enter the form in the next page .";
cout<<"\n\n\n\n\n\n\t\t\t ";
cout<<"***** PRESS ANY KEY ***** "<<endl<<endl;
getch();
}

//--------------------------------------------------------------------------------------------------------------------------------------

//final report

void quick_test :: Final_Report()
{
	system("cls");
	
	cout<<"***********************************************************************\n\n\n";
    cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
    cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
    cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
	
	cout<<"***************** FINAL   REPORT **********************\n\n";
	
	cout<<"NAME:"<<reguser<<"\n";
	cout<<"AGE:"<<age<<"\n";
	cout<<"SEX:"<<sex<<"\n";
	cout<<"BLOOD GROUP:"<<bg<<"\n";
	cout<<"YOUR TEST REPORTS:\n\n";
	T.analyse_symptoms();
	cout<<"PRECAUTIONS TO BE FOLLOWED: \n\n";
	cout<<"Avoid touching your eyes, nose, and mouth with unwashed hands.\n\
			Avoid close contact with people who are sick.\n\
			Stay home when you are sick.\n\
			Cover your cough or sneeze with a tissue, then throw the tissue in the trash and wash your hands. If you don’t have a tissue, cough or sneeze into your elbow, rather than into your hands.\n\
			Clean and disinfect frequently touched objects and surfaces.";
			
}

//-------------------------------------------------------------------------------------------------------------------------------------------------

//main function

main()
{
	welcome_page();
	system("cls");
	
	intro();
	system("cls");
	
        int choice;
        system("cls");
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Daigonsis Software for COVID-19                              \n\n";
        cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"*******************        Login Page       *******************************\n\n";
        
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
                        T.login();
                        
                        break;
                case 2:
                        T.registr();
                        break;
                case 3:
                        T.forgot();
                        break;
                case 4:

                        cout<<"Thanks for using this program.......\n\n";
                        thank_you();
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main();
        }
        
}

//----------------------------------------------------------------------------------------------------------------------------------

//login function

void logs :: login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        
        ifstream input("database.txt");
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
        		cout<<"***********************************************************************\n\n\n";
        		cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        		cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
                cout<<"\nHello"<<user<<"\nLOGIN SUCCESS\nWe're glad that you're here.\nThanks for logging in\n\n\n";
                cin.get();
                cin.get();
                cout<<"Press any key to continue....";
                getch();
                
                system("cls");
                cout<<"***********************************************************************\n\n\n";
        		cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        		cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
                cout<<"1. Show report of previous tests "<<endl;
        		cout<<"2. Quick Covid-19 test"<<endl;
        		cout<<"3. Show personal details"<<endl; 
        		cout<<"4. Routine Checkup"<<endl;
        		cout<<"5. Exit"<<endl;
        		cout<<"\nEnter your choice :";
        		
        		int choice;
        		cin>>choice;
        		cout<<endl;
        		
        		switch(choice)
        		{
        			case 1:
        				{
						
                        ifstream obj1;
                        obj1.open("record.txt");
                        T.analyse_symptoms();
                        break;
                    }
                	case 2:
                		{
						
                		diagnosis();
                        T.test();
                        test_success();//quick_test
                        system("cls");
                        T.Final_Report();
                        break;
                    }
                /*	case 3:
                		{
						
                    	ifstream obj2;
						obj2.open("database.txt");
						obj2>>"UserID: ">>reguser;
						obj2>>"Password: ">>regpass;
						obj2>>"Age: ">>age;
						obj2>>"Sex: ">>sex;
						obj2>>"Blood Group: ">>bg;
                        break;
                    }*/
                    case 4:
                    	{
						
					        R.checkup();
					        R.routine_test();
					        R.display_testresult();
					        break;
					   }
                        
                	case 5:
                        cout<<"Thanks for using this program.......\n\n";
                        exit;
                	default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl;
                        main();
				}
        		
                
    }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
}

//------------------------------------------------------------------------------------------------------------------------------------------------

//register function

void logs :: registr()
{
        
        
        system("cls");
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        for(int i=0;i<5;i++) 
    {
        regpass[i]=getch();
        cout<<"*";
    }
        cout<<"\nEnter the age : ";
        cin>>age;
        cout<<"\nEnter the sex : ";
        cin>>sex;
        cout<<"\nEnter the blood group : ";
        cin>>bg;
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<' '<<age<<' '<<sex<<' '<<bg<<endl;
        system("cls");
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"\nRegistration Sucessful\n";
        main();
        
        
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

//forget function

void logs :: forgot()
{
        int ch;
        system("cls");
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"Forgotten ? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
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
                        
                        ifstream searchu("database.txt");
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
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
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
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;
                        
                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }
                
                        break;
                }
                
                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}

//--------------------------------------------------------------------------------------------------------------------------------

//test successful page
void test_success()
{
	system("cls");
	cout<<"***********************************************************************\n\n\n";
    cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
    cout<<"---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
    cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"			Test successful        \n\n\n";
    cout<<"Press any key to continue....";
    getch();
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

//welcome page

void welcome_page()
{
	cout<<"\n\n\n\t\t\t*****************************************************************"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                         Hello                                 *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                 WELCOME TO THE SOFTWARE                       *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*****************************************************************\n\n\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t\t\tThis software is developed by Harshit Chaubisa and Bhavini Jain \n\n\n\n";
	cout<<"Press any key to continue...........";
	getch();

}

//----------------------------------------------------------------------------------------------------------------------------------------------

//introduction page

void intro()
{
	cout<<"\n\n\n\t\t\tINTRODUCTION TO COVID-19\n\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"Coronavirus disease 2019 (COVID-19) is an infectious disease caused by severe acute respiratory syndrome coronavirus 2 (SARS-CoV-2). \
	It was first identified in December 2019 in Wuhan, Hubei, China, and has resulted in an ongoing pandemic.Common symptoms include fever, cough,\
	fatigue, shortness of breath or breathing difficulties, and loss of smell and taste. While most people have mild symptoms, some people develop \
	acute respiratory distress syndrome (ARDS) possibly precipitated by cytokine storm, multi-organ failure, septic shock, and blood clots. The \
	incubation period may range from one to fourteen days. There are no proven vaccines or specific treatments for COVID-19 yet, though several are in development. \
	Management involves the treatment of symptoms, supportive care, isolation, and experimental measures. The World Health Organization (WHO) declared the COVID-19\
	outbreak a public health emergency of international concern (PHEIC) on 30 January 2020 and a pandemic on 11 March 2020. Local transmission of the disease has \
	occurred in most countries across all six WHO regions.Longer-term damage to organs (in particular lungs and heart) has been observed, and there is concern about \
	a significant number of patients who have recovered from the acute phase of the disease but continue to experience a range of effects including severe fatigue, \
	memory loss and other cognitive issues, low grade fever, muscle weakness, breathlessness and other symptoms for months afterwards.";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n\n\n";
	cout<<"Press any key to continue.....";
	getch();
	
}

//routine tests
void test :: routine_test()
{
	
	
	cout<<"1. Are you experiencing any of these systoms?\n\
			A) High Fever\n \
			B) Chills,Headache\n \
			C) Muscle pain and Fatigue\n \
			D) None of the above\n";
	cin>>a1;		
	cout<<"2. Are you experiencing any of these systoms?\n\
			A) Weakness\n \
			B) Diarrhea and Conspitation \n \
			C) Loss of Apetite \n \
			D) None of the above\n"	;
	cin>>a2;
	cout<<"3. Are you experiencing any of these systoms?\n\
	     	A) Often Urination\n \
	     	B) Feeling very thirsty \n \
	     	C) Extreme fatigue and Blurry Vision \n \
	     	D) None of the above \n ";
	cin>>a3;
	cout<<"4. Are you experiencing any of these systoms?\n\
	  		A) Shortnes of Breathe \n \
			B) Chest tightness \n \
			C) Wheezing \n \
			D) None of the above\n";
	cin>>a4;
	cout<<"5. Are you experiencing any of these systoms?\n\
			A) Increased sensitivity to cold\n \
			B) Dry skin \n \
			C) Weight gain and Puffy face\n\
			D) None of the above \n ";
	cin>>a5;
	cout<<"6. Are you experiencing any of these systoms?\n\
		   A) Fever and chills \n \
		   B) Change in skin colour \n \
		   C) Dark-coloured urine \n \
		   D) None of the above \n ";
	cin>>a6;
	cout<<"7. Are you experiencing any of these systoms?\n\
			A) Trouble Sleeping \n \
			B) Indigestion \n \
			C) Anxiety \n \
			D) None of the above \n";
	cin>>a7;
	cout<<"8. Are you experiencing any of these systoms?\n\
			A) Coughing up blood \n \
			B) Sever Wheezing \n \
			C) Difficulty Breathing \n \
			D) None of the above \n";
	cin>>a8;
								
}
void test :: display_testresult()
{
	if (a1=="D" && a2=="D" && a3=="D" && a4=="D" && a5=="D" && a6=="D" && a7=="D" && a8=="D")
	{
		cout<<"You are absolutely Healthy!!....\n\n";
	}
	else
{
	
	if(a1=="A"||a1=="B"||a1=="C")
	{
		cout<<"You have symptoms of 'Malaria'. Must go for  Malaria test\n";
	}
	else
	{
		cout<<"Malaria Negative!\n";
	}
	
	if(a2=="A"||a2=="B"||a2=="C")
	{
		cout<<"You have symptoms of 'Typhoid'. Must go for  Typhoid test\n";
	}
	else
	{
		cout<<"Typhoid Negative!\n";
	}
	
	if(a3=="A"||a3=="B"||a3=="C")
	{
		cout<<"You have symptoms of 'Diabetes'. Must go for  Diabetes test\n";
	}
	else
	{
		cout<<"Diabetes Negative!\n";
	}
	
	if(a4=="A"||a4=="B"||a4=="C")
	{
		cout<<"You have symptoms of 'Asthma'. Must go for  Asthma test\n";
	}
	else
	{
		cout<<"Asthma Negative!\n";
	}
	 
	if(a5=="A"||a5=="B"||a5=="C")
	{
		cout<<"You have symptoms of 'Thyroid'. Must go for  Thyroid test\n";
	}
	else
	{
		cout<<"Thyroid Negative!\n";
	}
	
	if(a6=="A"||a6=="B"||a6=="C")
	{
		cout<<"You have symptoms of 'Jaundice'. Must go for  Jaundice test\n";
	}
	else
	{
		cout<<"Jaundice Negative!\n";
	}
	 
	if(a7=="A"||a7=="B"||a7=="C")
	{
		cout<<"You have symptoms of 'Heart disease'. Must go for check up.\n";
	}
	else
	{
		cout<<"No Heart Problems!\n";
	}
	
	if(a8=="A"||a8=="B"||a8=="C")
	{
		cout<<"You have symptoms of 'Lung Disease'. Must go for check up\n";
	}
	else
	{
		cout<<"No Lungs Problem!\n";
	}
}

}
//---------------------------------------------------------------------------------------------------------------------------------------
//thank you page

void thank_you()
{

	cout<<"\n\n\n\t\t\t*****************************************************************"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                        BE SAFE!!!!!!                          *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                         THANK YOU                             *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*                                                               *"<<endl;
	cout<<"\t\t\t*****************************************************************\n\n\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"Press any key to continue.....";	

}

