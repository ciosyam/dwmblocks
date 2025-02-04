//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	/*{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},*/
	/*{"",	"sb-tasks",	10,	26},*/
	/*{"",	"sb-pacpackages",	0,	8},*/
	/*{"",	"sb-news",		0,	6},*/
	/* {"",	"sb-price xmr-btc \"Monero to Bitcoin\" 🔒 25",	9000,	25}, */
	/* {"",	"sb-price xmr Monero 🔒 24",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸 23",			9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰 21",			9000,	21}, */
	/*{"",	"sb-torrent",	20,	7},*/
	/* {"",	"sb-memory",	10,	14}, */
	/*{"",	"sb-cpu",		10,	18},*/
	/* {"",	"sb-moonphase",	18000,	17}, */
	/*{"",	"sb-doppler",	0,	13},*/
	/*{"",	"sb-forecast",	18000,	5},*/
	/*{"",	"sb-mailbox",	180,	12},*/
	{"",	"sb-battery",	5,	3},
	{"",	"sb-internet",	1,	4},
	/*{"",	"sb-volume",	5,	10},*/
	{"",	"sb-music", 	1,	10},
	{"",	"sb-clock",	60, 1},
	/* {"",	"sb-iplocate", 0,	27}, */
	/*{"",	"sb-help-icon",	0,	15},*/
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
