
 #include <iostream>

using namespace std;


class Student
{
public:
string clg,Sname ,Ssurname,SFname,Spassw,Suname,TSub;
double  SID ,Sclass,MARKS;
double M1[5],M2[5];
double croll,NM1[5],NM2[5];  //M1[0] M2[0]

    int i;
    Student()
    {
   SID=0;
   Sname="UnKnown";
   Ssurname="UnKnown";
   SFname="UnKnown";
   Suname="Not set";
   Spassw="Not set";
   clg="Astrisc Higher University ,Nagpur";
   Sclass=0;

    }

int StuResult(Student S[200],int scount)
    { int i=0;
        double RSID,Marks;
        cout<<"Enter Student ID"<<endl;
        cin>>RSID;

     cout<<"College="<<clg<<endl;
     cout<<"----------------------Result---------------------"<<endl;
     cout<<" |  Subject | INTERNAL  | ON PAPER  | Total Marks"<<endl;
     cout<<"-----"<<endl;
     for(int i=0;i<scount;i++)
     {

     if((RSID==S[i].SID)&&(!RSID==0))

     {
             cout<<"Roll Number:AST"<<S[i].SID<<endl;
             cout<<"Student Name"<<S[i].Sname<<" "<<S[i].Ssurname<<endl;

            for(int j=0;j<5;j++)
            {
          Marks=S[i].M1[j]+S[i].M2[j];
          cout<<" \t|"<<S[i].TSub<<" \t|"<<S[i].M1[j]<<"\t|"<<S[i].M2[j]<<"\t|"<<Marks<<endl;
          }
          cout<<"----------------------------------------------------------------------------------------------"<<endl;
          cout<<"-----"<<endl;

     if(Marks>=60)

                cout<<"RESULT = PASS"<<endl;
            else
                cout<<"RESULT = FAIL"<<endl;
                }

     } RSID=0;

     return scount;
     }

void SRegister()
{
    cout<<"Student Details "<<endl;
    cout<<"Enter Student Id :";
    cin>>SID;
    cout<<"Enter Name:";
    cin>>Sname;
    cout<<"Enter Surname:";
    cin>>Ssurname;
    cout<<"Enter Father Name:";
    cin>>SFname;
    cout<<"Enter class:";
    cin>>Sclass;
    cout<<"Enter Username:";
    cin>>Suname;
    cout<<"Enter Password:";
    cin>>Spassw;
    cout<<"Student is Successfully Added !"<<endl;

}

void testStudent()
{
   cout<<"Student"<<endl<<"ENTER Details:"<<endl<<"NAME :"<<Sname<<endl<<"Id :"<<SID<<endl<<"USERNAME :"<<Suname<<endl<<"PASSWORD :"<<Spassw<<endl<<endl;
}

void menustu()
{cout<<"Student Portal"<<endl;
cout<<"1.Add"<<endl;
cout<<"2. Update"<<endl;
cout<<"3. Delete"<<endl;
cout<<"4. Show"<<endl;
cout<<"0. BACK MENU"<<endl;
cout<<"CHOICE:"<<endl;

}


    void ADDMARKS(Student S[200],int scount,int sub)
   {
       int i;

                                                   cout<<"Total Student = "<<scount<<endl;
                                                     for(i=0;i<scount;i++)
                                                    S[i].testStudent();
                                                   for(i=0;i<scount;i++)
                                                   {
                                                       cout<<"Roll No."<<S[i].SID<<endl;

                                                       cout<<"Internal 20 out of:";
                                                       cin>>S[i].M1[sub-1];
                                                       cout<<"On Paper 80 out of:";
                                                       cin>>S[i].M2[sub-1];

                                                   }
                                                   cout<<"Next....."<<endl;
}

void UPDATEMARKS(Student S[200],int scount,int sub)
{ int l35=1,l36=1,ch35,ch36;

                                         while(l36)
                                        {
                                        cout<<"1.Internal Marks"<<endl;
                                        cout<<"2. On Paper Marks"<<endl;
                                        cout<<"0.Back to Menu"<<endl;
                                        cout<<"Enter Choice"<<endl;
                                        cin>>ch36;
                                        switch(ch36)
                                        {
                                        case 1:
                                        cout<<"Enter Roll No:"<<endl;
                                        cin>>croll;
                                        if(croll==SID)
                                        {
                                        cout<<"Old  Marks="<<M1<<endl;
                                        cout<<"New Marks="<<endl;
                                        cin>>S[i].NM1[sub-1];
                                        S[i].M1[sub-1]=S[i].NM1[sub-1];
                                        cout<<"Ok done......."<<endl;
                                        }
                                       break;
                                       case 2:
                                       cout<<"2. On Paper Marks"<<endl;
                                       cout<<"Enter Roll No:"<<endl;
                                       cin>>croll;
                                       if(croll==SID)
                                       {
                                       cout<<"Old  Marks="<<M2<<endl;
                                       cout<<"New Marks="<<endl;
                                        cin>>S[i].NM1[sub-1];
                                        S[i].M1[sub-1]=S[i].NM1[sub-1];
                                       cout<<"Ok done......."<<endl;
                                        }

                                       break;
                                       case 0:
                                       l36=0;
                                       break;
                                       default:
                                       cout<<"Wrong  Choice :"<<endl;
                                       break;
                                       }
                                       }
                                        l36=1;
            }
};
class Teacher: public Student
{

