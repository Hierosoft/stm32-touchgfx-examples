# Solopaint - Widgets


## drawScreen
- The following separate blocks are used for caching chunks of large images, and are normally all filled unless the images is smaller than the screen or zoomed out:
  - 1st row: image1 to image10
  - 2nd row: image1_1 to image10_1
  - 3rd row: image1_2 to image10_2
   - and so on...
- paletteImage: clicking it should choose a color.
- toolboxButton: Should go to toolboxScreen
- paletteButton: Should go to paletteScreen
- Zoom with zoomInButton and zoomOutButton.
- should utilize colorInLinesToggle value from settingsScreen if a coloring book layer is loaded.
- should utilize showColoringBookLayerToggle value from settingsScreen if a coloring book layer is loaded.

## paletteScreen
- On load, set the location of the fullPaletteSVCursor and fullPaletteHSlider by converting the current brushColor to HSV.
  - x is value, and y is saturation (from bottom to top). Use fullPaletteOutline as the guidance for where to place the fullPaletteSVCursor.
  - paletteImage is drawn on using the currently selected brush, using the value and saturation of the given x and y value respectively. The input Hue is the value of fullPaletteHSlider. 
  - colorImage should be generated, 48x48, filled with the brushColor
  - fullPaletteSVCursor has the "Draggable" mixin, so that should be handled and center should be limited to paletteImage top right to bottom left.
- paletteBorder is just for layout & determining the size of paletteImage. It should be on the bottom layer, but there is no option to change widget order in TouchGFX Designer (order you add widgets is permanent...)
- paletteNameCaptionTA should show the number of the current palette as text.
- Navigate between palettes: previousPaletteButton nextPaletteButton 

## brushScreen
- brushScrollSlider should scroll through available brushes. It should set all of the following when changed:
  - brushNameTA (set text to brush index + 1)
  - brushBack1 through 3 go from middle to left, and show previous brushes not currently selected.
  - brushForward1 through 3 go from middle to right, and show next brushes not currently selected.
  - editBrushImage allows the user to edit the currently selected brush.
    - Default brushes are generated brushes (such as round one)
- brushMakerButton should overwrite the brushMakerBrush with the currently selected editBrushImage.
  - It should also change statusTA's text to "Brush %s can now be used as the edit brush" where %s is the text of brushNameTA.
  - The brushMakerBrush is used to draw on the editBrushImage (to make it custom)
    - But if the selected brush is a generated brush, automatically copy it and set editBrushImage to the copy immediately.
- backButton should go to drawScreen.
  - should update drawScreen's paletteImage to reflect 
  - should update drawScreen's brush, or drawScreen can use editBrushImage directly if possible.
- settingsButton should go to settingsScreen
- hardnessSlider should control the radius of where the generated brush begins to become transparent.
- overspraySlider should control the exponent of the generated brush's falloff (curve from hard part of brush to transparent edge, where 50 is linear, 100 is exponential, and 0 is logarithmic).

## settingsScreen
- toolboxButton should go to toolboxScreen
- backButton should go to drawScreen

## storageSettingsScreen
- This screen may be left unused. Use SD card for now.
- See toolboxScreen for offline features.

## loginScreen
- This screen may be left unused. Use SD card for now.
- qrcode is for the url that must be visited to login to a cloud service.
