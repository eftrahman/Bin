#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "bitstream.h"

/* bit stream functions */

bitstream *
open_input_bitstream(const char *path)
{
  bitstream *bs = (bitstream *) malloc(sizeof(bitstream));

  if (bs != (bitstream *) NULL)
    {
      bs->stream = fopen(path,"rb");
      if (bs->stream == (FILE *) NULL)
        {
          free(bs);
          return (bitstream *) NULL;
        }
      bs->output = 0;
      bs->waiting_byte = 0;
      bs->mask = 1;
    }
  return bs;
}
