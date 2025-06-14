/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PALETTESCREENVIEWBASE_HPP
#define PALETTESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/palettescreen_screen/paletteScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/canvas/Shape.hpp>
#include <touchgfx/widgets/canvas/PainterRGB888.hpp>
#include <touchgfx/mixins/Draggable.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>

class paletteScreenViewBase : public touchgfx::View<paletteScreenPresenter>
{
public:
    paletteScreenViewBase();
    virtual ~paletteScreenViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ButtonWithIcon settingsButton;
    touchgfx::ButtonWithIcon filesButton;
    touchgfx::ButtonWithIcon backButton;
    touchgfx::ButtonWithIcon brushButton;
    touchgfx::ButtonWithIcon previousPaletteButton;
    touchgfx::ButtonWithIcon nextPaletteButton;
    touchgfx::TextArea editPaletteCaptionTA;
    touchgfx::TextArea fullPaletteHueCaptionTA;
    touchgfx::TextArea paletteNameCaptionTA;
    touchgfx::ButtonWithLabel newPaletteButton;
    touchgfx::ButtonWithLabel deletePaletteButton;
    touchgfx::Slider fullPaletteHSlider;
    touchgfx::Box fullPaletteOutline;
    touchgfx::Image fullPaletteImage;
    touchgfx::BoxWithBorder paletteBorder;
    touchgfx::Draggable< touchgfx::Shape<10> > fullPaletteSVCursor;
    touchgfx::PainterRGB888 fullPaletteSVCursorPainter;
    touchgfx::Image paletteImage;
    touchgfx::ScalableImage scalableImage1;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<paletteScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<paletteScreenViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // PALETTESCREENVIEWBASE_HPP
