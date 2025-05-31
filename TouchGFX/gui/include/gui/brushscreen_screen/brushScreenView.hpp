#ifndef BRUSHSCREENVIEW_HPP
#define BRUSHSCREENVIEW_HPP

#include <gui_generated/brushscreen_screen/brushScreenViewBase.hpp>
#include <gui/brushscreen_screen/brushScreenPresenter.hpp>

class brushScreenView : public brushScreenViewBase
{
public:
    brushScreenView();
    virtual ~brushScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BRUSHSCREENVIEW_HPP
