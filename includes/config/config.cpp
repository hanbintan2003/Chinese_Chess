#include "config.h"

#include <utility>
Config config = Config();

void Config::_set_texture(){
    // background

    auto back = make_shared<sf::Texture>();
    if (r!=60) back->loadFromFile("../assets/chess/background.jpeg");
    else back->loadFromFile("../assets/chess/backgroundM.jpeg");
    this->_texture_map.insert({"0",back});

    //chess
    auto bc = make_shared<sf::Texture>();
    bc->loadFromFile("../assets/chess/blackChariot.png");
    this->_texture_map.insert({"bc",bc});

    auto bj = make_shared<sf::Texture>();
    bj->loadFromFile("../assets/chess/blackGeneral.png");
    this->_texture_map.insert({"bj",bj});

    auto bm = make_shared<sf::Texture>();
    bm->loadFromFile("../assets/chess/blackHorse.png");
    this->_texture_map.insert({"bm",bm});

    auto bp = make_shared<sf::Texture>();
    bp->loadFromFile("../assets/chess/BlackCannon.png");
    this->_texture_map.insert({"bp",bp});

    auto bs = make_shared<sf::Texture>();
    bs->loadFromFile("../assets/chess/blackAdvisor.png");
    this->_texture_map.insert({"bs",bs});

    auto bx = make_shared<sf::Texture>();
    bx->loadFromFile("../assets/chess/blackElephant.png");
    this->_texture_map.insert({"bx",bx});

    auto bz = make_shared<sf::Texture>();
    bz->loadFromFile("../assets/chess/blackSolider.png");
    this->_texture_map.insert({"bz",bz});

    auto rb = make_shared<sf::Texture>();
    rb->loadFromFile("../assets/chess/redSoldier.png");
    this->_texture_map.insert({"rb",rb});

    auto rc = make_shared<sf::Texture>();
    rc->loadFromFile("../assets/chess/redChariot.png");
    this->_texture_map.insert({"rc",rc});

    auto rj = make_shared<sf::Texture>();
    rj->loadFromFile("../assets/chess/redGeneral.png");
    this->_texture_map.insert({"rj",rj});

    auto rm = make_shared<sf::Texture>();
    rm->loadFromFile("../assets/chess/redHorse.png");
    this->_texture_map.insert({"rm",rm});

    auto rp = make_shared<sf::Texture>();
    rp->loadFromFile("../assets/chess/redCannon.png");
    this->_texture_map.insert({"rp",rp});

    auto rs = make_shared<sf::Texture>();
    rs->loadFromFile("../assets/chess/redAdvisor.png");
    this->_texture_map.insert({"rs",rs});

    auto rx = make_shared<sf::Texture>();
    rx->loadFromFile("../assets/chess/redElephant.png");
    this->_texture_map.insert({"rx",rx});
}

void Config::_set_font(){
    // set font example
    auto f1 = make_shared<sf::Font>();
    f1->loadFromFile("../assets/arial.ttf");
    this->_font_map[ARIAL] = f1;
}
