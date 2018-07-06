#include "wl_to_rgb.h"

RGBColor wavelengthToRGB (double wavelength) {
  RGB_COLOR(color);
  double factor;
  if (wavelength > 780 || wavelength < 380){
    return color;
  }
  if (wavelength >= 380 && wavelength <= 440){
    color.value[0] = (double) (-(wavelength - 440))/(440-380);
    color.value[1] = 0.0;
    color.value[2] = 1.0;
  }
  if (wavelength >= 440 && wavelength <= 490){
    color.value[0] = 0.0;
    color.value[1] = (double) (wavelength - 440)/(490-440);
    color.value[2] = 1.0;
  }
  if (wavelength >= 490 && wavelength <= 510){
    color.value[0] = 0.0;
    color.value[1] = 1.0;
    color.value[2] = (double) (-(wavelength - 510))/(510 - 490);
  }
  if (wavelength >= 510 && wavelength <= 580){
    color.value[0] = (double) (wavelength - 510)/(580 - 510);
    color.value[1] = 1.0;
    color.value[2] = 0.0;
  }
  if (wavelength >= 580 && wavelength <= 645){
    color.value[0] = 1.0;
    color.value[1] = (double) (-(wavelength - 645))/(645-580);
    color.value[2] = 0.0;
  }
  if (wavelength >= 645 && wavelength <= 780){
    color.value[0] = 1.0;
    color.value[1] = 0.0;
    color.value[2] = 0.0;
  }
  if (wavelength >= 380 && wavelength <= 420){
    factor = 0.3 + 0.7 * (wavelength - 380)/(420 - 380);
  } else if (wavelength > 420 && wavelength <= 700){
    factor = 1.0;
  } else if (wavelength > 700 && wavelength <= 780){
    factor = 0.3 + 0.7 * (780 - wavelength)/(780 -700);
  } else {
    factor = 1.0;
  }
  color.value[0] = color.value[0] * 255 * factor;
  color.value[1] = color.value[1] * 255 * factor;
  color.value[2] = color.value[2] * 255 * factor;
  return (color);
}
