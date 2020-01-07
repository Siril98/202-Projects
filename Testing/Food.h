//hEADER FOR FOOD.H

#ifndef FOOD_H
#define FOOD_H
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;


class Food{

 public:
  Food();
  Food(string name);
  //Getters
  int GetCalories(){return m_calories}
  
  int GetTaste();{return m_taste}
  int GetName();{return m_name}
  int GetColor(){return m_color}
  void Cook();
  void DisposeOf();

 private:

  int m_calories;
  string m_taste;
  string m_name;
  string m_color;
  
};

