                        /*Project On Student Management*/
#include <bits/stdc++.h>
#include<cctype>
#include<cstring>
using namespace std;
class Student{
protected:
char address[100];
char mobile[11];
public:
char name[50];
    int age;
Student()
{
    strcpy(name, " ");
    strcpy(address, " ");
    age = 0;
    strcpy(mobile, " ");
}
Student(const char*name)
{
    strcpy(this->name, name);
    strcpy(address, " ");
    age = 0;
    strcpy(mobile, " ");
}
Student(const char*name,const char*address)
{
    strcpy(this->name, name);
    strcpy(this->address, address);
    age = 0;
    strcpy(mobile, " ");
}
Student(const char*name,const char*address,int age)
{
    strcpy(this->name, name);
    strcpy(this->address, address);
    this->age = age;
    strcpy(mobile, " ");
}
Student(const char* name,const char*address,int age,const char*mobile)
{
    strcpy(this->name, name);
    strcpy(this->address, address);
    this->age = age;
    strcpy(this->mobile, mobile);
}
void setaddress(const char* address)
{
    strcpy(this->address,address);
    cout<<"Enter the address of the student ::";
    cin>>this->address;
}
void setname (const char* name)
{
    strcpy(this->name,name);
    cout<<"Enter name of the student ::";
    cin>>this->name;
}
void setage (int age)
{
    string choice;
    cout<<"Enter the student's age :: ";
    cin>>this->age;
    if(this->age<18)
    {
    cout<<"INVALID AGE ";
    cout<<"CANNOT GO FURTHER\n";
    cout<<"Do you want to continue the program (yes/no)\n";
        cin>>choice;
        transform(choice.begin(),choice.end(),choice.begin(),::tolower);
        if(choice=="yes"||choice=="y")
        {
        cout<<"Enter valid age of the student ::";
        cin>>this->age;
        cout<<"Now you can move further....\n";
        }
        else
        {
        cout<<"CAN'T GO FURTHER WITH INVALID AGE";
        exit(0);
        }
    }
}
bool isValidMobile(const char* mobile)
    {
    for (size_t i = 0; i < strlen(mobile); ++i) 
    {
        if (!isdigit(mobile[i])) 
        {
            return false;
        }
    }
    return strlen(mobile) == 10;
   }
void setmobile(const char* mobile) 
{
    string choice;
    cout<<"Enter the student's mobile number :: ";
    cin>>this->mobile;
    if (isValidMobile(this->mobile)) 
    {
        cout << "Valid mobile number: "<<this->mobile<<endl;
    } 
    else 
    {
        cout << "Invalid mobile number. Please enter a 10-digit numeric mobile number"<<endl;
        cout<<"Do you want to continue the program (yes/no)";
        cin>>choice;
        transform(choice.begin(),choice.end(),choice.begin(),::tolower);
        if(choice=="yes"||choice=="y")
        {
        cout<<"Enter a 10 digit numeric number ::";
        cin>>this->mobile;
        cout<<"Now you can move further.....\n";
        }
        else
        {
        cout<<"CAN'T GO FURTHER WITH INCORRECT MOBILE NUMBER";
        exit(0);
        }
    }
}
char* retname()
{
    return name;
}
char* retaddress()
{
    return address;
}
int retage()
{
    return age;
}
char* retmobile()
{
    return mobile;
}
};
class engrStudent:public Student 
{
protected:
    float semfees;
    int admno,batchno,semester,type,specialization;
public:
void setsemfees(float semfees)
{
    cout<<"Enter the semester fees of the student :: ";
    cin>>this->semfees;
}
void setadmno (int admno)
{
    cout<<"Enter the admission number of the student :: ";
    cin>>this->admno;
}
void setbatchno (int batchno)
{
    cout<<"Enter the batch number of the student :: ";
    cin>>this->batchno;
}
void setsemester(int semester)
{
string year,backlog,backsem,clear,choice;
    int number,i;
    if(type==1)
{
    cout<<"There are 8 semesters for the student\n";
    cout<<"In which YEAR the student is(either 1st,2nd,3rd or 4th) :: ";
    cin>>year;
    transform(year.begin(),year.end(),year.begin(),::tolower);
    if(year=="1"||year=="first")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 1st and 2nd SEMESTER\n";
    }
    else if(year=="2"||year=="second")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 3rd and 4th SEMESTER\n";
    }
    else if(year=="3"||year=="third")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 5th and 6th SEMESTER\n";
    }
    else if(year=="4"||year=="fourth")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 7th and 8th SEMESTER\n";
    }
    else 
    {
    cout<<"INVALID YEAR ENTERED\n";
    cout<<"Do you want to continue the program (yes/no)";
        cin>>choice;
        transform(choice.begin(),choice.end(),choice.begin(),::tolower);
        if(choice=="yes"||choice=="y")
        {
        cout<<"In which YEAR the student is(either 1st,2nd,3rd,4thor 5th) :: ";
        cin>>year;
        cout<<"Now you can move further.....\n";
        }
        else
        {
        cout<<"CAN'T GO FURTHER WITH NON-EXISTENCE YEAR";
        exit(0);
        }
    }
    cout<<"IS THERE ANY BACKLOG ??(yes/no) :: ";
    cin>>backlog;
    transform(backlog.begin(),backlog.end(),backlog.begin(),::tolower);
    if(backlog=="yes"||backlog=="y")
    {
        cout<<"How many backlogs does the student have ?? :: ";
        cin>>number;
        for(i=0;i<number;i++)
        {
        cout<<"In which semester does the student have backlog ?? :: ";
        cin>>backsem;
        if (backsem != "1" && backsem != "2")
        {
        cout << "Invalid backlog semester for the entered semester\n";
        exit(0);
        }
    if(backsem=="1")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 3rd,5th or 7th SEMESTER\n";
            cout<<"Have you cleared your backlog in 3rd semester??(yes/no) :: ";
            cin>>clear;
            transform(clear.begin(),clear.end(),clear.begin(),::tolower);
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 5th or 7th semester\n";
            cout<<"Have you cleared your backlog in 5th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 7th semester\n";
            cout<<"Have you cleared your backlog in 7th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            
            }
            }
        }
        else if(backsem=="2")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 4th,6th or 8th SEMESTER\n";
            cout<<"Have you cleared your backlog in 4th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 6th or 8th semester\n";
            cout<<"Have you cleared your backlog in 6th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 8th semester\n";
            cout<<"Have you cleared your backlog in 8th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            
            }
            }
        }
        else if(backsem=="3")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 5th or 7th SEMESTER\n";
            cout<<"Have you cleared your backlog in 5th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 7th semester\n";
            cout<<"Have you cleared your backlog in 7th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            
            }
        }
        else if(backsem=="4")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 6th or 8th SEMESTER\n";
            cout<<"Have you cleared your backlog in 6th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 8th semester\n";
            cout<<"Have you cleared your backlog in 8th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            
            }
        }
        else if(backsem=="5")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN 7th SEMESTER\n";
            cout<<"Have you cleared your backlog in 7th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else 
            cout<<"Your degree is extended for next semester '~'\n";
            
        }
        else if(backsem=="6")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN 8th SEMESTER\n";
            cout<<"Have you cleared your backlog in 8th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            
        }
        else if(backsem=="7")
        {
             cout<<"Your degree is extended for next semester '~'\n";
        }
        else if(backsem=="8")
        {
            cout<<"Your degree is extended for next semester '~'\n";
        }
        else
        {
        cout<<"Invalid semester";
        exit(0);
        }
    }
    }
