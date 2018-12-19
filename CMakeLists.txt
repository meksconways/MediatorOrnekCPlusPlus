cmake_minimum_required(VERSION 3.13)
project(MediatorOrnek)

set(CMAKE_CXX_STANDARD 11)

add_executable(MediatorOrnek main.cpp Oda.cpp Oda.h SohbetOdasi.cpp SohbetOdasi.h Katilimci.cpp Katilimci.h NormalKatilimci.cpp NormalKatilimci.h Moderator.cpp Moderator.h)