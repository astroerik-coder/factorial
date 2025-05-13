cmake_minimum_required(VERSION 3.14)
project(factorial)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# Evita instalar GTest al sistema
set(INSTALL_GTEST OFF CACHE BOOL "Disable installation of googletest")
FetchContent_MakeAvailable(googletest)

# Activar testing
enable_testing()

# -----------------------------------------------
# Biblioteca header-only
# -----------------------------------------------
add_library(factorial INTERFACE)
target_include_directories(factorial INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# -----------------------------------------------
# Ejecutable principal (src/main.cpp)
# -----------------------------------------------
add_executable(FactorialApp src/main.cpp)
target_link_libraries(FactorialApp PRIVATE factorial)
target_include_directories(FactorialApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# -----------------------------------------------
# Tests con GoogleTest (tests/test_factorial.cpp)
# -----------------------------------------------
add_executable(UnitTests tests/test_factorial.cpp)
target_link_libraries(UnitTests PRIVATE gtest_main factorial)
target_include_directories(UnitTests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Detectar automáticamente los tests
include(GoogleTest)
gtest_discover_tests(UnitTests)
