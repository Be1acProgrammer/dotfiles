//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "/home/user/.local/bin/disk",  1,  16},
  {"",  "/home/user/.local/bin/music",  1, 5},
  {"",  "/home/user/.local/bin/forecast", 5, 8},
  {"",  "/home/user/.local/bin/pacpackages", 9,  15}, 
  {"",  "/home/user/.local/bin/memory", 1, 9},
  {"",  "/home/user/.local/bin/volume", 1,  10},
  {"",  "/home/user/.local/bin/clock",  60, 1},
  {"",  "/home/user/.local/bin/battery", 5,  4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
