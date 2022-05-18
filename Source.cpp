#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Person // blueprint of Person class...class name {};
{ 

	private:
		string name; //member variables
		int age;


	public:
		Person()
			: name("NA"), age(0) // initialization list 
		{

		}

		Person() //default constructor
		{
			this->name = "N/A";
			this->age = 0;
		}

		Person(string name)
		{
			this->name = name;
			this->age = 0;

		}

		Person(string name, int age) // constructor
			: name(name), age(age)
		{
		
			this->name = name; // intialize member functions
			this->age = age; // intitalize member functions
		}

		~Person() // default destructor
		{
			//cout << "Destructor called!" << endl;
		}
		 

		// Accessors & Modifiers - get and set private variables
		// Accessors (Getters) 
		const string& getName() const
		{ 
			return this->name; 
		}

		const int& getAge() const
		{
			return this->age;
		}

		// Modifiers (Setters)
		void setName(const string name) 
		{
			this->name = name;
		}
		void setAge(const int age)
		{
			this->age = age;
		}

		//Functions
		const string toString() const
		{
			return "Name: " + this->name + " Age: " + to_string(this->age);
		}



};

int main()
{
	// Class name variable name = initial
	Person myPerson("Sterling", 30);
	cout << "My Name: " << myPerson.toString() << endl;

	Person myotherPerson("Sammy", 32);
	cout << "Name: " << myotherPerson.toString() << endl;



	return 0;
}