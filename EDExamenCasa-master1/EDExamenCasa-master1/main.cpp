#include <iostream>
#include <stack>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;


//funcion extraida de: http://horiacondrea.com/2013/03/14/quick-tip-sprite-cliked-in-sfml/

bool ClickTrigger(sf::Sprite &av_Sprite, sf::RenderWindow &av_Window)
{
    int mouseX = sf::Mouse::getPosition().x;
    int mouseY = sf::Mouse::getPosition().y;

    sf::Vector2i windowPosition = av_Window.getPosition();

    if(mouseX > av_Sprite.getPosition().x + windowPosition.x && mouseX < ( av_Sprite.getPosition().x + av_Sprite.getGlobalBounds().width + windowPosition.x)
        && mouseY > av_Sprite.getPosition().y + windowPosition.y + 30  && mouseY < ( av_Sprite.getPosition().y + av_Sprite.getGlobalBounds().height + windowPosition.y + 30) )
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            return true;
        }
        return false;
    }
    return false;
}

int main()
{
    //mi primera baraja
    stack<string> pila1;
    stack<string> pila2;
    //mi segunda baraja
    stack<string> pila3;
    stack<string> pila4;
    //mi tecer baraja
    stack<string> pila5;
    stack<string> pila6;

    //asignacion de imagenes para la pila 1
    pila1.push("kp1.png");
    pila1.push("kp2.png");
    pila1.push("kp3.png");
    pila1.push("kp4.png");
    pila1.push("kp5.png");
    pila1.push("kp6.png");
    pila1.push("kp7.png");
    pila1.push("kp8.png");
    pila1.push("kp9.png");
    pila1.push("kp10.png");

    //asignacion de imagenes para la pila 2
    pila2.push("lp1.png");
    pila2.push("lp2.png");
    pila2.push("lp3.png");
    pila2.push("lp4.png");
    pila2.push("lp5.png");
    pila2.push("lp6.png");
    pila2.push("lp7.png");
    pila2.push("lp8.png");
    pila2.push("lp9.png");
    pila2.push("lp10.png");

    //asignacion de imagenes para la pila 3
    pila3.push("kp1.png");
    pila3.push("kp2.png");
    pila3.push("kp3.png");
    pila3.push("kp4.png");
    pila3.push("kp5.png");
    pila3.push("kp6.png");
    pila3.push("kp7.png");
    pila3.push("kp8.png");
    pila3.push("kp9.png");
    pila3.push("kp10.png");
    //asignacion de imagenes para la pila 4
    pila4.push("kp1.png");
    pila4.push("kp2.png");
    pila4.push("lp3.png");
    pila4.push("lp4.png");
    pila4.push("lp5.png");
    pila4.push("lp6.png");
    pila4.push("lp7.png");
    pila4.push("lp8.png");
    pila4.push("lp9.png");
    pila4.push("lp10.png");

    //asignacion de imagenes para la pila 5
    pila5.push("kp1.png");
    pila5.push("kp2.png");
    pila5.push("kp3.png");
    pila5.push("kp4.png");
    pila5.push("kp5.png");
    pila5.push("kp6.png");
    pila5.push("kp7.png");
    pila5.push("kp8.png");
    pila5.push("kp9.png");
    pila5.push("kp10.png");
    //asignacion de imagenes para la pila 6
    pila6.push("lp1.png");
    pila6.push("lp2.png");
    pila6.push("lp3.png");
    pila6.push("lp4.png");
    pila6.push("lp5.png");
    pila6.push("lp6.png");
    pila6.push("lp7.png");
    pila6.push("lp8.png");
    pila6.push("lp9.png");
    pila6.push("lp10.png");

    sf::RenderWindow window(sf::VideoMode(650,650), "Solitario");

    //creacion de textura para la pila 1
    sf::Texture texturep1;
    texturep1.loadFromFile(pila1.top()); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep1(texturep1); //crea el sprite segun la textura asignada anteriormente
    spritep1.setPosition(sf::Vector2f(10,10)); //posicion actual del sprite

    //creacion de textura para la pila 2
    sf::Texture texturep2;
    texturep2.loadFromFile(pila2.top()); //carga la textura de acuerdo al elemento top de la pila 2
    sf::Sprite spritep2(texturep2); //crea el sprite segun la textura asignada anteriormente
    spritep2.setPosition(sf::Vector2f(10,310)); //posicion actual del sprite

    //creacion de textura para la pila 3
    sf::Texture texturep3;
    texturep3.loadFromFile(pila3.top()); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep3(texturep3); //crea el sprite segun la textura asignada anteriormente
    spritep3.setPosition(sf::Vector2f(210,10)); //posicion actual del sprite

    //creacion de textura para la pila 4
    sf::Texture texturep4;
    texturep4.loadFromFile(pila4.top()); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep4(texturep4); //crea el sprite segun la textura asignada anteriormente
    spritep4.setPosition(sf::Vector2f(210,310)); //posicion actual del sprite

    //creacion de textura para la pila 5
    sf::Texture texturep5;
    texturep5.loadFromFile(pila5.top()); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep5(texturep5); //crea el sprite segun la textura asignada anteriormente
    spritep5.setPosition(sf::Vector2f(410,10)); //posicion actual del sprite

    //creacion de textura para la pila 6
    sf::Texture texturep6;
    texturep6.loadFromFile(pila6.top()); //carga la textura de acuerdo al elemento top de la pila 1
    sf::Sprite spritep6(texturep6); //crea el sprite segun la textura asignada anteriormente
    spritep6.setPosition(sf::Vector2f(410,310)); //posicion actual del sprite

    //creacion de fondo
    sf::Texture fondo;
    fondo.loadFromFile("Green.jpg"); //http://images.athleo.net/backgrounds/Green.jpg
    sf::Sprite sfondo(fondo);

    //extraido de: http://en.sfml-dev.org/forums/index.php?topic=15282.0

    sf::SoundBuffer buffer;
    if(!buffer.loadFromFile("jugar.wav")) //http://www.youtube.com/watch?v=siVDW-6vzr8
     {
        return -1;
    }
    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();
    sound.setLoop(true);
    sound.setPitch(1.0f);



    // declarando flag para cambiar textura
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int flag4 = 0;
    int flag5 = 0;
    int flag6 = 0;


    while (window.isOpen())
    {
        window.draw(sfondo,sf::RenderStates::Default); //se dibuja el fondo en pantalla

        window.draw(spritep1,sf::RenderStates::Default); //se dibuja el sprite de la pila 1 en pantalla
        window.draw(spritep2,sf::RenderStates::Default); //se dibuja el sprite de la pila 2 en pantalla

        window.draw(spritep3,sf::RenderStates::Default); //se dibuja el sprite de la pila 3 en pantalla
        window.draw(spritep4,sf::RenderStates::Default); //se dibuja el sprite de la pila 4 en pantalla

        window.draw(spritep5,sf::RenderStates::Default); //se dibuja el sprite de la pila 5 en pantalla
        window.draw(spritep6,sf::RenderStates::Default); //se dibuja el sprite de la pila 6 en pantalla

        window.display();

        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) //si se cierra manualmente
            {
                window.close();
                cout<<"usted cerro el programa dandole clic al boton";
            }

            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)) //si se presiona ESC
            {
                window.close();
                cout<<"usted cerro el programa usando ESC: ";
            }

            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Space)) //barra espaciadora activa musica
            {
                sound.play();
                sound.setLoop(true);

             }
             if((event.type== sf::Event::KeyPressed)&& (event.key.code == sf::Keyboard::P))
             {
                 sound.pause();
             }

            if (ClickTrigger(spritep1,window)) //verifica si se le da click a la primera pila
            {
                int tam1 = pila1.size(); //guarda el tamano de la pila 1 segun aumenta y decrece

                if(tam1 > 1) //permite vaciar la pila hasta que quede una carta
                {
                    pila2.push(pila1.top()); //se agrega el top de la pila 1 a la pila 2
                    pila1.pop(); //se saca el elemento de la pila 1
                    flag1 = 1; //para luego cambiar texturas
                }
            }

            if (ClickTrigger(spritep2,window)) //verifica si se le da click a la segunda pila
            {
                int tam2 = pila2.size(); //guarda el tamano de la pila 2 segun aumenta y decrece

                if(tam2 > 1) //permite vaciar la pila hasta que quede una carta
                {
                    pila1.push(pila2.top()); //se agrega el top de la pila 2 a la pila 1
                    pila2.pop(); //se saca el elemento de la pila 2
                    flag2 =1; //para luego cambiar texturas
                }
            }


            if (ClickTrigger(spritep3,window)) //verifica si se le da click a la segunda pila
            {
                int tam3 = pila3.size(); //guarda el tamano de la pila 3 segun aumenta y decrece

                if(tam3 > 1) //permite vaciar la pila hasta que quede una carta
                {
                    pila4.push(pila3.top()); //se agrega el top de la pila 4 a la pila 3
                    pila3.pop(); //se saca el elemento de la pila 3
                    flag3 = 1; //para luego cambiar texturas
                }
            }

            if (ClickTrigger(spritep4,window)) //verifica si se le da click a la segunda pila
            {
                int tam4 = pila4.size(); //guarda el tamano de la pila 2 segun aumenta y decrece

                if(tam4 > 1) //permite vaciar la pila hasta que quede una carta
                {
                    pila3.push(pila4.top()); //se agrega el top de la pila 2 a la pila 1
                    pila4.pop(); //se saca el elemento de la pila 2
                    flag4 = 1; //para luego cambiar texturas
                }
            }

            if (ClickTrigger(spritep5,window)) //verifica si se le da click a la segunda pila
            {
                int tam5 = pila5.size(); //guarda el tamano de la pila 2 segun aumenta y decrece

                if(tam5 > 1) //permite vaciar la pila hasta que quede una carta
                {
                    pila6.push(pila5.top()); //se agrega el top de la pila 2 a la pila 1
                    pila5.pop(); //se saca el elemento de la pila 2
                    flag5 = 1; //para luego cambiar texturas
                }
            }


            if (ClickTrigger(spritep6,window)) //verifica si se le da click a la segunda pila
            {
                int tam6 = pila6.size(); //guarda el tamano de la pila 2 segun aumenta y decrece

                if(tam6 > 1) //permite vaciar la pila hasta que quede una carta
                {
                    pila5.push(pila6.top()); //se agrega el top de la pila 2 a la pila 1
                    pila6.pop(); //se saca el elemento de la pila 2
                    flag6 = 1; //para luego cambiar texturas
                }
            }

        }


        if(flag1==1 || flag2 == 1) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep1.loadFromFile(pila1.top()); //a la textura de la pila 1 se le asigna el nuevo top de la pila 1
            texturep2.loadFromFile(pila2.top()); //a la textura de la pila 2 se le asigna el nuevo top de la pila 2
        }

        if(flag3==1 || flag4 == 1) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep3.loadFromFile(pila3.top()); //a la textura de la pila 3 se le asigna el nuevo top de la pila 3
            texturep4.loadFromFile(pila4.top()); //a la textura de la pila 4 se le asigna el nuevo top de la pila 4
        }

        if(flag5==1 || flag6 == 1) //si hubo pop/push en la cualquiera de las pilas
        {
            texturep5.loadFromFile(pila5.top()); //a la textura de la pila 5 se le asigna el nuevo top de la pila 5
            texturep6.loadFromFile(pila6.top()); //a la textura de la pila 6 se le asigna el nuevo top de la pila 6        }


        }
    }
    return 0;
}
