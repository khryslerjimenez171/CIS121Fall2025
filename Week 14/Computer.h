#include <string>
using namespace std;

class Computer
{
public:
    void set_make(string make);
    string get_make();

    void set_model(string model);
    string get_model();

    void set_cpu(string cpu);
    string get_cpu();

    void set_ram(string ram);
    string get_ram();

    void set_hd(string hd);
    string get_hd();

    void set_type(string type);
    string get_type();

    float compute_cost();
    float get_cost();

    // Constructor & Destructor
    Computer();
    ~Computer();

protected:
    string m_make;
    string m_model;
    string m_cpu;
    string m_ram;
    string m_hd;
    string m_type;
    float m_cost;
};


void Computer::set_make(string make)
{
    if (make == "Lenovo" || make == "HP" || make == "Apple")
        m_make = make;
    else
        m_make = "Lenovo";
}
string Computer::get_make()
{
    return m_make;
}

void Computer::set_model(string model)
{
    if (model.find(' ') == string::npos)
        m_model = model;
    else
        m_model = "LE100A";
}
string Computer::get_model()
{
    return m_model;
}

void Computer::set_cpu(string cpu)
{
    if (cpu == "Intel" || cpu == "AMD")
        m_cpu = cpu;
    else
        m_cpu = "Intel";
}
string Computer::get_cpu()
{
    return m_cpu;
}

void Computer::set_ram(string ram)
{
    if (ram == "8GB" || ram == "16GB" || ram == "32GB")
        m_ram = ram;
    else
        m_ram = "32GB";
}
string Computer::get_ram()
{
    return m_ram;
}

void Computer::set_hd(string hd)
{
    if (hd == "SSD" || hd == "HD")
        m_hd = hd;
    else
        m_hd = "HD";
}
string Computer::get_hd()
{
    return m_hd;
}

void Computer::set_type(string type)
{
    if (type == "Laptop" || type == "Notebook" || type == "Tablet" || type == "Desktop")
        m_type = type;
    else
        m_type = "Laptop";
}
string Computer::get_type()
{
    return m_type;
}


float Computer::compute_cost()
{
    m_cost = 0.0f;

    if (m_make == "Lenovo") m_cost += 1200.00f;
    else if (m_make == "HP") m_cost += 1000.00f;
    else if (m_make == "Apple") m_cost += 2000.00f;

    if (m_cpu == "Intel") m_cost += 200.00f;

    if (m_ram == "16GB") m_cost += 300.00f;
    else if (m_ram == "32GB") m_cost += 500.00f;

    if (m_hd == "SSD") m_cost += 500.00f;

    if (m_type == "Laptop") m_cost += 300.00f;
    else if (m_type == "Tablet") m_cost -= 200.00f;

    return m_cost;
}

float Computer::get_cost()
{
    return m_cost;
}


Computer::Computer()
{
    m_make = "Lenovo";
    m_model = "LE100A";
    m_cpu = "Intel";
    m_ram = "32GB";
    m_hd = "HD";
    m_type = "Laptop";
    m_cost = 0.00f;
}

Computer::~Computer()
{
}
