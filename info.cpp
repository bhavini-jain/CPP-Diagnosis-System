#include<iostream>
using namespace std;

class Patient    //Base Class
{
        char patient_name[100];
        int age;
        char sex[50];
        char blood_group;

        public:
                void accept_patient_details()
                {
                        cout<<"\n -------------------------------";
                        cout<<"\n Enter Patient Details";
                        cout<<"\n -------------------------------";
                        cout<<"\n Patient Name : ";
                        cin>>patient_name;
                        cout<<"\n Patient Age  :  ";
                        cin>>age;
                        cout<<"\n Sex          :  ";
                        cin>>sex;
                        cout<<"\n Blood Group         :  ";
                        cin>>blood_group;
                }
                void display_patient_details()
                {
                        cout<<"\n -------------------------------";
                        cout<<"\n Displaying Patient Details";
                        cout<<"\n -------------------------------";
                        cout<<"\n Patient Name  :  "<<patient_name;
                        cout<<"\n Patient Age   :  "<<age;
                        cout<<"\n Sex           :  "<<sex;
                        cout<<"/nBlood Group    :    "<<blood_group;
                }
};
class IPD    //Base Class
{
        int ward_no;
        int bed_no;
        int charge_per_day;
    public:
        void accept_ipd_details()
        {
                cout<<"\n -------------------------------";
                cout<<"\n Enter IPD Details ";
                cout<<"\n -------------------------------";
                cout<<"\n Ward No.        :  ";
                cin>>ward_no;
                cout<<"\n Bed No.         :  ";
                cin>>bed_no;
                cout<<"\n Charge Per Day  :  ";
                cin>>charge_per_day;
        }
        void display_ipd_details()
        {
                cout<<"\n -------------------------------";
                cout<<"\n Displaying IPD Details";
                cout<<"\n -------------------------------";
                cout<<"\n Ward No.         :  "<<ward_no;
                cout<<"\n Bed No.          :  "<<bed_no;
                cout<<"\n Charge Per Day   :  "<<charge_per_day;
        }
};
//Class IPDPatient is derived from Class IPD and Class Patient
class IPDPatient : public IPD, public Patient  
{
        int no_of_days_admitted;

    public:
        void accept_ipd_patient_details()
        {
                accept_patient_details();
                accept_ipd_details();
                cout<<"\n\n Enter No. of Days Admitted   :  ";
                cin>>no_of_days_admitted;
        }
        void display_ipd_patient_details()
        {
                display_patient_details();
                display_ipd_details();
                cout<<"\n -------------------------------";
                cout<<"\n\n No. of Days Admitted  :  "<<no_of_days_admitted;
        }
};
int main()
{
        IPDPatient *ipdt;   // Object ipdt is created of class IPDPatient <-- Child Class
        int i,cnt;
        cout<<"\n Enter No. of Patient Details You Want  :  ";
        cin>>cnt;
        ipdt=new IPDPatient[cnt];
        for(i=0;i<cnt;i++)
        {
                ipdt[i].accept_ipd_patient_details();
                ipdt[i].display_ipd_patient_details();
        }
        return 0;
}
