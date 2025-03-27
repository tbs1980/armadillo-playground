cmake_minimum_required(VERSION 3.15)

project(armadillo LANGUAGES CXX)

find_package(MKL CONFIG REQUIRED)
message(STATUS "${MKL_IMPORTED_TARGETS}") #Provides available list of targets based on input

find_package(Armadillo REQUIRED)

add_subdirectory(numpy_comparison)
