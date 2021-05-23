
/*********************************************************************

    artwork.c

*********************************************************************/


#include "driver.h"
//#include "png.h"
#include "artwork.h"
//#include "vidhrdw/vector.h"
//#include <ctype.h>
//#include <math.h>


/***************************************************************************

    Constants & macros

***************************************************************************/

/* maxima */
#define MAX_PIECES				1024
#define MAX_HINTS_PER_SCANLINE	4

/* fixed-point fraction helpers */
#define FRAC_BITS				24
#define FRAC_ONE				(1 << FRAC_BITS)
#define FRAC_MASK				(FRAC_ONE - 1)
#define FRAC_HALF				(FRAC_ONE / 2)


/*-------------------------------------------------
    artwork_get_ui_bitmap - get the UI bitmap
-------------------------------------------------*/
struct mame_bitmap *artwork_get_ui_bitmap(void)
{
	return  Machine->scrbitmap;
}

/*-------------------------------------------------
    artwork_get_screensize - get the real screen
    size
-------------------------------------------------*/
void artwork_get_screensize(int *width, int *height)
{
	*width  = Machine->drv->screen_width;
	*height = Machine->drv->screen_height;
}

