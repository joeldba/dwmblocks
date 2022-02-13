//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/     /*Command*/ 							/*Update Interval*/	/*Update Signal*/
	/* currently playing song */
	{"  ", "mpc current",								5,			0},		
	/* network connection status */
	{"  ", "nmcli -t -f name connection show --active",				120,			0},
	/* volume %  */
	{"  ", "pamixer --get-volume",							5,			0},
	/* current time  */
	{"  ", "date '+%I:%M %p '",							60,			0},
	/* "Tux" Linux logo, just for funsies */
	{"", "printf ' '",								-1,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
