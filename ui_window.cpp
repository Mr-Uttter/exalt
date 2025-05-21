#include <iostream>
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"

int DrawWindow(){
    // Every Frame
    ImGui::Begin("Mitt första fönster");
    // Enter a text
    ImGui::Text("Hejsan svejsan");
    
    if (ImGui::Button("Tryck mig")) {
        std::cout << "Knappen trycktes!\n";
    }

    ImGui::End();
    return 0;
}
