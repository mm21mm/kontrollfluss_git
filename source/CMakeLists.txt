cmake_minimum_required(VERSION 3.10)
project(Kontrollfluss)

set(CMAKE_CXX_STANDARD 17)

# Добавляем исполняемые файлы для задач
add_executable(vergleich vergleich.cpp)
add_executable(multitabelle multitabelle.cpp)
add_executable(prim prim.cpp)
add_executable(wurzel wurzel.cpp)
add_executable(taschenrechner taschenrechner.cpp)

