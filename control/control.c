#include "control.h"

//////////////////////////////////////////////////////
// verbose
Verbose_t Control_verbose = VERBOSE_SILENT;
Verbose_t Control_verboseDefault = VERBOSE_SILENT;


int Control_Verb_order (Verbose_t l1, Verbose_t l2)
{
  return l1<=l2;
}