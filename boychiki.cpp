#include "boychiki.h"
#include "tyanki.h"
#include <iostream>

// Конструктор
Boychiki::Boychiki(int s, int m, int h, int bh, int a, int ho, int p)
    : sociality(s), mind(m), health(h), bad_habits(bh),
      appearance(a), hobbies(ho), personality(p) {}

// Методы get (константные)
int Boychiki::getSociality() const { return sociality; }
int Boychiki::getMind() const { return mind; }
int Boychiki::getHealth() const { return health; }
int Boychiki::getBadHabits() const { return bad_habits; }
int Boychiki::getAppearance() const { return appearance; }
int Boychiki::getHobbies() const { return hobbies; }
int Boychiki::getPersonality() const { return personality; }

// Методы set (не константные)
void Boychiki::setSociality(int s) { sociality = s; }
void Boychiki::setMind(int m) { mind = m; }
void Boychiki::setHealth(int h) { health = h; }
void Boychiki::setBadHabits(int bh) { bad_habits = bh; }
void Boychiki::setAppearance(int a) { appearance = a; }
void Boychiki::setHobbies(int ho) { hobbies = ho; }
void Boychiki::setPersonality(int p) { personality = p; }

/// Общий геттер (константный)
void Boychiki::getAllAttributes(int &s, int &m, int &h, int &bh, int &a, int &ho, int &p) const {
    s = sociality;
    m = mind;
    h = health;
    bh = bad_habits;
    a = appearance;
    ho = hobbies;
    p = personality;
}

// Общий сеттер (не константный)
void Boychiki::setAllAttributes(int s, int m, int h, int bh, int a, int ho, int p) {
    sociality = s;
    mind = m;
    health = h;
    bad_habits = bh;
    appearance = a;
    hobbies = ho;
    personality = p;
}

// Методы для изменения параметров

void Boychiki::takeShower() {
    appearance++;  // Улучшение внешности после shower
    std::cout << "Boychik took a shower and looks and smells better!" << std::endl;
}

void Boychiki::kiss_b(Tyanki& other) {
    // Улучшаем внешний вид и социальность обоих
    appearance += 1;
    sociality += 1;
    int a = other.getAppearance();
    int s = other.getSociality();
    other.setAppearance(a + 1);
    other.setSociality(s + 1);
    std::cout << "Boychik kissed Tyano4ka! Both look more attractive and are more social!" << std::endl;
}

void Boychiki::doExercise() {
    health += 2;      // Улучшение здоровья
    appearance += 1;  // Улучшение внешности
    std::cout << "Boychik did some exercise and is now healthier and more attractive!" << std::endl;
}

void Boychiki::study() {
    mind += 2;  // Улучшение ума
    std::cout << "Boychik studied and got smarter!" << std::endl;
}

void Boychiki::developHobby() {
    hobbies += 1;  // Улучшение хобби
    std::cout << "Boychik developed a new hobby and is now more interesting!" << std::endl;
}

void Boychiki::quitBadHabits() {
    if (bad_habits > 0) {
        bad_habits -= 1;  // Уменьшаем количество вредных привычек
        std::cout << "Boychik quit a bad habit! Life is better!" << std::endl;
    } else {
        std::cout << "Boychik has no bad habits left to quit!" << std::endl;
    }
}

void Boychiki::drink() {
    health -= 3;     // Снижаем здоровье
    sociality -= 1;  // Снижаем социальность
    std::cout << "Boychik drank too much and feels hungover!" << std::endl;
}

void Boychiki::talk(Boychiki& other) {
    sociality += 1;
    int s = other.getSociality();
    other.setSociality(s + 1);
    std::cout << "Boychik had talk with other boychik!" << std::endl;
}
