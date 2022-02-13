// justin mah llab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//Justin Mah
//101355513


class Enemy
{
protected:
	int damage = 10;
	string warcry = "Roar!";
	string attack = warcry + " Deal " + to_string(damage) + " damage to opponent";

public:
	Enemy() {}

	Enemy(int damage, string warcry, string attack);

	void getStats() {
		cout << getDamage();
		cout << endl;
		cout << getWarcry();
		cout << endl;
		cout << getAtack();
		cout << endl;
	}


	void setDamage(int damage) {
		this->damage = damage;
	}

	int getDamage() {
		return damage;
	}

	void setWarcry(string warcry) {
		this->warcry = warcry;
	}

	string getWarcry() {
		return warcry;
	}


	void setAttack(int damage) {
		this->attack = attack;
	}

	string getAtack() {
		return attack;
	}
};


class Skeleton : public Enemy {
public:
	
	Skeleton() {
		warcry = "Roar! Hssssssssssss";
		attack = warcry + to_string(damage) + to_string(damage);
	}
	
};

class Troll : public Enemy {
public:
	Troll() {
		damage = 15;
		warcry = "Roar! Grrrrrrrr";
		attack = warcry + to_string(damage);
	}
};

class Orc : public Enemy {
public:
	Orc() {
		damage = 20;
		warcry = "Roar! AHHHHHHHHHH";
		attack = warcry + to_string(damage) + warcry + to_string(damage);
	}
};

class DarkOrc : public Orc {
	DarkOrc() {
		setDamage(0);
		attack = warcry + to_string(magic);
	}
	int magic = 50;
};





int main()
{
	Enemy bob;
	Skeleton jman;
	Orc ross;
	DarkOrc eve();

	bob.getStats();
	cout << endl;
	jman.getStats();
	cout << endl;
	ross.getStats();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

Enemy::Enemy(int damage, string warcry, string attack)
{
}
