#include <iostream>
#include <list>

/*class Employee{
    std::string first_name, second_name;

    int department;
    //........
public:
    Employee(const std::string & name, int dept){ second_name = name; department = dept;};
    /*
     * ключевое слово virtual указывает на то, что ф-ция print() символизирует общий
     * интерфейс к набору одноименных ф-ций, определенных в базовом и производных от него классах.
     * Если такие ф-ции действительно определены в производных классах,
     * компилятор гарантирует вызов своего варианта ф-ции print()
     * для каждого объекта классовой иерархии

    //типы аргументов всех ф-ций должны быть одинаковыми,
    // а для возвращаемого значения допускаются лишь незначительные отличия
    virtual void print() const;
    //......
};

void Employee::print() const {
    std::cout << second_name<<'\t' << department;
}


class  Manager: public Employee{
    std::list<Employee* > emp_group;
    int level;
    //.....
public:
    Manager(const std::string &name, int dept, int lvl): Employee(name, dept) { level = lvl;}
    ~Manager(){}
    void print()const;
    //.....
};

void Manager::print() const {
    Employee::print();

    std::cout << "\tlevel " << level << '\n';
    //.........
}*/

class Animal
{
public:
    // turn the following virtual modifier on/off to see what happens
    //virtual
    //virtual std::string Says() { return "?"; }
    virtual std::string Says() { return "?"; }
};

class Dog: public Animal
{
public: std::string Says() { return "Woof"; }
};

void test()
{
    Dog* d = new Dog();
    Animal* a = d;       // refer to Dog instance with Animal pointer

    std::cout << d->Says();   // always Woof
    std::cout << a->Says();   // Woof or ?, depends on virtual
}

int main() {
    //Manager m("DanAst", 2, 28);
    //m.print();
    test();
    return 0;
}
