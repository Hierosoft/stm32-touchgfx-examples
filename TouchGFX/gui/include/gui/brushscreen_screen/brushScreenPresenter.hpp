#ifndef BRUSHSCREENPRESENTER_HPP
#define BRUSHSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class brushScreenView;

class brushScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    brushScreenPresenter(brushScreenView& v);

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

    virtual ~brushScreenPresenter() {}

private:
    brushScreenPresenter();

    brushScreenView& view;
};

#endif // BRUSHSCREENPRESENTER_HPP
