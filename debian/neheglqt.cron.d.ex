#
# Regular cron jobs for the neheglqt package
#
0 4	* * *	root	[ -x /usr/bin/neheglqt_maintenance ] && /usr/bin/neheglqt_maintenance
