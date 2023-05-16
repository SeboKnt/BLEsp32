cmake_minimum_required(VERSION 3.22)
set(BOARD esp32)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(BLEsp32)

target_sources(app PRIVATE src/main.c)


# Weitere Konfigurationsoptionen und Abhängigkeiten

# Beispiel für das Festlegen von C-Flags
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

# Beispiel für das Hinzufügen von Zephyr-Komponenten
#zephyr_library_include_directories(<component_include_directory>)

# Beispiel für das Hinzufügen externer Bibliotheken
#target_link_libraries(app PRIVATE <library_name>)

# Beispiel für das Hinzufügen eigener Header-Dateiverzeichnisse
#target_include_directories(app PRIVATE include)

# Beispiel für das Hinzufügen eigener Quellcodedateien in Unterordnern
#add_subdirectory(src/more_sources)
#target_sources(app PRIVATE src/more_sources/another_file.c)

# Beispiel für das Hinzufügen von spezifischen Flags
#zephyr_compile_options(-O3)

# Beispiel für das Setzen spezifischer C++-Standardoptionen
#set(CMAKE_CXX_STANDARD 17)

