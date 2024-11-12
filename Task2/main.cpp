#include <iostream>

#include <catch2/catch_test_macros.hpp>

#include <cstdint>
#include "myList.h"


TEST_CASE("List") {
    List list;	// Создание списка
    SECTION("Empty list")
    {
        INFO("Empty list");
		// Неудачные проверки
        REQUIRE_THROWS_AS(list.PopBack() == 0, std::runtime_error);
        REQUIRE_THROWS_AS(list.PopFront() == 0, std::runtime_error);
    }
	
	// Добавление элементов в список
    list.PushBack(1);
    list.PushBack(2);
    list.PushFront(3);
    SECTION("Not empty list")	// Извлечение элементов из списка
    {
        INFO("Not empty list");
        REQUIRE(list.PopBack() == 2);
        REQUIRE(list.PopFront() == 3);
        REQUIRE(list.PopFront() == 1);
        INFO("Empty list");		// Список пуст
        REQUIRE(list.Empty() == true);
        // Неудачные проверки
        REQUIRE_THROWS_AS(list.PopBack() == 0, std::runtime_error);
        REQUIRE_THROWS_AS(list.PopFront() == 0, std::runtime_error);
    }
}