#include<iostream>
#include<string>
using namespace std;


class Hero{
public:
  void SetStamina(int stamina){m_stamina = stamina;}
  int GetStamina(){return m_stamina;}

  void SetStrength(string strength){m_strength = strength;}
  string GetStrength(){return m_strength;}

  void SetMana(string mana){m_mana = mana;}
  string GetMana(){return m_mana;}

private:
  int m_stamina;
  string m_strength;
  string m_mana;
};

int main(){

  Hero *hero1 = new Hero();



  hero1->SetStamina(999999999);
  cout << "the super hero is level" << hero1->GetStamina() << endl;

  hero1->SetStrength("STRONG LIKE AN ANMOL");
  cout <<"The strength of the hero is" <<  hero1->GetStrength() << endl;

  hero1->SetMana("FLY");
  cout<< " The hero can" << hero1->GetMana() << endl;

  delete hero1;
  return 0;
}
