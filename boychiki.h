#ifndef BOYCHIKI_H_INCLUDED
#define BOYCHIKI_H_INCLUDED

class Tyanki;

class Boychiki {
private:
    int sociality;
    int mind;
    int health;
    int bad_habits;
    int appearance;
    int hobbies;
    int personality;

public:
    // Конструктор
    Boychiki(int s, int m, int h, int bh, int a, int ho, int p);

    // Методы get (константные)
    int getSociality() const;
    int getMind() const;
    int getHealth() const;
    int getBadHabits() const;
    int getAppearance() const;
    int getHobbies() const;
    int getPersonality() const;

    // Методы set (не константные)
    void setSociality(int s);
    void setMind(int m);
    void setHealth(int h);
    void setBadHabits(int bh);
    void setAppearance(int a);
    void setHobbies(int ho);
    void setPersonality(int p);

    // Общий геттер
    void getAllAttributes(int &s, int &m, int &h, int &bh, int &a, int &ho, int &p) const;

    // Общий сеттер
    void setAllAttributes(int s, int m, int h, int bh, int a, int ho, int p);

    // Методы для изменения параметров
    void takeShower();                 // Помыться
    void kiss_b(Tyanki& other);        // Чмокнуть тяночку
    void doExercise();                 // Заниматься спортом
    void study();                      // Учиться
    void developHobby();               // Развивать хобби
    void quitBadHabits();              // Бросить вредные привычки
    void drink();                      // Выпить много алкоголя
    void talk(Boychiki& other);        // Поболтать с другом
};

#endif // BOYCHIKI_H_INCLUDED