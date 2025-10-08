long long uu_tail::args::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned int v1;  // [bp-0x848]
    unsigned int v2;  // [bp-0x844]
    char v3;  // [bp-0x840], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x838]
    unsigned long long v5;  // [bp-0x830]
    unsigned long long v6;  // [bp-0x828]
    unsigned int v7;  // [bp-0x5c8]
    char v8;  // [bp-0x5c4]
    unsigned long long v9;  // [bp-0x584]
    unsigned int v10;  // [bp-0x57c]
    char v11;  // [bp-0x578]
    unsigned int v12;  // [bp-0x300]
    char v13;  // [bp-0x2fc]
    unsigned long v14;  // [bp-0x2bc]
    unsigned int v15;  // [bp-0x2b4]
    unsigned long long v16;  // [bp-0x2b0]
    unsigned long long v17;  // [bp-0x2a8]
    unsigned long long v18;  // [bp-0x2a0]
    unsigned long long v19;  // [bp-0x298]
    unsigned long long v22;  // rdx

    v3.new(uucore::util_name(), v22);
    v11.version(&v3);
    v3.about(&v11);
    uucore::format_usage(&v0, "{} [FLAG]... [FILE]...Number of bytes to printdescriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when ", 22);
    v11.override_usage(&v3, &v0);
    memcpy(&v3, &v11, 700);
    v9 = 549755814016 | v14;
    v10 = v15;
    v11.new("byteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 5);
    v0.short(&v11, 99);
    v11.long(&v0, "byteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 5);
    memcpy(&v0, &v11, 632);
    v1 = v12 | 32;
    v2 = *((int *)&v13);
    v16 = "byteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ";
    v17 = 5;
    v18 = "linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ";
    v19 = 5;
    v11.overrides_with_all(&v0, &v16);
    v0.help(&v11, "Number of bytes to printdescriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen ", 24);
    v11.arg(&v3, &v0);
    v3.new("followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is use", 6);
    v0.short(&v3, 102);
    v3.long(&v0, "followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is use", 6);
    v0.default_missing_value(&v3);
    v3.num_args(&v0, 0, 1);
    memcpy(&v0, &v3, 632);
    v1 = 128 | v7;
    v2 = *((int *)&v8);
    v3 = "descriptorPrint the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not cha";
    v4 = 10;
    v5 = "name";
    v6 = 4;
    v16.from(&v3);
    v3.value_parser(&v0, &v16);
    v0.overrides_with(&v3, "followuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is use", 6);
    v16.help(&v0, "Print the file as it growsNumber of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size ", 26);
    v3.arg(&v11, &v16);
    v11.new("linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 5);
    v0.short(&v11, 110);
    v11.long(&v0, "linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 5);
    memcpy(&v0, &v11, 632);
    v1 = v12 | 32;
    v2 = *((int *)&v13);
    v16 = "byteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ";
    v17 = 5;
    v18 = "linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ";
    v19 = 5;
    v11.overrides_with_all(&v0, &v16);
    v0.help(&v11, "Number of lines to printPIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterat", 24);
    v11.arg(&v3, &v0);
    v3.new("pidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing ", 3);
    v0.long(&v3, "pidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing ", 3);
    v3.value_name(&v0, "PIDWith -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has be", 3);
    v0.help(&v3, "With -f, terminate after process ID, PID diessilentNever output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been ", 45);
    v16.overrides_with(&v0, "pidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing ", 3);
    v3.arg(&v11, &v16);
    v11.new("quietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: '", 5);
    v0.short(&v11, 113);
    v11.long(&v0, "quietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: '", 5);
    v0.visible_alias(&v11);
    v16 = "quietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: '";
    v17 = 5;
    v18 = "verbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when fol";
    v19 = 7;
    v11.overrides_with_all(&v0, &v16);
    v0.help(&v11, "Never output headers giving file namesNNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rota", 38);
    v16.action(&v0, 2);
    v11.arg(&v3, &v16);
    v3.new("sleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not su", 14);
    v0.short(&v3, 115);
    v3.value_name(&v0, "NNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaning", 1);
    v0.long(&v3, "sleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not su", 14);
    v16.help(&v0, "Number of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningf", 72);
    v3.arg(&v11, &v16);
    v11.new("max-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on thi", 19);
    v0.value_name(&v11, "NNumber of seconds to sleep between polling the file when running with -fReopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaning", 1);
    v11.long(&v0, "max-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on thi", 19);
    v0.help(&v11, "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=nameAl", 254);
    v11.arg(&v3, &v0);
    v3.new("verbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when fol", 7);
    v0.short(&v3, 118);
    v3.long(&v0, "verbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when fol", 7);
    v16 = "quietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: '";
    v17 = 5;
    v18 = "verbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when fol";
    v19 = 7;
    v0.overrides_with_all(&v3, &v16);
    v3.help(&v0, "Always output headers giving file namesLine delimiter is NUL, not newlinedisDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipesrc/uu/tail/src/chunks.rs", 39);
    v0.action(&v3, 2);
    v3.arg(&v11, &v0);
    v11.new("zero-terminatedbyteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 15);
    v0.short(&v11, 122);
    v11.long(&v0, "zero-terminatedbyteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 15);
    v0.help(&v11, "Line delimiter is NUL, not newlinedisDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipesrc/uu/tail/src/chunks.rs", 34);
    v16.action(&v0, 2);
    v11.arg(&v3, &v16);
    v3.new("use-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful on", 11);
    v0.alias(&v3, "-disable-inotify", 16);
    v3.alias(&v0, "disDisable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipesrc/uu/tail/src/chunks.rs", 3);
    v0.long(&v3, "use-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful on", 11);
    v3.help(&v0, "Disable 'inotify' support and use polling insteadKeep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipesrc/uu/tail/src/chunks.rs", 49);
    v0.action(&v3, 2);
    v3.arg(&v11, &v0);
    v11.new("retryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID i", 5);
    v0.long(&v11, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID i", 5);
    v11.help(&v0, "Keep trying to open a file if it is inaccessibleSame as --follow=name --retrypresume-input-pipesrc/uu/tail/src/chunks.rs", 48);
    v0.overrides_with(&v11, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID i", 5);
    v16.action(&v0, 2);
    v11.arg(&v3, &v16);
    v3.new("Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID ", 1);
    v0.short(&v3, 70);
    v3.help(&v0, "Same as --follow=name --retrypresume-input-pipesrc/uu/tail/src/chunks.rs", 29);
    v0.overrides_with(&v3, "Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID ", 1);
    v16.action(&v0, 2);
    v3.arg(&v11, &v16);
    v11.new("-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n", 19);
    v0.long(&v11, "presume-input-pipesrc/uu/tail/src/chunks.rs", 18);
    v11.alias(&v0, "-presume-input-pipesleep-intervalmax-unchanged-statspidfilesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n", 19);
    memcpy(&v0, &v11, 632);
    v1 = v12 | 4;
    v2 = *((int *)&v13);
    v16.action(&v0, 2);
    v11.arg(&v3, &v16);
    v3.new("filesquietinvalid number of seconds: ': warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing sta", 5);
    v0.action(&v3, 1);
    v3.num_args(&v0);
    v16 = 2;
    v0.value_parser(&v3, &v16);
    v3.value_hint(&v0);
    a0.arg(&v11, &v3);
    return a0;
}