else
    cout<<"GETS A NO BACKLOG CERTIFICATE.....*^~^*\n ";
}
    else if(type==2)
{
    cout<<"There are 10 semesters for the student\n";
    cout<<"In which YEAR the student is(either 1st,2nd,3rd,4th or 5th) :: ";
    cin>>year;
    transform(year.begin(),year.end(),year.begin(),::tolower);
    if(year=="1"||year=="first")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 1st and 2nd SEMESTER\n";
    }
    else if(year=="2"||year=="second")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 3rd and 4th SEMESTER\n";
    }
    else if(year=="3"||year=="third")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 5th and 6th SEMESTER\n";
    }
    else if(year=="4"||year=="fourth")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 7th and 8th SEMESTER\n";
    }
    else if(year=="5"||year=="fifth")
    {
    cout<<"Each semester is of 4 to 6 months\n";
    cout<<"THERE ARE 9th and 10th SEMESTER\n";
    }
    else 
    {
    cout<<"INVALID YEAR ENTERED\n";
    cout<<"Do you want to continue the program (yes/no)";
        cin>>choice;
        transform(choice.begin(),choice.end(),choice.begin(),::tolower);
        if(choice=="yes"||choice=="y")
        {
        cout<<"In which YEAR the student is(either 1st,2nd,3rd,4thor 5th) :: ";
        cin>>year;
        cout<<"Now you can move further.....\n";
        }
        else
        {
        cout<<"CAN'T GO FURTHER WITH NON-EXISTENCE YEAR";
        exit(0);
        }
    }
    cout<<"IS THERE ANY BACKLOG ??(yes/no) :: ";
    cin>>backlog;
    transform(backlog.begin(),backlog.end(),backlog.begin(),::tolower);
    int y = 0;
    for(int i=0;i<year.length();i++)
    {
        y = (y *10 + ((int) year[i]- 48) ); 
    }
    if(backlog=="yes"||backlog=="y")
    {
        cout<<"How many backlogs does the student have ?? :: ";
        cin>>number;
        for(i=0;i<number;i++)
        {
        cout<<"In which semester does the student have backlog ?? :: ";
        cin>>backsem;
        int b = 0;
        for(int i=0;i<backsem.length();i++)
        {
            b = (b *10 + ((int) backsem[i]-48)); 
        }
        cout<<b<<" "<<y<<endl;
        if (b > y*2 )
        {  
            cout<<"invalid semster entered \n";
            cout<<"Please reenter correct Semester ( 1 to "<<y*2<<") \n";
            i--;
        }else{
        // if (backsem != "1" && backsem != "2")
        // {
        // cout << "Invalid backlog semester for the entered semester\n";
        // exit(0);
        // }
        if(backsem=="1")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 3rd,5th,7th or 9th SEMESTER\n";
            cout<<"Have you cleared your backlog in 3rd semester??(yes/no) :: ";
            cin>>clear;
            transform(clear.begin(),clear.end(),clear.begin(),::tolower);
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 5th or 7th semester\n";
            cout<<"Have you cleared your backlog in 5th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 7th semester\n";
            cout<<"Have you cleared your backlog in 7th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 9th semester\n";
            cout<<"Have you cleared your backlog in 9th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            }
            }
            }
        }
        else if(backsem=="2")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 4th,6th,8th or 10th SEMESTER\n";
            cout<<"Have you cleared your backlog in 4th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 6th or 8th semester\n";
            cout<<"Have you cleared your backlog in 6th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 8th semester\n";
            cout<<"Have you cleared your backlog in 8th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 10th semester\n";
            cout<<"Have you cleared your backlog in 10th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            }
            }
            }
        }
        else if(backsem=="3")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 5th,7th or 9th SEMESTER\n";
            cout<<"Have you cleared your backlog in 5th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 7th semester\n";
            cout<<"Have you cleared your backlog in 7th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 9th semester\n";
            cout<<"Have you cleared your backlog in 9th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            }
            }
        }
        else if(backsem=="4")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 6th,8th or 10th SEMESTER\n";
            cout<<"Have you cleared your backlog in 6th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 8th semester\n";
            cout<<"Have you cleared your backlog in 8th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 10th semester\n";
            cout<<"Have you cleared your backlog in 10th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            }
            }
        }
        else if(backsem=="5")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 7th or 9th SEMESTER\n";
            cout<<"Have you cleared your backlog in 7th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 9th semester\n";
            cout<<"Have you cleared your backlog in 9th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else 
            cout<<"Your degree is extended for next semester '~'\n";
            }
        }
        else if(backsem=="6")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN EITHER 8th or 10th SEMESTER\n";
            cout<<"Have you cleared your backlog in 8th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else if(clear=="no"||clear=="n")
            {
            cout<<"CAN CLEAR BACKLOG IN 10th semester\n";
            cout<<"Have you cleared your backlog in 10th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
            }
        }
        else if(backsem=="7")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN 9th SEMESTER\n";
            cout<<"Have you cleared your backlog in 9th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
        }
        else if(backsem=="8")
        {
            cout<<"YOU CAN CLEAR YOUR BACKLOG IN 10th SEMESTER\n";
            cout<<"Have you cleared your backlog in 10th semester??(yes/no) :: ";
            cin>>clear;
            if(clear=="yes"||clear=="y")
            cout<<"GOOD TO GO......\n";
            else
            cout<<"Your degree is extended for next semester '~'\n";
        }
        else if(backsem=="9")
        cout<<"Your degree is extended for the next semester '~'\n";
        else if(backsem=="10")
        cout<<"Your degree is extended for the next semester '~'\n";
        else
        {
        cout<<"Invalid semester";
        exit(0);
        }
        }
    }
    }