    public:
          int i,subno;
       string Tname,Tcourse,Tuname,Tpassw,TSub;
    double TID,TSalary,Tstu;
    string NTname,NTcourse;
        double NTID,NTSalary,CEID ,Esal;


       string Sname,Suname,Ssurname,SFname,Spassw, NSname,NSsurname,SFName,NSFName,NSpassw;
       double SID,NSID,Sclass, NSclass;
Teacher()
{
   Tname="Not added";
   Tuname="not set";
   Tcourse="Not set";
   Tpassw="Not set";
   TID=0;
   TSalary=0;
   Tstu=0;
   TSub="Not Set";
}

void TeacherResult(Student S[200],int scount)
    {   int i;
        double RSID,Marks;
     cout<<"**Subject :"<<TSub<<"**"<<endl;


         cout<<"Total Student:"<<scount<<"   "<<"Pass"<<"Fail"<<endl;
         cout<<"-----------------------------------------------------------"<<endl;
         cout<<"-----"<<endl;
    cout<<"-------------------------------------------Result---------------------------------------------"<<endl;
     cout<<"ID    |  Subject | Name| INTERNAL  | ON PAPER  | Total Marks"<<endl;
    cout<<"-----"<<endl;
         for(i=0;i<scount;i++)
         {cout<<TID<<"|"<<TSub<<"|"<<S[i].Sname<<"|\t"<<S[i].M1[subno-1]<<"\t|  "<<S[i].M2[subno-1]<<"\t|"<<S[i].M1[subno-1]+S[i].M2[subno-1]<<endl;
         }
         cout<<"--------------------------------------------------------------"<<endl;
         cout<<"-----"<<endl;
}

void SRegister()
{
    cout<<"Student Details "<<endl;
    cout<<"Enter Student Id :";
    cin>>SID;
    cout<<"Enter Name:";
    cin>>Sname;
    cout<<"Enter Surname:";
    cin>>Ssurname;
    cout<<"Enter Father Name:";
    cin>>SFname;
    cout<<"Enter class:";
    cin>>Sclass;
    cout<<"Enter Username:";
    cin>>Suname;
    cout<<"Enter Password:";
    cin>>Spassw;
    cout<<"Student is Successfully Added !"<<endl;

}
void TRegister()
{

   cout<<"ENTER Teacher Details:"<<endl;
   cout<<"NAME :"<<endl;
   cin>>Tname;
   cout<<"USERNAME :"<<endl;
   cin>>Tuname;
   cout<<"PASSWORD :"<<endl;
   cin>>Tpassw;
   cout<<"Enter Teacher Id :"<<endl;
    cin>>TID;

    cout<<" Teacher Subject: "<<TSub<<endl;
    cout<<" Teacher Salary: "<<TSalary<<endl;

   cout<<" TEACHER ACCOUNT CREATED SUCCESSFULLY!"<<endl;

}

void testTeacher()
{
   cout<<"Teacher"<<endl;
   cout<<"ENTER Details:"<<endl;
   cout<<"NAME :"<<Tname<<endl;
   cout<<"USERNAME :"<<Tuname<<endl;
   cout<<"PASSWORD :"<<Tpassw<<endl<<endl;

}

void Teachersub(Teacher T[200],int tcount)
{ int lc34=1,ch34;



                                               cout<<" 1.MA-102"<<endl;
                                               cout<< "2.EN-102 "<<endl;
                                               cout<<" 3.CS-111"<<endl;
                                               cout<<" 4.HS-107 "<<endl;
                                               cout<<" 5.MT-101"<<endl;
                                               cout<<"  Enter choice :"<<endl;
                                               cin>>ch34;
                                               switch(ch34)
                                               {
                                               case 1:
                                                   cout<<"Teacher course Selected =.MA-102"<<endl;
                                                   TSub="MA-102";
                                                   subno=1;

                                                break;
                                               case 2:
                                                   cout<< "Teacher course Selected =.EN-102 "<<endl;
                                                   TSub="EN-102";
                                                    subno=2;
                                                break;
                                               case 3:
                                                   cout<<" Teacher course Selected =.CS-111"<<endl;
                                                   TSub="CS-111";
                                                   subno=3;
                                                break;
                                               case 4:
                                                   cout<<" Teacher course Selected =HS-107 "<<endl;
                                                   TSub="HS-107";
                                                   subno=4;
                                                break;
                                               case 5:
                                                   cout<<" Teacher course Selected = MT-101"<<endl;
                                                   TSub="MT-101";
                                                   subno=5;
                                                break;
                                                default:
                                                    cout<<"  Wrong choice :"<<endl;
                                                break;
                                               }

}

};
class principal: public Student,public Teacher
{

