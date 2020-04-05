set(SFML_LIBRARY_DIR "/usr/lib")
set(TARGET 02)

add_executable(${TARGET} main.cpp)
link_directories(SFML_LIBRARY_DIR)
find_package(
    SFML 2.5.1 COMPONENTS 
    system 
    window 
    graphics 
    network 
    audio 
    REQUIRED
)

target_link_libraries(${TARGET} 
    sfml-graphics 
    sfml-window 
    sfml-system 
    sfml-audio
    sfml-network
)

target_compile_features(${TARGET} PUBLIC cxx_std_17)