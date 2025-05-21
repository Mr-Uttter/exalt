#include <iostream>
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"

bool show_greeting = false;

int MenuBar(){
    if (ImGui::BeginMainMenuBar()) {
        if (ImGui::BeginMenu("Arkiv")) {
            if (ImGui::MenuItem("Avsluta")) {
                CloseProgram();
            }
            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }
}


int DrawWindow(){
    // Every Frame
    ImGui::Begin("Mitt första fönster");
    // Enter a text
    ImGui::Text("Hejsan svejsan");
    ImGui::Checkbox("Hälsningsfras", &show_greeting);
        if (show_greeting == true){
            ImGui::Begin("Hejsan");
            if(ImGui::Button("Stäng")){
                show_greeting = false;
            }
            ImGui::End();
        }
            
    if (ImGui::Button("Tryck mig")) {
        std::cout << "Knappen trycktes!\n";
    }

    ImGui::End();
    return 0;
}
