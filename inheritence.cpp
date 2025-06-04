#include<iostream>
 
using namespace std ; 
       

/*
Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that allows one class 
(child/derived class) to acquire the properties and behaviors (data members and member functions) 
of another class (parent/base class).

in simpler term : 
 some properties of parent class can be accessed by the child class and also it depends on the access modifier


syntax : 
class parent_class {
    
};

class child_class : access_specifier parent_class{
};

🔷 Types of Inheritance 
Type	                                                Description

Single Inheritance	                        One derived class inherits from one base class.
Multiple Inheritance	                    One derived class inherits from more than one base class.
Multilevel Inheritance	                    A derived class is further inherited by another class.
Hierarchical Inheritance	                Multiple derived classes inherit from one base class.
Hybrid Inheritance	                        Combination of more than one type of inheritance (can lead to Diamond Problem).


access specifier : 
                                                    (access modifier)
Base Class Member	                Public Inheritance	    Protected Inheritance	Private Inheritance)

public	                            public	                protected	            private
protected	                        protected	            protected	            private
private	                            Not Inherited	        Not Inherited	        Not Inherited

protected member : access inside its own class and child class.

*/

//single  inheritence
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};


//multiple inheritience
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};


//multilevel inheritence
class LivingThing {
public:
    void breathe() { cout << "Breathing..." << endl; }
};

class Animal2 : public LivingThing {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Dog3 : public Animal {
public:
    void bark1() { cout << "Barking..." << endl; }
};


//heriracial inheritence
class Animal1 {
public:
    void sound1() { cout << "Animal sound" << endl; }
};

class Dog1 : public Animal {};
class Cat : public Animal {};


int main(){ 
    Dog d ;
    d.sound();
    d.bark();

    return 0 ;
}