#ifndef __EconomyGraph_HPP
#define __EconomyGraph_HPP

#include "gui/Component.hpp"
#include "gui/XmlReader.hpp"

class EconomyGraph : public Component {
public:
    EconomyGraph();
    ~EconomyGraph();

    void parse(XmlReader& reader);
    void draw(Painter& painter);
    void updateData();    
    void newFPS( int frame );
private:
    static const int border = 5;
    int* fps;
};

EconomyGraph* getEconomyGraph();

#endif