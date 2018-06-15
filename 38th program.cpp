#include "msoftcon.h"
using namespace std;
class circule{
protected:
    int xCo,yCo;
    int radius;
    color fillcolor;
    fstyle fillstyle;
public:
    circule( int x, int y ,int r, color fc, fstyle fs);
    {
        xCo(x),yCo(y), radius(r), fillcolor(fc), fillstyle(fs)
    }
    void draw()
    {

        set_color(fillcolor);
        set_fill_style(fillstyle);
        draw_cicrule(xCo, yCo ,radius);
    }
};
int main()
{

    init_graphics();
    circule c1(15,7,5, cBlue,X_FILL);
    circule c2(41,12,7, cBlue,X_FILL);
    circule c2(65,18,4, cBlue,X_FILL);

    ci.draw();
c2.draw();
c3.draw();
set_color_pos(1, 25);
}

