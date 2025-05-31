#ifndef PALETTESCREENVIEW_HPP
#define PALETTESCREENVIEW_HPP

#include <gui_generated/palettescreen_screen/paletteScreenViewBase.hpp>
#include <gui/palettescreen_screen/paletteScreenPresenter.hpp>

class paletteScreenView : public paletteScreenViewBase
{
public:
    paletteScreenView();
    virtual ~paletteScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PALETTESCREENVIEW_HPP
