#include <iostream>
#include <string>
using namespace std;

class Pokemon {
public:
	Pokemon() { cout << "Default(Pokemon) constructor\n"; }
	virtual ~Pokemon() { cout << "부모클래스(포켓몬) 소멸자\n"; }
	virtual void attack() const { cout << "attack" << endl; }
};

class Picachu : public Pokemon	// is-a
{
public:
	Picachu() { cout << "Default(Picachu) constructor\n"; }
	virtual ~Picachu() { cout << "자식클래스(피카츄) 소멸자\n"; } 
	virtual void attack() const { cout << "electric attack" << endl; }
};

int main() {

	Pokemon* pokemon;

	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Picachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}