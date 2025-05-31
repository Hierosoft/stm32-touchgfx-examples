#ifndef STORAGESETTINGSSCREENVIEW_HPP
#define STORAGESETTINGSSCREENVIEW_HPP

#include <gui_generated/storagesettingsscreen_screen/storageSettingsScreenViewBase.hpp>
#include <gui/storagesettingsscreen_screen/storageSettingsScreenPresenter.hpp>

class storageSettingsScreenView : public storageSettingsScreenViewBase
{
public:
    storageSettingsScreenView();
    virtual ~storageSettingsScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // STORAGESETTINGSSCREENVIEW_HPP