 public:
     int i;
     string Pname,Puname,Ppassw,clg,Sname,Ssurname,SFname,Suname,Spassw;

    double SID,Sclass;

principal()
{
   Pname="Not added";
   Puname="Not set";
   Ppassw="Not set";


   Tuname="Not Set";
   Tpassw="Not set";
   Tname="UnKnown";
   Tcourse="Not set";
   TSalary=0;
   Tstu=0;

clg=" Asterisc higher university, Nagpur ";

}


void PRegister()
{
   cout<<"ENTER Details:"<<endl;
   cout<<"NAME :"<<endl;
   cin>>Pname;
   cout<<"USERNAME :"<<endl;
   cin>>Puname;
   cout<<"PASSWORD :"<<endl;
   cin>>Ppassw;
   cout<<"ACCOUNT CREATED SUCCESSFULLY!"<<endl;
}

void testPrincipal()
{
   cout<<"Principal "<<endl;
   cout<<"ENTER Details:"<<endl;
   cout<<"NAME :"<<Pname<<endl;
   cout<<"USERNAME :"<<Puname<<endl;
   cout<<"PASSWORD :"<<Ppassw<<endl<<endl;
}
int PStudentSection(principal p[200],Student S[200],int scount)

{   int o,l10=1,ch10,ch71,l71=1,ch72,l72=1;
                                    while(l10)
                                              {cout<<"Student Portal"<<endl;

                                               cout<<"1. Add"<<endl;
                                               cout<<"2. Update"<<endl;
                                               cout<<"3. Delete"<<endl;
                                               cout<<"4. Show"<<endl;
                                               cout<<"0. BACK MENU"<<endl;
                                               cout<<"CHOICE:"<<endl;
                                               cin>>ch10;
                                              switch(ch10)
                                              {
                                              case 1:
                                              S[scount].SRegister();
                                                    scount++;
                                              break;
                                              case 2:
                                              cout<<"2. UPDATE"<<endl;
                                              while(l71)
                                              {cout<<"1.Student Id :"<<endl;
                                               cout<<"2.Enter Name:"<<endl;
                                              cout<<"3.Enter Surname:"<<endl;
                                              cout<<"4.Enter Father Name:"<<endl;
                                              cout<<"5.Enter class:"<<endl;
                                              cout<<"6.Enter Password:"<<endl;
                                              cout<<"0.Back Menu"<<endl;
                                              cout<<"Enter choice:"<<endl;
                                              cin>>ch71;
                                              switch(ch71)
                                              {
                                              case 1:
                                                  cout<<"1.Student Id :"<<endl;
                                                  cout<<"current Student Id "<<SID<<endl;
                                                    cout<<"do you want to update Student ID"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  cout<<"Enter your New Student ID"<<endl;
                                                    cin>>SID;
                                                    SID=NSID;
                                                    cout<<" Student ID successfully Updated !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  Updated"<<endl;
                                                break;
                                              case 2:cout<<"2.Enter Name:"<<endl;
                                              cout<<"current Student name "<<Sname<<endl;
                                                    cout<<"do you want to update Student name"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  cout<<"Enter your New Student name"<<endl;
                                                    cin>>NSname;
                                                    Sname=NSname;
                                                    cout<<" Student name successfully Updated !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  Updated"<<endl;
                                                break;
                                                case 3:
                                                cout<<"current Surname "<<Ssurname<<endl;
                                                    cout<<"do you want to update Surname"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  cout<<"Enter your New Surname"<<endl;
                                                    cin>>Ssurname;
                                                    Ssurname=NSsurname;
                                                    cout<<" Surname successfully Updated !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  Updated"<<endl;
                                                break;
                                                case 4:
                                                cout<<"current Father Name "<<SFName<<endl;
                                                    cout<<"do you want to update Father Name"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  cout<<"Enter your New Father Name"<<endl;
                                                    cin>>SFName;
                                                    SFName=NSFName;
                                                    cout<<" Father Name successfully Updated !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  Updated"<<endl;
                                                break;
                                                case 5:
                                                cout<<"current class"<<NSclass<<endl;
                                                    cout<<"do you want to update class"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  cout<<"Enter your New class"<<endl;
                                                    cin>>Sclass;
                                                     Sclass=NSclass;
                                                    cout<<"class successfully Updated !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  Updated"<<endl;
                                                break;
                                                case 6:

                                                cout<<"current Password "<<Spassw<<endl;
                                                    cout<<"do you want to update Password "<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  cout<<"Enter your New Password"<<endl;
                                                    cin>>Spassw;
                                                     Spassw=NSpassw;
                                                    cout<<" Password successfully Updated !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  Updated"<<endl;
                                                    break;
                                                case 0:
                                                    l71=0;
                                                break;
                                                default:
                                                    cout<<"wrong choice"<<endl;
                                                break;
                                              }
                                              }
                                              l71=1;

                                              break;
                                              case 3:
                                                   cout<<"Delete"<<endl;
                                              while(l72)
                                              {cout<<"1.Student Id :"<<endl;
                                               cout<<"2.Enter Name:"<<endl;
                                              cout<<"3.Enter Surname:"<<endl;
                                              cout<<"4.Enter Father Name:"<<endl;
                                              cout<<"5.Enter class:"<<endl;
                                              cout<<"6.Enter Password:"<<endl;
                                              cout<<"0.Back Menu"<<endl;
                                              cout<<"Enter choice:"<<endl;
                                              cin>>ch72;
                                              switch(ch72)
                                              {

                                              case 1:
                                                cout<<"Student Id"<<endl;
                                                cout<<"current Teacher Name "<<SID<<endl;
                                                    cout<<"do you want to delete Teacher name"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  SID==0;


                                                    cout<<" Teacher Name delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                                break;
                                                case 2:
                                                    cout<<"Student Name"<<endl;
                                                cout<<"Student Name"<<endl;
                                                cout<<"current Student Name "<<Sname<<endl;
                                                    cout<<"do you want to delete Student name"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  Sname=="  ";


                                                    cout<<" Student Name delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                                break;
                                                case 3:

                                                     cout<<"Surname Name"<<endl;
                                                cout<<"Surname Name"<<endl;
                                                cout<<"current Surname Name "<<Ssurname<<endl;
                                                    cout<<"do you want to delete Surname name"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  Ssurname=="  ";


                                                    cout<<" Surname Name delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                                break;
                                                case 4:

                                                    cout<<"Father Name"<<endl;
                                                cout<<"Father Name"<<endl;
                                                cout<<"current Father Name "<<SFName<<endl;
                                                    cout<<"do you want to delete Father Name"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  SFName=="  ";


                                                    cout<<" Father Name delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                                break;
                                                case 5:
                                                    cout<<"class"<<endl;
                                                cout<<"current class "<<Sclass<<endl;
                                                    cout<<"do you want to delete class"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  Sclass==0;


                                                    cout<<" class delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                                break;
                                                case 6:
                                                cout<<"current Password: "<<Spassw<<endl;
                                                    cout<<"do you want to delete Password:"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  Spassw=="  ";


                                                    cout<<" Password delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                                break;
                                                case 0:
                                                    l72==0;
                                                break;
                                                default:
                                                    cout<<"Wrong choice:"<<endl;
                                                break;
                                              }
                                              }
                                              l72=1;
                                               break;
                                               case 4:
                                               cout<<"4. SHOW All Student "<<endl;
                                               for(i=0;i<scount;i++)
                                               S[i].testStudent();


                                               break;
                                               case 0:

                                               l10=0;
                                               break;
                                               default :
                                               cout<<" WRONG CHOICE:"<<endl;

                                               break;
        }
        }
        l10=1;
        return scount;
}


void menuTech()
{

    cout<<" ADMINE Portal>"<<endl;
    cout<<" Teacher Section"<<endl;
    cout<<"1. ADD"<<endl;
    cout<<"2. UPDATE"<<endl;
    cout<<"3. DELETE"<<endl;
    cout<<"4. SHOW"<<endl;
    cout<<"5. SALARY"<<endl;
    cout<<"6 SHOW All teacher"<<endl;
    cout<<"0. BACK MENU"<<endl;
    cout<<"Enter choice:"<<endl;
}

int PTTeachersection(principal p[200],Teacher T[200],int tcount)
{
    int o,ch44,ch66,l44=1,l66=1,l73=1,ch73;

                                    while(l44)
                                    {
                                    cout<<" ADMINE Portal>"<<endl;
                                    cout<<" Teacher Section"<<endl;
                                    cout<<"1. ADD"<<endl;
                                    cout<<"2. UPDATE"<<endl;
                                    cout<<"3. DELETE"<<endl;
                                    cout<<"4. SHOW"<<endl;
                                    cout<<"5. SALARY"<<endl;
                                    cout<<"6 SHOW All teacher"<<endl;
                                    cout<<"0. BACK MENU"<<endl;
                                    cout<<"Enter choice:"<<endl;
                                    cin>>ch44;
                                    switch(ch44)
                                    {
                                        case 1:
                                            cout<<"<<ADD"<<endl;
                                            T[tcount].TRegister();
                                                    tcount++;

                                        break;
                                        case 2:
                                            cout<<" UPDATE"<<endl;
                                            while(l66)
                                            {cout<<"1.Employee ID"<<endl;
                                            cout<<"2.Teacher Name"<<endl;
                                            cout<<"3.Course"<<endl;
                                            cout<<"4.Salary"<<endl;
                                            cout<<"0.BACK MENU"<<endl;

                                            cout<<"Enter choice:"<<endl;
                                            cin>>ch66;
                                            switch(ch66)
                                            {
                                                case 1:
                                                    cout<<"current Employee Id "<<TID<<endl;
                                                    cout<<"do you want to update Employee ID"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  cout<<"Enter your New Employee ID"<<endl;
                                                  cin>>NTID;
                                                        TID=NTID;
                                                        cout<<" Emnployee Id successfully Updated !"<<endl;}
                                                    else
                                                        cout<<"ok ...Not  Updated"<<endl;

                                                break;
                                                case 2:
                                                    cout<<"Current Teacher Name :"<<Tname<<endl;
                                                    cout<<"do you want to update Teacher Name "<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {
                                                        cout<<"Enter your New Teacher Name"<<endl;
                                                        cin>>NTname;
                                                        Tname=NTname;
                                                        cout<<"Teacher Name successfully Updated !"<<endl;
                                                    }
                                                    else
                                                        cout<<"ok... Not Updated"<<endl;
                                                break;
                                                case 3:
                                                    cout<<"Current course Name:"<<Tcourse<<endl;
                                                    cout<<"do you want to update Course "<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {
                                                        cout<<"Enter your New course Name"<<endl;
                                                        cin>>NTcourse;
                                                        Tcourse=NTcourse;
                                                        cout<<"course successfully Updated !"<<endl;
                                                    }
                                                    else
                                                        cout<<"ok... Not Updated"<<endl;
                                                break;
                                                case 4:
                                                    cout<<"Current Salary:"<<TSalary<<endl;
                                                    cout<<"do you want to update Salary"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {
                                                        cout<<"Enter your New Salary"<<endl;
                                                        cin>>TSalary;
                                                        TSalary=NTSalary;
                                                        cout<<"course successfully Updated !"<<endl;
                                                    }
                                                    else
                                                        cout<<"ok... Not Updated"<<endl;
                                                break;
                                                case 0:
                                                    cout<<"0.BACK MENU"<<endl;
                                                    l66=0;
                                                    break;
                                                default :
                                                    cout<<"Wrong choice:"<<endl;
                                                break;

                                            }
                                            }
                                            l66=1;

                                        break;
                                        case 3:
                                            cout<<"3. DELETE"<<endl;
                                            while(l73)
                                            {cout<<"1.Employee ID"<<endl;
                                            cout<<"2.Teacher Name"<<endl;
                                            cout<<"3.Course"<<endl;
                                            cout<<"4.Salary"<<endl;
                                            cout<<"0.BACK MENU"<<endl;
                                            cout<<"Enter choice:"<<endl;
                                            switch(ch73)
                                            {case 1:
                                                cout<<"1.Employee ID"<<endl;
                                                cout<<"current Employee Id "<<TID<<endl;
                                                    cout<<"do you want to delete Employee ID"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  TID==0;
                                                    cout<<" Emnployee Id delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                            break;
                                            case 2:
                                                cout<<"2.Teacher Name"<<endl;
                                                cout<<"Teacher Name"<<endl;
                                                cout<<"current Teacher Name "<<Tname<<endl;
                                                    cout<<"do you want to delete Teacher name"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  Tname=="  ";
                                                    cout<<" Teacher Name delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                            break;
                                            case 3:
                                                cout<<"current course"<<Tcourse<<endl;
                                                    cout<<"do you want to delete course "<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  Tcourse=="  ";
                                                    cout<<"Course delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                            break;
                                            case 4:
                                                cout<<"current Salary "<<Tname<<endl;
                                                    cout<<"do you want to delete salary"<<endl<<"yes(1),No(0)::?=";
                                                    cin>>o;
                                                    if(o==1)
                                                    {  TSalary==0;
                                                    cout<<" Salary delete successfully  !"<<endl;}
                                                    else
                                                    cout<<"ok ...Not  delete"<<endl;
                                            break;
                                            case 0:
                                                cout<<"0.BACK MENU"<<endl;
                                                l73=0;
                                            break;
                                            default:
                                                cout<<"Wrong choice:"<<endl;
                                                break;
                                            }
                                            }
                                            l73=1;
                                        break;
                                        case 4:
                                            cout<<"4. SHOW"<<endl;
                                            //T[i].TeacherResult( T,S,tcount ,scount);
                                        break;
                                        case 5:
                                            cout<<"5. SALARY"<<endl;
                                        break;
                                        case 6:
                                            cout<<"6 SHOW All teacher"<<endl;
                                             for(i=0;i<tcount;i++)
                                            T[i].testTeacher();
                                        break;
                                        case 0:

                                            l44=0;
                                        break;
                                        default:
                                            cout<<"Wrong choice:"<<endl;
                                        break;
                                    }
                                    }
                                    l44=1;

