#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
string name, roll_no, cls, div, dob, blood_group, contact_address, 
telephone, dl_no;
static int count;
public:
// Default Constructor
student()
{
cout << "Default Constructor" << endl;
name = "Name";
roll_no = "Roll No.";
cls = "Class";
div = "Division";
dob = "Date of Birth";
blood_group = "Blood group";
contact_address = "Contact Address";
telephone = "Telephone No.";
dl_no = "Driving Licence No.";
count++;
}
// Parametrised Constructor
student(string name, string roll_no, string cls, string div, string dob, 
string blood_group, string contact_address, string telephone, string dl_no)
{
cout << "Parametrised Constructor" << endl;
this->name = name;
this->roll_no = roll_no;
this->cls = cls;
this->div = div;
this->dob = dob;
this->blood_group = blood_group;
this->contact_address = contact_address;
this->telephone = telephone;
this->dl_no = dl_no;
count++;
}
// Copy Constructor
student(student &s)
{
cout << "Copy Constructor" << endl;
name = s.name;
roll_no = s.roll_no;
cls = s.cls;
div = s.div;
dob = s.dob;
blood_group = s.blood_group;
contact_address = s.contact_address;
telephone = s.telephone;
dl_no = s.dl_no;
count++;
}
// Friend Class
friend class display;
// Inline function
void get_details()
{
cout << "Enter the student Details:" << endl;
cout << "Name :";
cin >> name;
cout << "Roll No. :";
cin >> roll_no;
cout << "Class (FE/SE/TE/BE) :";
cin >> cls;
cout << "Division (e.g.1) :";
cin >> div;
cout << "Date of Birth (DD//MM/YYYY):";
cin >> dob;
cout << "Blood Group (e.g.AB+) :";
cin >> blood_group;
cout << "Contact address :";
cin >> contact_address;
cout << "Telephone No. :";
cin >> telephone;
cout << "Driving Licence No. :";
cin >> dl_no;
}
static int getCount()
{
return count;
}
// Destructor
~student()
{
cout << "All objects are destructed!!! in the Destructor!!!!\n";
}
};
class display
{
public:
void show(student &s);
};
inline void display::show(student &s)
{
cout << "The student Details are as follows:" << endl;
cout << "Name :" << s.name << endl;
cout << "Roll No. :" << s.roll_no << endl;
cout << "Class :" << s.cls << endl;
cout << "Division :" << s.div << endl;
cout << "Date of Birth :" << s.dob << endl;
cout << "Blood Group :" << s.blood_group << endl;
cout << "Contact address :" << s.contact_address << endl;
cout << "Telephone No. :" << s.telephone << endl;
cout << "Driving Licence No.:" << s.dl_no << endl;
}
int student::count = 0;
int main()
{
cout << "\nName : Gaikwad Snehit Rajendra";
cout << "\nRoll No : 16";
cout << "\n******************************************";
display a;
student s;
cout << "How may students do you want to Add?:";
int size;
cin >> size;
student *s4 = new student[size];
for (int i = 0; i < size; i++)
{
s4[i].get_details();
}
for (int i = 0; i < size; i++)
{
cout << "student s4[" << i << "]:" << endl;
a.show((s4[i]));
}
cout << "The no. student in the datatbase are:" << student::getCount() <<
endl;
delete[] s4;
return 0;
}
