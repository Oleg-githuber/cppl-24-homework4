#include <iostream>

#include <catch2/catch_test_macros.hpp>

#include <cstdint>
#include "myList.h"


TEST_CASE("List") {
    List list;  // Создание экземпляра класса List
    REQUIRE(list.Empty() == true);
    REQUIRE(list.Size() == 0);

    // Добавление нескольких нод
    list.PushBack(1);
    list.PushBack(2);
    list.PushFront(3);
    REQUIRE(list.Empty() == false);
    REQUIRE(list.Size() == 3);

    // Очистка списка
    list.Clear();
    REQUIRE(list.Empty() == true);
    REQUIRE(list.Size() == 0);
}