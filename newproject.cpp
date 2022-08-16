//importing all the required directories and header files

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
		void personal_details();
		void login_further();		
};
class quick_test : public logs
{
	public:
		char s1,s2,s3,s4,s5;
		void test();
		void analyse_symptoms();
		void Final_Report();
		
} T;
class test
{
	public:
		char a1,a2,a3,a4,a5,a6,a7,a8;
		void routine_test();
        void checkup();
		void display_testresult();  
}R;

//----------------------------------------------------------------------------------------------------------------------------------------------

//test function

void quick_test :: test()
{
	system("cls");
	cout<<"\t***********************************************************************\n\n\n";
    cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
    cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
    cout<<"------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
	
	cout<< "\t *** COVID-19 DIAGONOSIS FORM *** "<<endl<<endl;
	
	cout<<"1. Are you experiencing any of the following symptoms?\n\
	Cough(C)\n\
	Fever(F)\n\
	Difficulty in Breathing(B)\n\
	None of the Above(N)\n";
    cin>>s1;
    cout<<"You chose : "<<s1<<endl<<endl;
    
    cout<<"2. Have you ever had any one of the following:\n\
	Diabetes(D)\n\
	Hypertension(T)\n\
	Lung disease(L)\n\
	Heart disease(H)\n\
	None of the above(N)\n";
    cin>>s2;
    cout<<"You chose : "<<s2<<endl<<endl;
    
    cout<<"3. Have you travelled anywhere internationally in the last 14 days?\n\
	Yes(Y)\n\
	No(N)\n";
    cin>>s3;
    cout<<"You chose : "<<s3<<endl<<endl;
    
    cout<<"4. Which of the following apply to you?\n\
	('1')I have recently interacted or lived with someone who has tested positive for COVID-19.\n\
	('2')I am a healthcare worker and I examined a COVID-19 confirmed case without protective gear.\n\
	None of above(N)\n";
    cin>>s4;
    cout<<"You chose : "<<s4<<endl;
    
    cout<<"5.Having any other disorders?......Less common symptoms:\n\
	aches and pains(A)\n\
	diarrhoea(D)\n\
	headache(H)\n\
	loss of taste and smell(S)\n\
	None of the above(N)\n";
    cin>>s5;
    cout<<"You chose : "<<s5<<endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------

//analyse symptoms function

void quick_test :: analyse_symptoms()
{
	ofstream obj;
	obj.open("record.txt",ios::app);
    if( ((s1 =='C'||s1=='c') || (s1 == 'F'||s1=='f') || (s1 == 'B'||s2=='b')) && ((s2 == 'D'||s2=='d') || (s2 == 'T'||s2=='t') || (s2 == 'L'||s2=='l') || (s2 == 'H'||s2=='h')) )
    {
	
    	if((s1 =='C'||s1=='c')&&(s2 == 'D'||s2=='d'))
    	{
    		cout<<"You are suffering from: Cough and Diabetes. It can be a major problem. \n";
    		obj<<"You are suffering from: Cough and Diabetes. It can be a major problem. \n";
		}
		else if((s1 =='C'||s1=='c')&&(s2 == 'T'||s2=='t'))
		{
			cout<<"You are suffering from: Cough and Hypertension. It can be a major problem. \n";
			obj<<"You are suffering from: Cough and Hypertension. It can be a major problem. \n";
		}
		else if((s1 =='C'||s1=='c')&&(s2 == 'L'||s2=='l'))
		{
			cout<<"You are suffering from: Cough and Lung Disease. It can be a major problem. \n";
			obj<<"You are suffering from: Cough and Lung Disease. It can be a major problem. \n";
		}
		else if((s1 =='C'||s1=='c')&&(s2 == 'H'||s2=='h'))
		{
			cout<<"You are suffering from: Cough and Heart Disease. It can be a major problem. \n";
			obj<<"You are suffering from: Cough and Heart Disease. It can be a major problem. \n";
		}
		else if((s1 == 'F'||s1=='f')&&(s2 == 'D'||s2=='d'))
		{
			cout<<"You are suffering from: Fever and Diabetes. It can be a major problem. \n";
			obj<<"You are suffering from: Fever and Diabetes. It can be a major problem. \n";
		}
		else if((s1 == 'F'||s1=='f')&&(s2 == 'T'||s2=='t'))
		{
			cout<<"You are suffering from: Fever and Hypertension. It can be a major problem. \n";
			obj<<"You are suffering from: Fever and Hypertension. It can be a major problem. \n";
		}
		else if((s1 == 'F'||s1=='f')&&(s2 == 'L'||s2=='l'))
		{
			cout<<"You are suffering from: Fever and Lung Disease. It can be a major problem. \n";
			obj<<"You are suffering from: Fever and Lung Disease. It can be a major problem. \n";
		}
		else if((s1 == 'F'||s1=='f')&&(s2 == 'H'||s2=='h'))
		{
			cout<<"You are suffering from: Fever and Heart Disease. It can be a major problem. \n";
			obj<<"You are suffering from: Fever and Heart Disease. It can be a major problem. \n";
		}
		else if((s1 == 'B'||s2=='b')&&(s2 == 'D'||s2=='d'))
		{
			cout<<"You are suffering from: Difficulty in breathing. It can be a major problem. \n";
			obj<<"You are suffering from: Difficulty in breathing. It can be a major problem. \n";
		}
		else if((s1 == 'B'||s2=='b')&&(s2 == 'T'||s2=='t'))
		{
			cout<<"You are suffering from: Difficulty in Hypertension. It can be a major problem. \n";
			obj<<"You are suffering from: Difficulty in Hypertension. It can be a major problem. \n";
		}
		else if((s1 == 'B'||s2=='b')&&(s2 == 'L'||s2=='l'))
		{
			cout<<"You are suffering from: Difficulty in Lung Disease. It can be a major problem. \n";
			obj<<"You are suffering from: Difficulty in Lung Disease. It can be a major problem. \n";
		}
		else if((s1 == 'B'||s2=='b')&&(s2 == 'H'||s2=='h'))
		{
			cout<<"You are suffering from: Difficulty in Heart Disease. It can be a major problem. \n";
			obj<<"You are suffering from: Difficulty in Heart Disease. It can be a major problem. \n";
		}
		
	}
	else
	{ 
	    cout<<"Your risk factor is low! \n";
	    obj<<"Your risk factor is low! \n";
	}
	
	if((s3 =='Y'||s3=='y')||(s4 =='1'))
	{
		if(s4 =='2')
		{
			cout<<"You should quarntine youself for 14 days and sholud follow all the precautions!!\n";
			obj<<"You should quarntine youself for 14 days and sholud follow all the precautions!!\n";
		}
		else
		{
			cout<<"You have high risk factor....should go for covid test as soon as possible..\n";
			obj<<"You have high risk factor....should go for covid test as soon as possible..\n";
		}
	}
	else
	{
		cout<<"You are safe..but still you should follow covid precautions...Be safe!\n"; 
		obj<<"You are safe..but still you should follow covid precautions...Be safe!\n";
	}
	
	if((s5=='A'||s5=='a')||(s5=='D'||s5=='d')||(s5=='H'||s5=='h')||(s5=='S'||s5=='s'))
	{
		if(s5=='A'||s5=='a')
		{
			cout<<"You have normal symptom of aches and pains.\n";
			obj<<"You have normal symptom of aches and pains.\n";
		}
		else if(s5=='D'||s5=='d')
		{
			cout<<"You have normal symptom of diarrhoea.\n";
			obj<<"You have normal symptom of aches and pains.\n";
		}
		else if(s5=='H'||s5=='h')
		{
			cout<<"You have normal symptom of Headache.\n";
			obj<<"You have normal symptom of Headache.\n";
		}
		else if(s5=='S'||s5=='s')
		{
			cout<<"You have normal symptom of loss of taste and smell.\n";
			obj<<"You have normal symptom of loss of taste and smell.\n";
		}
	}
	else
	{
		cout<<"No other disorders...You are healthy!!";
		obj<<"No other disorders...You are healthy!!";
	}

	   
	obj.close();
	
}


//---------------------------------------------------------------------------------------------------------------------------------

//daignosis function

void diagnosis(void)
{
system("cls");
cout<<" \t\t** C O V I D - 1 9   D I A G N O S I S   W I N D O W **   ";
cout<<"\n\n\n";
cout<<"\t\t Let's have a look at the symptoms.........";
cout<<"\n\n\n";
cout<<"\t\t Please enter the form in the next page .";
cout<<"\n\n\n\n\n\n\t\t\t ";
cout<<"\t***** PRESS ANY KEY ***** "<<endl<<endl;
getch();
}

//---------------------------------------------------------------------------------------------------------------------------------

// Routine checkup function

void test :: checkup(void)
{
system("cls");
cout<<"\t\t ** D I A G N O S I S   W I N D O W **   ";
cout<<"\n\n\n";
cout<<"\t\t Let's have a look at the symptoms.........";
cout<<"\n\n\n";
cout<<"\t\t Please enter the form in the next page .";
cout<<"\n\n\n\n\n\n\t\t\t ";
cout<<"\t***** PRESS ANY KEY ***** "<<endl<<endl;
getch();
}

//--------------------------------------------------------------------------------------------------------------------------------------

//final report


void quick_test :: Final_Report()
{
	system("cls");
	
	cout<<"\t***********************************************************************\n\n\n";
    cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
    cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
    cout<<"------------------------------------------------------------------------------------------------------------\n";
	cout<<"------------------------------------------------------------------------------------------------------------\n\n";
	
	cout<<"\t***************** FINAL   REPORT **********************\n\n";
	ifstream input("database.txt");

    input>>reguser>>regpass>>age>>sex>>bg;
	cout<<"User ID: "<<reguser<<endl;
    cout<<"Password: "<<regpass<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Sex: "<<sex<<endl;
	cout<<"Blood Group: "<<bg<<endl<<endl<<endl;
    
    T.analyse_symptoms();
	cout<<"\n\nPRECAUTIONS TO BE FOLLOWED: \n\n";
	cout<<"\tAvoid touching your eyes, nose, and mouth with unwashed hands.\n\
	Avoid close contact with people who are sick.\n\
	Stay home when you are sick.\n\
	Cover your cough or sneeze with a tissue, then throw the tissue in the trash and wash your hands.\n\
	If you don’t have a tissue, cough or sneeze into your elbow, rather than into your hands.\n\
	Clean and disinfect frequently touched objects and surfaces.\n\
	Always wear mask and maintain social distancing.\n\n";
	cout<<"Press any key to continue.....";
	getch();
	thank_you();
			
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
        cout<<"\t***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Daigonsis Software for COVID-19                              \n\n";
        cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"------------------------------------------------------------------------------------------------------------\n";
		cout<<"------------------------------------------------------------------------------------------------------------\n\n";
        cout<<"\t*******************        Login Page       *******************************\n\n";
        
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
        string u,p;
        system("cls");
        cout<<"\t***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"------------------------------------------------------------------------------------------------------------\n";
		cout<<"------------------------------------------------------------------------------------------------------------\n\n";
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>reguser;
        cout<<"PASSWORD :";
        cin>>regpass;
        
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==reguser && p==regpass)
        
                {
                        count=1;
                        
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
        		
        	T.login_further();
                
    	}
        else
        {
        		system("cls");
        		cout<<"\t***********************************************************************\n\n\n";
        		cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        		cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        		cout<<"\t------------------------------------------------------------------------------------------------------------\n";
				cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
}

//------------------------------------------------------------------------------------------------------------------------------------------------

//register function

void logs :: registr()
{
        
        
        system("cls");
        string n,m;
        int count;
        cout<<"\t***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"\t------------------------------------------------------------------------------------------------------------\n";
		cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;
        cout<<"\nEnter the age : ";
        cin>>age;
        cout<<"\nEnter the sex : ";
        cin>>sex;
        cout<<"\nEnter the blood group : ";
        cin>>bg;
        
        ifstream input("database.txt");
        while(input>>n>>m)
        {
                if(n==reguser)
        
                {
                        count=1;
                        
                        system("cls");
                }
        }
        input.close();
        if(count!=1)
        {
        	ofstream reg("database.txt",ios::app);
        	reg<<reguser<<" "<<regpass<<" "<<" "<<age<<" "<<sex<<" "<<bg<<endl;
        	reg.close();
        	system("cls");
        	cout<<"\t***********************************************************************\n\n\n";
        	cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        	cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
        	cout<<"\nRegistration Sucessful\n";
        	getch();
        	main();
		}
		else
		{
			system("cls");
			cout<<"\t***********************************************************************\n\n\n";
        	cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        	cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        	cout<<"------------------------------------------------------------------------------------------------------------\n";
			cout<<"------------------------------------------------------------------------------------------------------------\n\n";
			cout<<"\n\t The username has already taken. Try another username.";
			getch();
			T.registr();
		}
        
        
        
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

//forget function

void logs :: forgot()
{
        int ch;
        system("cls");
        cout<<"\t***********************************************************************\n\n\n";
        cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        cout<<"\t------------------------------------------------------------------------------------------------------------\n";
		cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
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
	cout<<"\t***********************************************************************\n\n\n";
    cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
    cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
    cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"\t           			Test successful        \n\n\n";
    cout<<"Press any key to continue....";
    getch();
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

//welcome page

void welcome_page()
{
	system("cls");
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
	cout<<"\n\n\n\t\t\t\t\t\tINTRODUCTION TO COVID-19\n\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"Coronavirus disease 2019 (COVID-19) is an infectious disease caused by severe acute respiratory syndrome coronavirus 2 (SARS-CoV-2). \
	It was first identified in December 2019 in Wuhan, Hubei, China, and has resulted in an ongoing pandemic. Common symptoms include fever, cough,\
	fatigue, shortness of breath or breathing difficulties, and loss of smell and taste. While most people have mild symptoms, some people develop \
	acute respiratory distress syndrome (ARDS) possibly precipitated by cytokine storm, multi-organ failure, septic shock, and blood clots. The \
	incubation period may range from one to fourteen days. There are no proven vaccines or specific treatments for COVID-19 yet, though several are in development. \
	Management involves the treatment of symptoms, supportive care, isolation, and experimental measures. The World Health Organization (WHO) declared the COVID-19\
	outbreak a public health emergency of international concern (PHEIC) on 30 January 2020 and a pandemic on 11 March 2020. Local transmission of the disease has \
	occurred in most countries across all six WHO regions.Longer-term damage to organs (in particular lungs and heart) has been observed, and there is concern about \
	a significant number of patients who have recovered from the acute phase of the disease but continue to experience a range of effects including severe fatigue,\
	memory loss and other cognitive issues, low grade fever, muscle weakness, breathlessness and other symptoms for months afterwards.";
	cout<<"\n\t------------------------------------------------------------------------------------------------------------\n";
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
	cout<<"You chose : "<<a1<<endl;	
		
	cout<<"2. Are you experiencing any of these systoms?\n\
			A) Weakness\n \
			B) Diarrhea and Conspitation \n \
			C) Loss of Apetite \n \
			D) None of the above\n"	;
	cin>>a2;
	cout<<"You chose : "<<a2<<endl;
	
	cout<<"3. Are you experiencing any of these systoms?\n\
	     	A) Often Urination\n \
	     	B) Feeling very thirsty \n \
	     	C) Extreme fatigue and Blurry Vision \n \
	     	D) None of the above \n ";
	cin>>a3;
	cout<<"You chose : "<<a3<<endl;
	
	cout<<"4. Are you experiencing any of these systoms?\n\
	  		A) Shortnes of Breathe \n \
			B) Chest tightness \n \
			C) Wheezing \n \
			D) None of the above\n";
	cin>>a4;
	cout<<"You chose : "<<a4<<endl;
	
	cout<<"5. Are you experiencing any of these systoms?\n\
			A) Increased sensitivity to cold\n \
			B) Dry skin \n \
			C) Weight gain and Puffy face\n\
			D) None of the above \n ";
	cin>>a5;
	cout<<"You chose : "<<a5<<endl;
	
	cout<<"6. Are you experiencing any of these systoms?\n\
		   A) Fever and chills \n \
		   B) Change in skin colour \n \
		   C) Dark-coloured urine \n \
		   D) None of the above \n ";
	cin>>a6;
	cout<<"You chose : "<<a6<<endl;
	
	cout<<"7. Are you experiencing any of these systoms?\n\
			A) Trouble Sleeping \n \
			B) Indigestion \n \
			C) Anxiety \n \
			D) None of the above \n";
	cin>>a7;
	cout<<"You chose : "<<a7<<endl;
	
	cout<<"8. Are you experiencing any of these systoms?\n\
			A) Coughing up blood \n \
			B) Sever Wheezing \n \
			C) Difficulty Breathing \n \
			D) None of the above \n";
	cin>>a8;
	cout<<"You chose : "<<a8<<endl;
								
}
void test :: display_testresult()
{
	ofstream in;
	in.open("testdata.txt",ios::app);
	if ((a1=='D' || a1=='d') && (a2=='D'||a2=='d') && (a3=='D'||a3=='d') && (a4=='D'||a4=='d') && (a5=='D'||a5=='d') && (a6=='D'||a6=='d') && (a7=='D'||a7=='d') && (a8=='D'||a8=='d')) 
	{
		cout<<"You are absolutely Healthy!!....\n\n";
		in<<"You are absolutely Healthy!!....\n\n";
	}
	else
	{
	
		if((a1=='A'||a1=='a')||(a1=='B'||a1=='B')||(a1=='C'||a1=='c'))
		{
			cout<<"You have symptoms of 'Malaria'. Must go for  Malaria test\n";
			in<<"May be Malaria Positive.\n";
		}
		else
		{
			cout<<"Malaria Negative!\n";
			in<<"Malaria Negative!\n";
		}
	
		if((a2=='A'||a2=='a')||(a2=='B'||a2=='b')||(a2=='C'||a2=='c'))
		{
			cout<<"You have symptoms of 'Typhoid'. Must go for  Typhoid test\n";
			in<<"May be Typhoid Positive\n";
		}
		else	
		{
			cout<<"Typhoid Negative!\n";
			in<<"Typhoid Negative!\n";
		}
	
		if((a3=='A'||a3=='a')||(a3=='B'||a3=='b')||(a3=='C'||a3=='c'))
		{
			cout<<"You have symptoms of 'Diabetes'. Must go for  Diabetes test\n";
			in<<"You have symptoms of Diabetes\n";
		}
		else
		{
			cout<<"Diabetes Negative!\n";
			in<<"Diabetes Negative!\n";
		}
	
		if((a4=='A'||a4=='a')||(a4=='B'||a4=='b')||(a4=='C'||a4=='c'))
		{
			cout<<"You have symptoms of 'Asthma'. Must go for  Asthma test\n";
			in<<"You have symptoms of 'Asthma'\n";
		}
		else
		{
			cout<<"Asthma Negative!\n";
			in<<"Asthma Negative!\n";
		}
	 
		if((a5=='A'||a5=='a')||(a5=='B'||a5=='b')||(a5=='C'||a5=='c'))
		{
			cout<<"You have symptoms of 'Thyroid'. Must go for  Thyroid test\n";
			in<<"You have symptoms of 'Thyroid'.\n";
		}
		else
		{
			cout<<"Thyroid Negative!\n";
			in<<"Thyroid Negative!\n";
		}
	
		if((a6=='A'||a6=='a')||(a6=='B'||a6=='b')||(a6=='C'||a6=='c'))
		{
			cout<<"You have symptoms of 'Jaundice'. Must go for  Jaundice test\n";
			in<<"You have symptoms of 'Jaundice'.\n";
		}
		else
		{
			cout<<"Jaundice Negative!\n";
			in<<"Jaundice Negative!\n";
		}
	 
		if((a7=='A'||a7=='a')||(a7=='B'||a7=='b')||(a7=='C'||a7=='c'))
		{
			cout<<"You have symptoms of 'Heart disease'. Must go for check up.\n";
			in<<"You have symptoms of 'Heart disease'.\n";
		}
		else
		{
			cout<<"No Heart Problems!\n";
			in<<"No Heart Problems!\n";
		}
	
		if((a8=='A'||a8=='a')||(a8=='B'||a8=='b')||(a8=='C'||a8=='c'))
		{
			cout<<"You have symptoms of 'Lung Disease'. Must go for check up\n";
			in<<"You have symptoms of 'Lung Disease'.\n";
		}
		else
		{
			cout<<"No Lungs Problem!\n";
			in<<"No Lungs Problem!\n";
	}
	in.close();
	cout<<"\n\nPress any key to continue.....";
	getch();
	thank_you();
}

}
//---------------------------------------------------------------------------------------------------------------------------------------
//thank you page

void thank_you()
{
	system("cls");
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
	getch();
}

//---------------------------------------------------------------------------------------------------------------------------------------

//personal details function

void logs::personal_details()
{
	system("cls");
	
	string u,p,s,b;
	int a;
	cout<<"\t***********************************************************************\n\n\n";
    cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
    cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
    cout<<"\t------------------------------------------------------------------------------------------------------------\n";
	cout<<"\t------------------------------------------------------------------------------------------------------------\n\n";
    ifstream input("database.txt");
    
        {
            input>>reguser>>regpass>>age>>sex>>bg;
			cout<<"User ID: "<<reguser<<endl;
            cout<<"Password: "<<regpass<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Sex: "<<sex<<endl;
            cout<<"Blood Group: "<<bg<<endl;
            getch();
                       		
        }
	
}


void logs :: login_further()
{
	cout<<"\t***********************************************************************\n\n\n";
        		cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        		cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        		cout<<"------------------------------------------------------------------------------------------------------------\n";
				cout<<"------------------------------------------------------------------------------------------------------------\n\n";
                cout<<"\n\tHello "<<reguser<<"\n\tLOGIN SUCCESS\n\tWe're glad that you're here.\n\tThanks for logging in\n\n\n";
                cout<<"Press any key to continue....";
                getch();
                
                system("cls");
                cout<<"\t***********************************************************************\n\n\n";
        		cout<<"                      Welcome to Self Diagonsis Software for COVID-19                              \n\n";
        		cout<<"\t---------------------WE CARE WE UNDERSTAND----------------------------------\n\n\n\n";
        		cout<<"------------------------------------------------------------------------------------------------------------\n";
				cout<<"------------------------------------------------------------------------------------------------------------\n\n";
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
                       
                       	main();
                        break;
                    }
                	case 2:
                		{
						
                		diagnosis();
                        T.test();
                        test_success();//quick_test
                        system("cls");
                        T.Final_Report();
                        main();
                        break;
                    }
                	case 3:
                	{
						
        				T.personal_details();
        				main();
                        break;
                    }
                    case 4:
                    	{
						
					        R.checkup();
					        R.routine_test();
					        R.display_testresult();
					        main();
					        break;
					   }
                        
                	case 5:
                        cout<<"Thanks for using this program.......\n\n";
                        thank_you();
                        main();
                	default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl;
                        main();
				}
}
