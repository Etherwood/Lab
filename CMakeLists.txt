cmake_minimum_required(VERSION 3.21)


project(ASPM181)


add_executable(main main.cpp initialization.cpp)

add_subdirectory(Math_func)

add_subdirectory(TEST)


add_subdirectory(googletest-main)



target_link_libraries(main math_part)

target_link_libraries(main math_part)




target_include_directories(main PUBLIC "D:\pozd\boost_1_77_0")


target_link_directories(main PUBLIC "D:\pozd\boost_1_77_0\stage\lib")

