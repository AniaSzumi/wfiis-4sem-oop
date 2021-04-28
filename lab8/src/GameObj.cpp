#include "../include/GameObj.h"

std::ostream& operator<<(std::ostream& o, const HP& hp){
  o << "[" << hp._hp << " HP]";
  return o;
}

GameObj::~GameObj(){}

std::string GameObj::id() const { return _id; }

std::ostream& operator<<(std::ostream& o, const GameObj& obj){ 
  obj.Print(); 
  return o;
}

HP Character::hp() const { return _hp; }

void Character::Print() const{
  std::cout << _name << ", ma: " << _hp;
}

void Player::Print() const{
  std::cout << "Player ";
  Character::Print();
}

HP Hurting::hp() const { return _hp; };

void Hurting::Print() const{
  std::cout << "Jego uderzenie odbiera: " << _hp;
}

void Bomb::Print() const{ Hurting::Print(); }

void Boss::Print() const{
  std::cout << "Bad guy: ";
  Character::Print();
  std::cout << std::endl;
  Hurting::Print();
}
