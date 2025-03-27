add_executable(initialisations initialisations.cpp)

target_include_directories(initialisations PUBLIC ${ARMADILLO_INCLUDE_DIRS})
target_link_libraries(initialisations PUBLIC ${ARMADILLO_LIBRARIES} $<LINK_ONLY:MKL::MKL>)