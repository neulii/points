#include "player.h"
#include "wx/wx.h"


Player::Player(std::string name)
    : name(name),actualPoints(0) 
{

    pointList = new std::vector<int>();
    


}
