#ifndef FILESSCREENPRESENTER_HPP
#define FILESSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class filesScreenView;

class filesScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    filesScreenPresenter(filesScreenView& v);

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

    virtual ~filesScreenPresenter() {}

private:
    filesScreenPresenter();

    filesScreenView& view;
};

#endif // FILESSCREENPRESENTER_HPP
