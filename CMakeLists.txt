cmake_minimum_required(VERSION 3.10)
project(script_gui)

set(CMAKE_CXX_STANDARD 17)

# Inkludera ImGui-filer
set(IMGUI_DIR ext/imgui)
set(IMGUI_SOURCES
    ${IMGUI_DIR}/imgui.cpp
    ${IMGUI_DIR}/imgui_draw.cpp
    ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp
    ${IMGUI_DIR}/backends/imgui_impl_glfw.cpp
    ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
) 

include_directories(
    ${IMGUI_DIR}
    ${IMGUI_DIR}/backends
    ext/glfw/include
)

add_executable(script_gui
    main.cpp
    ui_window.cpp
    ${IMGUI_SOURCES}
)

# Länka GLFW och OpenGL
add_subdirectory(ext/glfw)
target_link_libraries(script_gui glfw opengl32)
