/*

Converts wavelength (nanometers) from the range 380-780 to RGB values

This C code was created by Willian Gabriel Cerqueira da Rocha, it is an 
implementation of the algorithm from Dan Bruton`s Color Science Page at:
http://www.physics.sfasu.edu/astro/color.html

All credits to him.

*/

#ifndef WL_TO_RGB_H
#define WL_TO_RGB_H

//Red = value[0], Green = value[1] and Blue = value[2]
typedef struct {
	double value[3];
} RGBColor;

//Initialize RGBColor with -1 values, useful to detect errors on returned values
#define RGB_COLOR(color) RGBColor color = {.value = {-1, -1, -1}}

RGBColor wavelengthToRGB (double wavelength);

#endif