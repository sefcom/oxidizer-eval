long long uu_timeout::uu_app(struct_0 *a0)
{
    char v0;  // [bp-0xab8]
    unsigned int v1;  // [bp-0x840]
    unsigned int v2;  // [bp-0x83c]
    char v3;  // [bp-0x838]
    unsigned int v4;  // [bp-0x5c0]
    char v5;  // [bp-0x5bc]
    unsigned long v6;  // [bp-0x57c]
    unsigned int v7;  // [bp-0x574]
    char v8;  // [bp-0x570]
    unsigned int v9;  // [bp-0x2f8]
    char v10;  // [bp-0x2f4]
    char v11;  // [bp-0x2a8]

    v3.new();
    v8.version(&v3);
    v3.about(&v8);
    uucore::format_usage(&v0, "{} [OPTION] DURATION COMMAND...when not running timeout directly from a shell prompt, allow COMMAND to read from the TTY and get TTY signals; in this mode, children of COMMAND will not be timed outalso send a KILL signal if COMMAND is still running this lo", 31);
    v8.override_usage(&v3, &v0);
    v3.new("foregroundkill-aftersignalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 10);
    v0.long(&v3, "foregroundkill-aftersignalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 10);
    v3.short(&v0, 102);
    v0.help(&v3, "when not running timeout directly from a shell prompt, allow COMMAND to read from the TTY and get TTY signals; in this mode, children of COMMAND will not be timed outalso send a KILL signal if COMMAND is still running this long after the initial signal was", 166);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("kill-aftersignalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 10);
    v0.long(&v8, "kill-aftersignalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 10);
    v8.short(&v0, 107);
    v0.help(&v8, "also send a KILL signal if COMMAND is still running this long after the initial signal was sentexit with the same status as COMMAND, even when the command times outspecify the signal to be sent on timeout; SIGNAL may be a name like 'HUP' or a number; see '", 95);
    v8.arg(&v3, &v0);
    v3.new("preserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 15);
    v0.long(&v3, "preserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 15);
    v3.short(&v0, 112);
    v0.help(&v3, "exit with the same status as COMMAND, even when the command times outspecify the signal to be sent on timeout; SIGNAL may be a name like 'HUP' or a number; see 'kill -l' for a list of signalsSIGNALdiagnose to stderr any signal sent upon timeout: sending signal  to command \nfailed to execute process: ", 69);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("signalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 6);
    v0.short(&v8, 115);
    v8.long(&v0, "signalpreserve-statusverbosecommandsrc/uu/timeout/src/timeout.rs", 6);
    v0.help(&v8, "specify the signal to be sent on timeout; SIGNAL may be a name like 'HUP' or a number; see 'kill -l' for a list of signalsSIGNALdiagnose to stderr any signal sent upon timeout: sending signal  to command \nfailed to execute process: ", 122);
    v11.value_name(&v0);
    v8.arg(&v3, &v11);
    v3.new("verbosecommandsrc/uu/timeout/src/timeout.rs", 7);
    v0.short(&v3, 118);
    v3.long(&v0, "verbosecommandsrc/uu/timeout/src/timeout.rs", 7);
    v0.help(&v3, "diagnose to stderr any signal sent upon timeout: sending signal  to command \nfailed to execute process: ", 47);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("duration\n       ", 8);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 1;
    v2 = *((int *)&v10);
    v8.arg(&v3, &v0);
    v3.new("commandsrc/uu/timeout/src/timeout.rs", 7);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = *((int *)&v5);
    v3.action(&v0, 1);
    v0.value_hint(&v3);
    v3.arg(&v8, &v0);
    memcpy(a0, &v3, 700);
    *((unsigned long *)&(&a0->padding_0)[1]) = 549755814048 | v6;
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v7;
    return a0;
}
