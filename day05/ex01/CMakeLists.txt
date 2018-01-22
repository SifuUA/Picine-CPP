cmake_minimum_required(VERSION 3.9)
project(CPP)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPP main.cpp Bureaucrat.h Bureaucrat.cpp Form.cpp Form.h)
