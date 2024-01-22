#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
#include<cmath>
#include <iomanip>
using namespace std;

void add_teacher();
void add_student();


// classes
class student
{
private:
    string name;
    int age;
    int bn;
public:
    student(string name , int age , int bn )
    {
        this->name = name;
        this->age = age;
        this->bn = bn;
    }
    
    student()
    {
        name = "";
        age = 0;
        bn = 0;
    }

    void show (int i)
    {
        
        cout << "Name " << i+1  << ": " << name << endl;
        cout << "Age " << i+1  << ": " << age << endl;
        cout << "Bench number "  << i+1  << ": " << bn << endl;
    }

};

class teacher
{
private:
    string name;
    int age;
    float salary;
public:
    teacher(string name , int age , float salary )
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    
    teacher()
    {
        name = "";
        age = 0;
        salary = 0.0;
    }

    void show (int i)
    {
        cout << "Name " << i+1  << ": " << name << endl;
        cout << "Age " << i+1  << ": " << age << endl;
        cout << "salary "  << i+1  << ": " << salary << endl;
    }

};
// end classes


// functions
void main_fun ()
{
    int choice;
    do
    {
        cout << "\n--------------system options--------------\n";
        cout << "\n- press 1 to add teachers";
        cout <<  "\n- press 2 to add students";
        cout <<   "\n- press 3 to exit";
        cout << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                add_teacher();
                break;
            case 2:
                add_student();
            break;
            case 3:
            break;
            
            default:
                cout << "Enter a valid number!";
                main_fun();
            }
    } while (choice != 3);
    
}

void add_teacher()
{
    int n;
    string names[10];
    int ages[10];
    float salaries[10];

    
    cout << "Enter the number of teachers : \n";
    cin >> n;
    
    
    for (int i = 0; i < n; i++)
    {
        cout << "Name " << i+1 << ": \n";
        cin >> names[i];
        cout << "\n";
        
        cout << "Age " << i+1 << ": \n";
        cin >> ages[i];
        cout << "\n";
        
        cout << "Salary " << i+1 << ": \n";
        cin >> salaries[i];
        cout << "\n";
    }
    
    cout << "---------------teachers infor----------------\n";
    for (int i = 0; i < n; i++)
    {
        teacher Teacher(names[i] , ages[i] , salaries[i]);
        Teacher.show(i);
        cout << "------------------------------\n";
    }
}

void add_student()
{
    int n;
    string names[10];
    int ages[10];
    float Bench_nums[10];

    
    cout << "Enter the number of students : \n";
    cin >> n;
    
    
    for (int i = 0; i < n; i++)
    {
        cout << "Name " << i+1 << ": \n";
        cin >> names[i];
        cout << "\n";
        
        cout << "Age " << i+1 << ": \n";
        cin >> ages[i];
        cout << "\n";
        
        cout << "Bench number " << i+1 << ": \n";
        cin >> Bench_nums[i];
        cout << "\n";
    }
    
    cout << "---------------students infor----------------\n";
    for (int i = 0; i < n; i++)
    {
        teacher Student(names[i] , ages[i] , Bench_nums[i]);
        Student.show(i);
        cout << "------------------------------\n";
    }
}
// end functions...

int main ()
{
    main_fun();
    return 0;
}