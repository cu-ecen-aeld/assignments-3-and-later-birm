#include <stdio.h>
#include <syslog.h>

int main( int argc, char *argv[] )  {
   openlog ("writer", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
   if( argc < 3 ) {
     syslog(LOG_ERR, "Expects two Arguments.\n");
     return 1;
   }
   else {
     syslog(LOG_DEBUG, "Writing %s to %s", argv[1], argv[2]);
     closelog ();
     FILE* f;
     f = fopen(argv[1], "w+");
     fprintf(f, argv[2]);
     fclose(f);
   }
}
