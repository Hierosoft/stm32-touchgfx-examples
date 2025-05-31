#ifndef STORAGESETTINGSSCREENPRESENTER_HPP
#define STORAGESETTINGSSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class storageSettingsScreenView;

class storageSettingsScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    storageSettingsScreenPresenter(storageSettingsScreenView& v);

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

    virtual ~storageSettingsScreenPresenter() {}

private:
    storageSettingsScreenPresenter();

    storageSettingsScreenView& view;
};

#endif // STORAGESETTINGSSCREENPRESENTER_HPP
