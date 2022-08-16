//routine tests
void routine_test()
{
	char a1[2],a2[2],a3[2],a4[2],a5[2],a6[2],a7[2],a8[2];
	
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
	     	D) None of the above \n \;
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
void display_testresult()
{
	if (a1=='D'&&a2=='D'&&a3=='D'&&a4=='D'&&a5=='D'&&a6=='D'&&a7=='D'&&a8=='D')
	{
		cout<<"You are absolutely Healthy!!....\n\n";
	}
	else
{
	
	if(a1=='A'||a1=='B'||a1=='C')
	{
		cout<<"You have symptoms of 'Malaria'. Must go for  Malaria test\n";
	}
	else
	{
		cout<<"Malaria Negative!\n";
	}
	
	if(a2=='A'||a2=='B'||a2=='C')
	{
		cout<<"You have symptoms of 'Typhoid'. Must go for  Typhoid test\n";
	}
	else
	{
		cout<<"Typhoid Negative!\n";
	}
	
	if(a3=='A'||a3=='B'||a3=='C')
	{
		cout<<"You have symptoms of 'Diabetes'. Must go for  Diabetes test\n";
	}
	else
	{
		cout<<"Diabetes Negative!\n";
	}
	
	if(a4=='A'||a4=='B'||a4=='C')
	{
		cout<<"You have symptoms of 'Asthma'. Must go for  Asthma test\n";
	}
	else
	{
		cout<<"Asthma Negative!\n";
	}
	 
	if(a5=='A'||a5=='B'||a5=='C')
	{
		cout<<"You have symptoms of 'Thyroid'. Must go for  Thyroid test\n";
	}
	else
	{
		cout<<"Thyroid Negative!\n";
	}
	
	if(a6=='A'||a6=='B'||a6=='C')
	{
		cout<<"You have symptoms of 'Jaundice'. Must go for  Jaundice test\n";
	}
	else
	{
		cout<<"Jaundice Negative!\n";
	}
	 
	if(a7=='A'||a7=='B'||a7=='C')
	{
		cout<<"You have symptoms of 'Heart disease'. Must go for check up.\n";
	}
	else
	{
		cout<<"No Heart Problems!\n";
	}
	
	if(a8=='A'||a8=='B'||a8=='C')
	{
		cout<<"You have symptoms of 'Lung Disease'. Must go for check up\n";
	}
	else
	{
		cout<<"No Lungs Problem!\n";
	}
}
