cmake_minimum_required(VERSION 3.10)
project(Kontrollfluss)

set(CMAKE_CXX_STANDARD 17)


# Создание исполняемого файла из трех файлов
add_executable(overload overload.cpp)
add_executable(in_out in_out.cpp)
add_executable(integrate integrate.cpp)
