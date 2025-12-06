#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee();
    ~Employee();

    void FirstName(string fn);
    string FirstName();

    void LastName(string ln);
    string LastName();

    void Salary(float s);
    float Salary();

    virtual float Bonus();

protected:
    string m_fn, m_ln;
    float m_salary;
    float m_bonus;
};

Employee::Employee()
{
    m_salary = 0.00f;
}

Employee::~Employee()
{
    cout << "Goodbye" << endl;
}

void Employee::FirstName(string fn)
{
    m_fn = fn;
}

string Employee::FirstName()
{
    return m_fn;
}

void Employee::LastName(string ln)
{
    m_ln = ln;
}

string Employee::LastName()
{
    return m_ln;
}

void Employee::Salary(float s)
{
    m_salary = s;
}

float Employee::Salary()
{
    return m_salary;
}

float Employee::Bonus()
{
    if (m_salary > 100000.0f)
        m_bonus = m_salary * 0.20f;
    else
        m_bonus = m_salary * 0.10f;

    return m_bonus;
}

class Manager : public Employee
{
public:
    Manager();

    float Long_Term_Bonus();
    float Bonus() override;
};

Manager::Manager() : Employee()
{
    
}

float Manager::Long_Term_Bonus()
{
    return m_salary * 0.50f;
}

float Manager::Bonus()
{
    m_bonus = m_salary * 0.50f;
    return m_bonus;
}

int main()
{
    Manager mgr;

    mgr.FirstName("First Name");
    mgr.LastName("Last Name");
    mgr.Salary(120000.0f);

    cout << " MANAGER OBJECT TEST " << endl;
    cout << "First Name: " << mgr.FirstName() << endl;
    cout << "Last Name : " << mgr.LastName() << endl;
    cout << "Salary    : $" << mgr.Salary() << endl;

    cout << "Bonus (Overridden 50%): $" << mgr.Bonus() << endl;
    cout << "Long Term Bonus (50%):  $" << mgr.Long_Term_Bonus() << endl;

    cout << endl;

    return 0;
}
