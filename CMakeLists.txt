cmake_minimum_required(VERSION 3.10.2)

project("rrcmake")

add_executable(rrcmake main.c mystring.c)

install(TARGETS rrcmake RUNTIME DESTINATION bin)

