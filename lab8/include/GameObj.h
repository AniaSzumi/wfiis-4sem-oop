#include <iostream>

/** @class HP klasa opisująca ilość życia
*/
class HP{
public:

  /** @brief konstruktor 
  * @param hp składnik klasy
  */
  HP(int hp) : _hp(hp){}

  friend class GameObj;

  /** @brief operator wypisania HP
  * @param o strumień
  * @param hp obiekt HP do wypisania
  */
  friend std::ostream& operator<<(std::ostream& o, const HP& hp);

private:
  int _hp; /**< zmienna pokazujaca ilość życia */
};

/** @class GameObj klasa bazowa dla wszystkich obiektów gry
*/
class GameObj{
public:

  /** @brief konstruktor
  * @param id ID konstruowanego obiektu
  */
  GameObj(std::string id) : _id(id){}

  /** @brief destruktor */
  virtual ~GameObj();

  /** @brief funkcja zwracajaca id obiektu
  * @return id obiektu
  */
  std::string id() const;

  /** @brief funkcja czysto wirtualna wypisująca dany obiekt w zależności od typu */
  virtual void Print() const = 0;

  /** @brief operator wypisania obiektu gry
  * @param o strumień
  * @param hp obiekt gry do wypisania
  */
  friend std::ostream& operator<<(std::ostream& o, const GameObj& obj);

protected:
  std::string _id; /**< id obiektu */
};

/** @class Character klasa opisujaca postać w grze
* Dziedziczy po klasie GameObj jako że jest jednym z obiektów w grze
*/
class Character : virtual public GameObj{
public:

  /** @brief konstruktor
  * @param hp liczba życia postaci
  * @param name nazwa postaci
  * @param id ID postaci
  */
  Character(HP hp, std::string name, std::string id) : GameObj(id), _hp(hp), _name(name){}

  /** @brief funkcja zwracająca HP postaci
  * @return HP postaci
  */
  HP hp() const;

  /** @brief funkcja wypisująca obiekt typu Character zastępująca funkcję bazową */
  void Print() const override;

protected:
  HP _hp;
  std::string _name;
};

/** @class Player opisuje postać gracza
* Dziedziczy po klasie Character (więc i GameObj) jako że gracz to rodzaj postaci w grze, ma takie same składowe klasy
*/
class Player : public Character{
public:

  /** @brief konstruktor
  * @param hp liczba życia gracza
  * @param name nazwa gracza
  * @param id ID gracza
  */
  Player(HP hp, std::string name, std::string id) : Character(hp, name, id), GameObj(id) {}

  /** @brief funkcja wypisująca obiekt typu Player zastępująca funkcję bazową */
  void Print() const override;

};

/** @class Hurting klasa opisująca obiekty zadające obrażenia
* Dziedziczy tylko po GameObj ponieważ jest to nowy typ obiektu w grze
*/
class Hurting : virtual public GameObj{
public:

  /** @brief konstruktor
  * @param hp obrażenia HP zadawane przez obiekt
  * @param id ID obiektu
  */
  Hurting(HP hp, std::string id) : GameObj(id), _hp(hp){}

  /** @brief funkcja wypisująca obiekt typu Hurting zastępująca funkcję bazową */
  void Print() const override;

  /** @brief funkcja zwracająca obrażenia HP zadawane przez obiekt
  * @return obrażenia HP zadawane przez obiekt
  */
  HP hp() const;

protected:
  HP _hp; /**< składowa klasy przetrzymująca obrażenia HP zadawane przez obiekt */
};

/** @class Bomb opisująca bombę
* Dziedziczy po klasie Hurting (więc i GameObj) ponieważ jest to typ obiektu w grze zadającego obrażenia
*/
class Bomb : public Hurting{
public:

  /** @brief konstruktor
  * @param hp obrażenia HP zadawane przez obiekt
  * @param id ID obiektu
  */
  Bomb(HP hp, std::string id) : Hurting(hp, id), GameObj(id) {}

  /** @brief funkcja wypisująca obiekt typu Bomb zastępująca funkcję bazową */
  void Print() const override;
};

/** @class Boss
* Dziedziczy po klasach Charakter i Hurting (a także GameObj) jako że jest to typ postaci w grze która może też zadawać obrażenia
*/
class Boss : public Character, public Hurting{
public:

  /** @brief konstruktor
  * @param own_hp liczba życia bossa
  * @param name nazwa bossa
  * @param damage obrażenia HP zadawane przez bossa
  * @param id ID bossa
  */
  Boss(HP own_hp, std::string name, HP damage, std::string id) : Character(own_hp, name, id), Hurting(damage, id), GameObj(id){}

  /** @brief funkcja wypisująca obiekt typu Boss zastępująca funkcję bazową */
  void Print() const override;
};