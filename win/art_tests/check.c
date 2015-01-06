#include "stdafx.h"
#include <stdarg.h>

void _fail_unless (int result, const char *file, int line, const char *expr, ...)
{
  const char *msg;
    
  //send_loc_info (file, line);
  if (!result) {
    va_list ap;
    char buf[BUFSIZ];
    
    va_start(ap,expr);
    msg = (const char*)va_arg(ap, char *);
    if (msg == NULL)
      msg = expr;
    vsnprintf(buf, BUFSIZ, msg, ap);
    va_end(ap);
    fprintf(stderr, "%s", buf);    
  }
}
