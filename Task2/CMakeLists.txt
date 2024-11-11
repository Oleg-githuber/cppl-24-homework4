#минимальная версия cmake

set(CMAKE_C_COMPILER "C:\Users\Oleg\gcc\bin\gcc.exe")
set(CMAKE_CXX_COMPILER "C:\Users\Oleg\gcc\bin\g++.exe")

cmake_minimum_required(VERSION 3.10)
#имя проекта
project(Task2)
#добавляем поддиректорию, в которой будет catch2
add_subdirectory(catch2)
#добавляем цель - приложение, у которого исходник с единственным приложением
add_executable(Task2 main.cpp)
#линкуемся к catch2, в котором уже есть main
target_link_libraries(Task2 PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)