#include "tyanki.h"
#include "boychiki.h"
#include <iostream>

// Конструктор
Tyanki::Tyanki(int s, int m, int h, int bh, int a, int ho, int p)
    : sociality(s), mind(m), health(h), bad_habits(bh),
      appearance(a), hobbies(ho), personality(p) {}

// Методы get (константные)
int Tyanki::getSociality() const { return sociality; }
int Tyanki::getMind() const { return mind; }
int Tyanki::getHealth() const { return health; }
int Tyanki::getBadHabits() const { return bad_habits; }
int Tyanki::getAppearance() const { return appearance; }
int Tyanki::getHobbies() const { return hobbies; }
int Tyanki::getPersonality() const { return personality; }

// Методы set (не константные)
void Tyanki::setSociality(int s) { sociality = s; }
void Tyanki::setMind(int m) { mind = m; }
void Tyanki::setHealth(int h) { health = h; }
void Tyanki::setBadHabits(int bh) { bad_habits = bh; }
void Tyanki::setAppearance(int a) { appearance = a; }
void Tyanki::setHobbies(int ho) { hobbies = ho; }
void Tyanki::setPersonality(int p) { personality = p; }

// Общий геттер (константный)
void Tyanki::getAllAttributes(int &s, int &m, int &h, int &bh, int &a, int &ho, int &p) const {
    s = sociality;
    m = mind;
    h = health;
    bh = bad_habits;
    a = appearance;
    ho = hobbies;
    p = personality;
}

// Общий сеттер (не константный)
void Tyanki::setAllAttributes(int s, int m, int h, int bh, int a, int ho, int p) {
    sociality = s;
    mind = m;
    health = h;
    bad_habits = bh;
    appearance = a;
    hobbies = ho;
    personality = p;
}

// Методы для изменения параметров

void Tyanki::takeShower() {
    appearance += 1;  // Улучшение внешности после shower
    std::cout << "Tyano4ka took a shower and looks more beautiful!" << std::endl;
}

void Tyanki::kiss_t(Boychiki& other) {
    // Улучшаем внешний вид и социальность обоих
    appearance += 1;
    sociality += 1;
    int a = other.getAppearance();
    int s = other.getSociality();
    other.setAppearance(a + 1);
    other.setSociality(s + 1);
    std::cout << "Tyano4ka kissed Boychik! Both look more attractive and are more social!" << std::endl;
}

void Tyanki::doExercise() {
    health += 2;      // Улучшение здоровья
    appearance += 1;  // Улучшение внешности
    std::cout << "Tyano4ka did some exercise and is now healthier and more attractive!" << std::endl;
}

void Tyanki::study() {
    mind += 2;  // Улучшение ума
    std::cout << "Tyano4ka studied and got smarter!" << std::endl;
}

void Tyanki::developHobby() {
    hobbies += 1;  // Улучшение хобби
    std::cout << "Tyano4ka developed a new hobby and is now more interesting!" << std::endl;
}

void Tyanki::quitBadHabits() {
    if (bad_habits > 0) {
        bad_habits -= 1;  // Уменьшаем количество вредных привычек
        std::cout << "Tyano4ka quit a bad habit! Life is better!" << std::endl;
    } else {
        std::cout << "Tyano4ka has no bad habits left to quit!" << std::endl;
    }
}

void Tyanki::drink() {
    health -= 3;     // Снижаем здоровье
    sociality -= 1;  // Снижаем социальность
    std::cout << "Tyano4ka drank too much and feels hungover!" << std::endl;
}
