#include "imgui.h"
#include "imgui-SFML.h"

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

// TODO: Implement Operators for Vec.
class Vec2 {
  public: 
    float x = 0.0f, y = 0.0f;
    public Vec2(float xin, float yin) : x(xin), y(yin) {}
}; 


// TODO: Create Data Structure for IK. 
class IkChain {
  
};

// TODO: Create ECS 


int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "ImGui + SFML = <3");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    sf::CircleShape testCircle(20.f);
    testCircle.setFillColor(sf::Color::Green);

    float x = 0.0f, y = 0.0f;

    sf::Clock deltaClock;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(window, event);
            
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                x++;
            }

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        //ImGui::ShowDemoWindow();

        //ImGui::Begin("Hello, world!");
        //ImGui::Button("Look at this pretty button");
        //ImGui::End();
        
        testCircle.setPosition(x, y);

        window.clear();
        window.draw(testCircle);
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}
