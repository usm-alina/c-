#include <iostream>
#include <vector>
#include "tyanki.h"
#include "boychiki.h"

// Функция для вывода всех характеристик
void printCharacteristics_t(const Tyanki& t) {
    std::cout << "Sociality: " << t.getSociality() << ", "
              << "Mind: " << t.getMind() << ", "
              << "Health: " << t.getHealth() << ", "
              << "Bad Habits: " << t.getBadHabits() << ", "
              << "Appearance: " << t.getAppearance() << ", "
              << "Hobbies: " << t.getHobbies() << ", "
              << "Personality: " << t.getPersonality() << std::endl;
}

void printCharacteristics_b(const Boychiki& b) {
    std::cout << "Sociality: " << b.getSociality() << ", "
              << "Mind: " << b.getMind() << ", "
              << "Health: " << b.getHealth() << ", "
              << "Bad Habits: " << b.getBadHabits() << ", "
              << "Appearance: " << b.getAppearance() << ", "
              << "Hobbies: " << b.getHobbies() << ", "
              << "Personality: " << b.getPersonality() << std::endl;
}

int main() {
    // Создаем персонажей
    Tyanki bmo4ka(9, 4, 8, 2, 9, 5, 6);    // красивая, ухоженная, общительная, но не сильно умная
    Tyanki botan(3, 9, 2, 1, 4, 0, 10);    // умная, не ухоженная, не общительная, немного вредных привычек, больная
    Tyanki sportswoman(6, 7, 9, 2, 7, 8, 5);  // спортивная, ухоженная, со средними показателями
    Tyanki animeTyan(8, 3, 5, 3, 10, 4, 2); // красивая, глупая, вредные привычки, не общительная
    Tyanki activistka(6, 8, 7, 1, 6, 7, 9);  // умная, социальная, активная, с некоторыми вредными привычками
    Tyanki pickMe(10, 5, 7, 5, 10, 4, 6);  // очень привлекательная, социальная, но с некоторыми вредными привычками

    Boychiki alcoholic(6, 1, 4, 10, 5, 3, 5);    // много пьет, общается с друзьями, не слишком умный
    Boychiki botanik(2, 10, 2, 0, 3, 3, 5);    // умный, не следит за собой, необщительный, есть чуть-чуть хобби
    Boychiki sportsman(5, 2, 10, 0, 8, 4, 4);  // спортивный, ухоженный, не слишком умный
    Boychiki doter(4, 4, 6, 8, 4, 10, 3);   // не слишком красивый, глуповат, вредные привычки, не общительный
    Boychiki activist(10, 5, 6, 3, 7, 8, 9);  // средний ум, социальный, активный, с некоторыми вредными привычками
    Boychiki musician(5, 2, 8, 1, 8, 4, 4);  // средние показатели, занимается хобби

    // Выводим начальные характеристики
    std::cout << "Starting Characteristics:" << std::endl;

    std::cout << "bmo4ka: ";
    printCharacteristics_t(bmo4ka);

    std::cout << "botan: ";
    printCharacteristics_t(botan);

    std::cout << "sportswoman: ";
    printCharacteristics_t(sportswoman);

    std::cout << "animeTyan: ";
    printCharacteristics_t(animeTyan);

    std::cout << "activistka: ";
    printCharacteristics_t(activistka);

    std::cout << "pickMe: ";
    printCharacteristics_t(pickMe);

    std::cout << "alcoholic: ";
    printCharacteristics_b(alcoholic);

    std::cout << "botanik: ";
    printCharacteristics_b(botanik);

    std::cout << "sportsman: ";
    printCharacteristics_b(sportsman);

    std::cout << "doter: ";
    printCharacteristics_b(doter);

    std::cout << "activist: ";
    printCharacteristics_b(activist);

    std::cout << "musician: ";
    printCharacteristics_b(musician);

    std::cout << std::endl;

    // Использование методов для персонажей

    // bmo4ka делает физзарядку
    bmo4ka.doExercise();
    std::cout << "\nbmo4ka does exercise:" << std::endl;
    printCharacteristics_t(bmo4ka);

    // botan изучает что-то новое
    botan.study();
    std::cout << "\nbotan studies:" << std::endl;
    printCharacteristics_t(botan);

    // sportswoman пытается бросить вредную привычку
    sportswoman.quitBadHabits();
    std::cout << "\nsportswoman quits bad habits:" << std::endl;
    printCharacteristics_t(sportswoman);

    // animeTyan принимает душ
    animeTyan.takeShower();
    std::cout << "\nanimeTyan takes a shower:" << std::endl;
    printCharacteristics_t(animeTyan);

    // activistka развивает новое хобби
    activistka.developHobby();
    std::cout << "\nactivistka develops a hobby:" << std::endl;
    printCharacteristics_b(activist);

    // pickMe встречает другого персонажа и целует его
    pickMe.kiss_t(botanik);
    std::cout << "\npickMe kisses botanik:" << std::endl;
    printCharacteristics_t(pickMe);
    printCharacteristics_b(botanik);

    // musician делает физзарядку
    musician.doExercise();
    std::cout << "\nmusician does exercise:" << std::endl;
    printCharacteristics_b(musician);

    // botanik изучает что-то новое
    botanik.study();
    std::cout << "\nbotanik studies:" << std::endl;
    printCharacteristics_b(botanik);

    // alcoholic пытается бросить вредную привычку
    alcoholic.quitBadHabits();
    std::cout << "\nalcoholic quits bad habits:" << std::endl;
    printCharacteristics_b(alcoholic);

    // doter принимает душ
    doter.takeShower();
    std::cout << "\ndoter takes a shower:" << std::endl;
    printCharacteristics_b(doter);

    // activist развивает новое хобби
    activist.developHobby();
    std::cout << "\nactivist develops a hobby:" << std::endl;
    printCharacteristics_b(activist);

    // musician встречает другого персонажа и целует его
    musician.kiss_b(botan);
    std::cout << "\nmusician kisses botan:" << std::endl;
    printCharacteristics_b(musician);
    printCharacteristics_t(botan);

    //botanik и musician поговорили
    printCharacteristics_b(sportsman);
    printCharacteristics_t(activistka);
    botanik.talk(musician);
    std::cout << "\nbotanik and musician has talk:" << std::endl;
    printCharacteristics_b(sportsman);
    printCharacteristics_t(activistka);

    std::cout << std::endl;

    // Выводим конечные характеристики
    std::cout << "Final Characteristics:" << std::endl;

    std::cout << "bmo4ka: ";
    printCharacteristics_t(bmo4ka);

    std::cout << "botan: ";
    printCharacteristics_t(botan);

    std::cout << "sportswoman: ";
    printCharacteristics_t(sportswoman);

    std::cout << "animeTyan: ";
    printCharacteristics_t(animeTyan);

    std::cout << "activistka: ";
    printCharacteristics_t(activistka);

    std::cout << "pickMe: ";
    printCharacteristics_t(pickMe);

    std::cout << "alcoholic: ";
    printCharacteristics_b(alcoholic);

    std::cout << "botanik: ";
    printCharacteristics_b(botanik);

    std::cout << "sportsman: ";
    printCharacteristics_b(sportsman);

    std::cout << "doter: ";
    printCharacteristics_b(doter);

    std::cout << "activist: ";
    printCharacteristics_b(activist);

    std::cout << "musician: ";
    printCharacteristics_b(musician);

    return 0;
}
