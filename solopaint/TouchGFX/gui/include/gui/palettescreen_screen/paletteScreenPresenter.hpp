#ifndef PALETTESCREENPRESENTER_HPP
#define PALETTESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class paletteScreenView;

class paletteScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    paletteScreenPresenter(paletteScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~paletteScreenPresenter() {}

private:
    paletteScreenPresenter();

    paletteScreenView& view;
};

#endif // PALETTESCREENPRESENTER_HPP
