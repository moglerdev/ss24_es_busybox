/* This is a generated file, don't edit */

#define NUM_APPLETS 16
#define KNOWN_APPNAME_OFFSETS 0

const char applet_names[] ALIGN1 = ""
"ash" "\0"
"bash" "\0"
"cat" "\0"
"cp" "\0"
"echo" "\0"
"kill" "\0"
"ls" "\0"
"mkdir" "\0"
"mount" "\0"
"mv" "\0"
"ps" "\0"
"pwd" "\0"
"rm" "\0"
"sh" "\0"
"uname" "\0"
"vi" "\0"
;

#define APPLET_NO_ash 0
#define APPLET_NO_bash 1
#define APPLET_NO_cat 2
#define APPLET_NO_cp 3
#define APPLET_NO_echo 4
#define APPLET_NO_kill 5
#define APPLET_NO_ls 6
#define APPLET_NO_mkdir 7
#define APPLET_NO_mount 8
#define APPLET_NO_mv 9
#define APPLET_NO_ps 10
#define APPLET_NO_pwd 11
#define APPLET_NO_rm 12
#define APPLET_NO_sh 13
#define APPLET_NO_uname 14
#define APPLET_NO_vi 15

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
ash_main,
ash_main,
cat_main,
cp_main,
echo_main,
kill_main,
ls_main,
mkdir_main,
mount_main,
mv_main,
ps_main,
pwd_main,
rm_main,
ash_main,
uname_main,
vi_main,
};
#endif

