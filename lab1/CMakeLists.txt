cmake_minimum_required(VERSION 3.15)
project(lab1 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main
  src/main.cpp
  src/assets/Base/Base.cpp
  src/assets/Speaker/Speaker.cpp
  src/assets/Keeper/Keeper.cpp
  src/assets/Administrtion/Administrtion.cpp
  src/assets/Conference/Conference.cpp
)
