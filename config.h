#define LINUX 1
#define DEBUG 0
#define FEAT_CMDMON 1
#define FEAT_NTP 1
#define FEAT_REFCLOCK 1
#define HAVE_STDINT_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_IN_PKTINFO 1
#define FEAT_IPV6 1
#define _GNU_SOURCE 1
#define HAVE_IN6_PKTINFO 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_GETADDRINFO 1
#define FEAT_ASYNCDNS 1
#define USE_PTHREAD_ASYNCDNS 1
#define HAVE_RECVMMSG 1
#define FEAT_RTC 1
#define FEAT_PHC 1
#define HAVE_SCHED_SETSCHEDULER 1
#define HAVE_MLOCKALL 1
#define FORCE_DNSRETRY 1
#define DEFAULT_CONF_FILE "/etc/chrony.conf"
#define DEFAULT_HWCLOCK_FILE ""
#define DEFAULT_PID_FILE "/var/run/chronyd.pid"
#define DEFAULT_RTC_DEVICE "/dev/rtc"
#define DEFAULT_USER "root"
#define DEFAULT_COMMAND_SOCKET "/var/run/chrony/chronyd.sock"
#define MAIL_PROGRAM "/usr/lib/sendmail"
#define CHRONYC_FEATURES "-READLINE -SECHASH +IPV6 -DEBUG"
#define CHRONYD_FEATURES "+CMDMON +NTP +REFCLOCK +RTC -PRIVDROP -SCFILTER -SIGND +ASYNCDNS -SECHASH +IPV6 -DEBUG"
#define CHRONY_VERSION "3.3"
