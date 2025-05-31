#ifndef FILESSCREENVIEW_HPP
#define FILESSCREENVIEW_HPP

#include <gui_generated/filesscreen_screen/filesScreenViewBase.hpp>
#include <gui/filesscreen_screen/filesScreenPresenter.hpp>

class filesScreenView : public filesScreenViewBase
{
public:
    filesScreenView();
    virtual ~filesScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FILESSCREENVIEW_HPP
