cmake_minimum_required(VERSION 3.10)
project(ALSE_Corte3_Entrega1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(underground_system
    leetcode/1396_underground/underground_system.cpp)

add_executable(atm
    leetcode/2241_atm/atm.cpp)

add_executable(auction_system
    leetcode/3815_auction/auction_system.cpp)

add_executable(meetup
    exercism/meetup/main.cpp)
target_include_directories(meetup PRIVATE exercism/meetup)

add_executable(clock
    exercism/clock/main.cpp)
target_include_directories(clock PRIVATE exercism/clock)