else
    cout<<"GETS A NO BACKLOG CERTIFICATE.....*^~^*\n ";
}
}
void settype(int type)
{
   cout<<"There are mainly two types of courses for Engineering Students ::\n ";
    cout<<"1]4 year course which is called btech\n";
    cout<<"2]5 year course which is called Integrated - Btech and M.tech\n";
    cout<<"For which course did the Engineerig Student opt (enter the option number):: ";
    cin>>this->type;
    switch(this->type)
    {
        case 1:
        cout<<"The subjects students need to follow are as follows ::\n"; 
        cout<<"1)Engineering Mechanics\n";
        cout<<"2)Engineering Electronics\n";
        cout<<"3)structural Analysis\n";
        cout<<"4)Programming Language\n";
        break;
        case 2:
        cout<<"The subjects students need to follow are as follows :: \n"; 
        cout<<"1)Mechanical Engineering\n";
        cout<<"2)Computer Science Engineering\n";
        cout<<"3)Engineering Mechanics\n";
        cout<<"4)Electrical Engineering\n";
        cout<<"5)Civil Engineering\n";
        cout<<"6)Information Technology\n";
        cout<<"Gets a Bachelor's and Master's degree......YAY!!\n";
        break;
        default:
        cout<<"Invalid course";
        exit(0);
    }
}
void setspecialization(int specialization)
{
    cout<<"There are many specialization in Engineering namely ::\n";
    cout<<"1]Civil Engineering\n";
    cout<<"2]Mechanical Engineering\n";
    cout<<"3]Chemical Engineering\n";
    cout<<"4]Electrical Engineering\n";
    cout<<"5]Computer Engineering\n";
    cout<<"6]Information Technology\n";
    cout<<"7]Electronics and Communication Engineering\n";
    cout<<"8]Mining Engineering\n";
    cout<<"The specialization in which the student went into (enter the number of the specialization):: ";
    cin>>this->specialization;
    switch(this->specialization)
    {
        case 1:
        cout<<"Civil Engineering deals with the design, construction, and maintenance of the physical and naturally built environment\n";
        break;
        case 2:
        cout<<"Mechanical engineering is the study of physical machines that may involve force and movement.\n";
        break;
        case 3:
        cout<<"Chemical Engineering deals with the study of operation and design of chemical plants as well as methods of improving production\n";
        break;
        case 4:
        cout<<"Electrical engineers oversee the design, development, and manufacturing of tools and equipment used in the production and distribution of electricity\n";
        break;
        case 5:
        cout<<"Computer engineering is about designing, developing, and maintaining computer hardware and software systems\n";
        break;
        case 6:
        cout<<"Information technology is a diverse specialization, often dealing with the implementation and maintenance of technology and information systems\n";
        break;
        case 7:
        cout<<"Electronics and Communication Engineering is for students who want to learn about electrical circuits, signs and signal systems, digital gadgets, power electronics etc\n";
        break;
        case 8:
        cout<<"Mining engineering is central to the industry, and encompasses the processes involved in the location, extraction, and refinement of mineral deposits\n";
        break;
        default:
        cout<<"Invalid Specialization ";
        exit(0);
    }
}
};
int main()
{
    engrStudent *obj;
    char address[100];
    char name[50];
    char mobile[11];
    int age,n,admno,batchno,semester,specialization;
    float semfees;
    int type;
    cout<<"Enter no. of students in an University :: ";
    cin>>n;
    obj=new engrStudent[n];
   for(int i=0;i<n;i++)
    {
    obj[i].setname(name);
    obj[i].setaddress(address);
    obj[i].setage(age);
    obj[i].setmobile(mobile);
    }
    for(int i=0;i<n;i++)
    {
      cout<<"Name ::"<<obj[i].retname()<<"\n"<<"Address :: "<<obj[i].retaddress()<<"\n"<<"Age :: "<<obj[i].retage()<<"\n"<<"Mobile Number ::"<<obj[i].retmobile()<<endl;
    }
    for(int i=0;i<n;i++)
    {
    obj[i].settype(type);
    obj[i].setspecialization(specialization);
    obj[i].setsemester(semester);
    obj[i].setsemfees(semfees);
    obj[i].setadmno(admno);
    obj[i].setbatchno(batchno);
    }
delete[]obj;
cout<<"         THANK YOU FOR CHOOSING OUR UNIVERSITY FOR YOUR ENGINEERING COURSE....*^_^*";
return 0;
}














