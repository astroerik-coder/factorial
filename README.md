# Proyecto Factorial en C++ 🧮

Este proyecto implementa una función para calcular el factorial de un número en C++, junto con un programa interactivo y pruebas unitarias usando **Google Test**.

---

## 📁 Estructura del proyecto


factorial/
├── include/
│ └── factorial.h # Declaración de la función factorial
├── src/
│ └── factorial.cpp # Implementación de la función factorial
├── tests/
│ └── test_factorial.cpp # Pruebas unitarias con Google Test
├── external/
│ └── googletest/ # Submódulo o copia local de Google Test
├── CMakeLists.txt # Archivo de configuración para CMake
└── build/ # Carpeta de compilación generada por CMake


---

## ⚙️ Requisitos

- MSYS2 (con entorno `ucrt64`)
- `make`, `cmake`, `g++`, `gcc`
- Google Test (incluido en `external/` o añadido como submódulo)

Instalación en MSYS2:
```bash
pacman -Syu
pacman -S base-devel mingw-w64-ucrt-x86_64-cmake mingw-w64-ucrt-x86_64-toolchain


🧪 Compilación y ejecución
1. Entrar al entorno MSYS2 UCRT64
🛑 No uses PowerShell. Abre MSYS2 UCRT64 desde el menú Inicio.

2. Generar los archivos con CMake:
- cd /d/GitHub/factorial
- mkdir -p build
- cd build
- cmake -G "Unix Makefiles" ..
- make
3. Ejecutar el programa principal:
- ./FactorialApp
4. Ejecutar las pruebas unitarias:
- ./UnitTests
🔍 Sobre las pruebas
Se utilizan pruebas unitarias con Google Test que validan:

- Casos base (0!, 1!)
- Valores positivos (5!)
- Casos inválidos (números negativos)
- Test que debe fallar a propósito (factorial(4) == 25)


Casos de prueba unitarias:

TEST(FactorialTest, PositiveCases) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(5), 120);
}

TEST(FactorialTest, NegativeInput) {
    EXPECT_EQ(factorial(-1), -1);
}


Este proyecto fue realizado como ejercicio de práctica en C++ con pruebas unitarias.