            return tcount;
         }
};


int main()
{ int i,l1=1,ch1,l2=1,ch2,l3=1,l33=1,ch33,ch3,ch,ch50,chh50,l35=1, l5=1,ch5,ch35;

int l22=1,ch22,chl2,ll2=1;
int pcount=0,tcount=0;
int fcount=0,scount=0;
string cuname,cpassw,cname;
string Tuname,Tpassw;
string Suname,Spassw;

principal p[200];
Teacher T[200];
Student S[200];

    cout << "" << endl;
     cout << "WELCOME BACK TO SCHOOL" << endl;

     while(l1)
    {cout << "MENU:" << endl;
    cout << "1. ADMIN PORTAL" << endl;
    cout << "2. TEACHER PORTAL" << endl;
    cout << "3. STUDENT PORTAL" << endl;
    cout << "4. RESULT PORTAL" << endl;
    cout << "0. Logout " << endl;
    cout << "CHOICE:" << endl;
    cin>>ch1;
            switch(ch1)
            {
            case 1:
             while(l2)
                {cout << "<ADMIN PORTAL>" << endl;
                 cout << "1. LOGIN" << endl;
                 cout << "2. REGISTRATION" << endl;
                 cout << "0. BACK MENU" << endl;
                 cout << "CHOICE:" << endl;
                 cin>>ch2;
                         switch(ch2)
                         {
                          case  1:
                               cout << "<ADMIN PORTAL>" << endl;
                               cout << " LOGIN" << endl;
                               cout<<"USERNAME :"<<endl;
                               cin>>cuname;
                               cout<<"PASSWORD :"<<endl;
                               cin>>cpassw;

                                for(i=0;i<pcount;i++)
                                {
                                  if((cuname==p[i].Puname)&&(cpassw==p[i].Ppassw))
                                   {
                                     while(l3)
                                     {
                                       cout<<">>WELCOME "<<cuname<<"!"<<endl;
                                        cout<<"<ADMIN Portal>"<<endl;
                                      cout<<"1. Teacher Account"<<endl;
                                      cout<<"2. Student Account"<<endl;
                                      cout<<"3. Result"<<endl;
                                      cout<<"0. LOGOUT"<<endl;
                                      cout<<"Enter choice :"<<endl;
                                      cin>>ch3;
                                              switch(ch3)
                                              {
                                               case 1:
                                               cout<<"1. Teacher Account"<<endl;
                                               tcount=p[i].PTTeachersection(p,T,tcount);
                                               break;
                                               case 2:
                                               cout<<"1. student Account"<<endl;
                                               scount=p[i].PStudentSection(p,S,scount);
                                               break;
                                               case 3:
                                               cout<<" Result "<<endl;
                                               scount=S[i].StuResult(S,scount);
                                               break;
                                               case 0:

                                               l3=0;
                                               break;
                                               default:
                                               cout<<"Wrong choice:"<<endl;
                                               break;
                                              }
                                              }
                                              l3=1;
                                              }
                                        else
                                        {
                                            fcount++;
                                        }
                                }

                                if(fcount==pcount)
                                {
                                     cout<<"Login Again-"<<",Login Info Does not match "<<endl;
                                }
                                fcount=0;
                        break;
                        case 2:
                            //ToDo
                             cout <<"REGISTRATION" << endl;
                             p[pcount].PRegister();
                             pcount++;
                             break;
                        case  0:
                             l2=0;
                        break;
                        default :
                            cout << " WRONG CHOICE:" << endl;
                            for(i=0;i<pcount;i++)
                            p[i].testPrincipal();
                        break;

                            }
                            }
        l2=1;
        break;
        case 2:
         while(l22)
        {cout << "<Teacher PORTAL>" << endl;
        cout << "1. LOGIN" << endl;
        cout << "2. REGISTRATION" << endl;
        cout << "0. BACK MENU" << endl;
        cout << "CHOICE:" << endl;
        cin>>ch22;
        switch(ch22)
        {
        case 1:
           /* cout<<"Total Teacher = "<<tcount<<endl;
            for(i=0;i<tcount;i++)
                T[i].testTeacher();*/

        cout << "<Teacher PORTAL>" << endl;
        cout << " LOGIN" << endl;
        cout<<"USERNAME :"<<endl;
        cin>>cuname;
        cout<<"PASSWORD :"<<endl;
        cin>>cpassw;
        for(i=0;i<tcount;i++)
        {
       if((cuname==T[i].Tuname)&&(cpassw==T[i].Tpassw))
        {cout<<">>WELCOME "<<cuname<<"!"<<endl;
                                      while(l33)
                                      {cout<<"<Teacher Portal>"<<endl;
                                       cout<<"1. Select Subject"<<endl;
                                       cout<<"2. Add Mark"<<endl;
                                       cout<<"3. Result "<<endl;
                                       cout<<"0. Logout"<<endl;
                                       cout<<"Enter choice :"<<endl;
                                      cin>>ch33;
                                            switch(ch33)
                                              {
                                               case 1:
                                                   cout<<" Select Subject"<<endl;
                                                   T[i].Teachersub(T,tcount);
                                               break;
                                               case 2:
                                                   cout<<" Add Marks Section"<<endl;
                                                   while(l35)
                                                   {
                                                    cout<<"1. Add Marks"<<endl;
                                                   cout<<"2. Update Marks"<<endl;
                                                   cout<<"Back Menu:"<<endl;
                                                   cout<<"Enter Choice :"<<endl;
                                                   cin>>ch35;
                                                   switch(ch35)
                                                   {
                                                   case 1:
                                                       cout<<":: Add Marks::"<<endl;
                                                       S[i].ADDMARKS(S,scount,T[i].subno);
                                                    break;
                                                   case 2:
                                                        cout<<":: Update Marks::"<<endl;
                                                        S[i].UPDATEMARKS(S, scount,T[i].subno);
                                                    break;
                                                   case 0:
                                                       l35=0;
                                                    break;
                                                   default:
                                                       cout<<"Wrong  Choice :"<<endl;
                                                    break;
                                                   }
                                                   }
                                                   l35=1;
                                               break;
                                               case 3:
                                                cout<<" Result "<<endl;
                                               T[i].TeacherResult(S,scount);

                                               break;
                                               case 0:
                                               l33=0;
                                               break;
                                               default:
                                               cout<<"Wrong choice:"<<endl;
                                               break;
                                              }
                                         }
                                         l33=1;
                                         }
                                        else
                                        {
                                            fcount++;
                                        }
                                }
                                if(fcount==tcount)
                                {
                                     cout<<"Login Again-"<<",Login Info Does not match "<<endl;
                                }
                                fcount=0;

            break;
            case 2:
                cout << " REGISTRATION" << endl;
            T[tcount].TRegister();
            tcount++;
            break;
            case 0:
                l22=0;
            break;
            default :
                cout << " Wrong CHOICE:" << endl;
                for(i=0;i<tcount;i++)
                T[i].testTeacher();
            break;
            }
    }
    l22=1;
    break;
    case 3:

        while(ll2)
        {cout << "<STUDENT PORTAL>" << endl;
        cout<<"1.Login"<<endl;
        cout << "0. BACK MENU" << endl;
        cout << "CHOICE:" << endl;
        cin>>chl2;
                   switch(chl2)
                   { case 1:
                       cout<<"Total Student = "<<scount<<endl;
                        for(i=0;i<scount;i++)
                        S[i].testStudent();
                   cout << "<Student PORTAL>" << endl;
                   cout << " LOGIN" << endl;
                   cout<<"Name of User :"<<endl;
                   cin>>cuname;
                   cout<<"PASSWORD :"<<endl;
                   cin>>cpassw;
                   for(i=0;i<scount;i++)
                   {
                  if((cuname==S[i].Sname)&&(cpassw==S[i].Spassw)||(cuname==p[i].Sname)&&(cpassw==p[i].Spassw)||(cpassw==T[i].Spassw)&&(cuname==T[i].Sname))
                   {cout<<">>WELCOME "<<cuname<<"!"<<endl;
        while(l5)
        {
         cout<<"Student Portal"<<endl;
         cout<<"1.search"<<endl;
                                               cout<<"0. BACK MENU"<<endl;
                                               cout<<"CHOICE:"<<endl;
                                               cin>>ch5;
                                              switch(ch5)
                                              {
                                              case 1:
                                              cout<<"1.search"<<endl;
                                              S[i].StuResult(S,scount);
                                              break;
                                              case 0:
                                               cout<<"0. BACK MENU"<<endl;
                                               l5=0;
                                               break;
                                               default :
                                               cout<<" WRONG CHOICE:"<<endl;
                                               break;
        }
        }
        l5=1;
                    }
                    else
                    {
                        scount++;
                    }
                   }
                    if(fcount==scount)
                    {cout<<"Login Again-"<<",Login Info Does not match "<<endl;
                    }
                    scount=0;
                     break;
                     case 0:
                     ll2=0;
                     break;
                     default:
                    cout << "Wrong Choice" << endl;
                    break;
                     }
                      }
                     ll2=1;
            break;
    case 4:
        cout << "4. RESULT PORTAL" << endl;
        scount=S[i].StuResult(S,scount);
    break;
    case 0:
        cout << " Thankyou For using system" << endl;
        l1=0;
    break;
    default:
        cout << " WRONG CHOICE:" << endl;
    break;
}
}
 return 0;
}
