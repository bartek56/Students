cmake_minimum_required(VERSION 2.8)
set (CMAKE_CXX_STANDARD 14)

project(students)
add_executable(${PROJECT_NAME} "main.cpp" "functions.cpp" "students.cpp" "employees.cpp" "users.cpp" )
