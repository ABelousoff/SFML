set(SFML_LIBRARY_DIR "/usr/lib")

add_executable(01 main.cpp)
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

target_link_libraries(01
    sfml-graphics 
    sfml-window 
    sfml-system 
    sfml-audio
    sfml-network
)

target_compile_features(01 PUBLIC cxx_std_17)