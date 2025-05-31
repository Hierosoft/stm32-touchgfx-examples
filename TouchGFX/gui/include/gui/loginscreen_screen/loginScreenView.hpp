#ifndef LOGINSCREENVIEW_HPP
#define LOGINSCREENVIEW_HPP

#include <gui_generated/loginscreen_screen/loginScreenViewBase.hpp>
#include <gui/loginscreen_screen/loginScreenPresenter.hpp>

class loginScreenView : public loginScreenViewBase
{
public:
    loginScreenView();
    virtual ~loginScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LOGINSCREENVIEW_HPP
