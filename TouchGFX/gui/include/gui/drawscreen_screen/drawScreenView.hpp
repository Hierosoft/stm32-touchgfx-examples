#ifndef DRAWSCREENVIEW_HPP
#define DRAWSCREENVIEW_HPP

#include <gui_generated/drawscreen_screen/drawScreenViewBase.hpp>
#include <gui/drawscreen_screen/drawScreenPresenter.hpp>

class drawScreenView : public drawScreenViewBase
{
public:
    drawScreenView();
    virtual ~drawScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DRAWSCREENVIEW_HPP
