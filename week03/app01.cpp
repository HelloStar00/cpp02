#include <iostream>
#include <string>
using namespace std;

class Pokemon {
public:
	Pokemon() { cout << "Default(Pokemon) constructor\n"; }
	virtual ~Pokemon() { cout << "�θ�Ŭ����(���ϸ�) �Ҹ���\n"; }
	virtual void attack() const { cout << "attack" << endl; }
};

class Picachu : public Pokemon	// is-a
{
public:
	Picachu() { cout << "Default(Picachu) constructor\n"; }
	virtual ~Picachu() { cout << "�ڽ�Ŭ����(��ī��) �Ҹ���\n"; } 
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