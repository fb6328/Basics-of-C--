// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp> // replace quotes with less than and greater than symbols
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;
int main()
{
    RenderWindow window(VideoMode(750, 600), "STICKFIGURES "); // the main window

    CircleShape circle(75.f); // girl's head
    circle.setPosition(Vector2f(100.f, 0.f));
    CircleShape circle1(75.f);
    circle1.setPosition(Vector2f(400.f, 0.f));

    // Gir's hands
    Vertex line[] = {Vertex(Vector2f(175.f, 150.f)), Vertex(Vector2f(50.f, 200.f))};
    Vertex line1[] = {Vertex(Vector2f(175.f, 150.f)), Vertex(Vector2f(320.f, 200.f))};
    // Girl's legs
    Vertex line2[] = {Vertex(Vector2f(150.f, 250.f)), Vertex(Vector2f(150.f, 375.f))};
    Vertex line3[] = {Vertex(Vector2f(200.f, 250.f)), Vertex(Vector2f(200.f, 375.f))};

    // boy's hands
    Vertex line4[] = {Vertex(Vector2f(470.f, 150.f)), Vertex(Vector2f(350.f, 200.f))};
    Vertex line5[] = {Vertex(Vector2f(470.f, 150.f)), Vertex(Vector2f(580.f, 200.f))};

    Vertex line6[] = {Vertex(Vector2f(470.f, 275.f)), Vertex(Vector2f(420.f, 400.f))};
    Vertex line7[] = {Vertex(Vector2f(470.f, 275.f)), Vertex(Vector2f(520.f, 400.f))};

    Vertex line8[] = {Vertex(Vector2f(470.f, 150.f)), Vertex(Vector2f(470.f, 275.f))};

    CircleShape triangle;
    triangle.setRadius(100.f);
    triangle.setPointCount(3);
    triangle.setPosition(75.f, 120.f); // girl's dress

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        // UPDATION OF CODE
        window.clear();
        // DRAWING

        window.draw(circle);
        window.draw(circle1);
        window.draw(triangle);
        window.draw(line, 2, sf::Lines);
        window.draw(line1, 2, sf::Lines);
        window.draw(line2, 2, sf::Lines);
        window.draw(line3, 2, sf::Lines);
        window.draw(line4, 2, sf::Lines);
        window.draw(line5, 2, sf::Lines);
        window.draw(line6, 2, sf::Lines);
        window.draw(line7, 2, sf::Lines);
        window.draw(line8, 2, sf::Lines);

        window.display();
    }
    return 0;
}