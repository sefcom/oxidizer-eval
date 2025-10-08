long long uu_kill::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    unsigned long long v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x7fc]
    unsigned long v5;  // [bp-0x7f8]
    char v6;  // [bp-0x7f0]
    unsigned int v7;  // [bp-0x578]
    char v8;  // [bp-0x574]
    unsigned int v9;  // [bp-0x534]
    unsigned long long v10;  // [bp-0x530]
    char v11;  // [bp-0x528]
    unsigned int v12;  // [bp-0x2b0]
    unsigned int v13;  // [bp-0x2ac]
    char v14;  // [bp-0x2a8]
    unsigned long long v17;  // rdx

    v6.new(uucore::util_name(), v17);
    v0.version(&v6);
    v6.about(&v0);
    uucore::format_usage(&v11, "{} [OPTIONS]... PID...Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 22);
    v0.override_usage(&v6, &v11);
    memcpy(&v6, &v0, 700);
    v9 = 132 | v4;
    v10 = 128 | v5;
    v0.new("listTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v11.short(&v0, 108);
    v0.long(&v11, "listTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v11.help(&v0, "Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 13);
    v0.conflicts_with(&v11);
    v11.action(&v0, 2);
    v0.arg(&v6, &v11);
    v6.new("tablesignal(uutils coreutils) 0.0.30{} [OPTIONS]... PID...Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 5);
    v11.short(&v6, 116);
    v6.short_alias(&v11, 76);
    v11.long(&v6, "tablesignal(uutils coreutils) 0.0.30{} [OPTIONS]... PID...Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 5);
    v6.help(&v11, "Lists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 22);
    v11.action(&v6, 2);
    v6.arg(&v0, &v11);
    v0.new("signal(uutils coreutils) 0.0.30{} [OPTIONS]... PID...Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 6);
    v11.short(&v0, 115);
    v0.short_alias(&v11, 110);
    v11.long(&v0, "signal(uutils coreutils) 0.0.30{} [OPTIONS]... PID...Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 6);
    v0.value_name(&v11);
    v11.help(&v0, "Sends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 37);
    v0 = "listTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG";
    v1 = 4;
    v2 = "tablesignal(uutils coreutils) 0.0.30{} [OPTIONS]... PID...Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n";
    v3 = 5;
    v14.conflicts_with_all(&v11, &v0);
    v0.arg(&v6, &v14);
    v6.new("pids_or_signalstablesignal(uutils coreutils) 0.0.30{} [OPTIONS]... PID...Lists signalsLists table of signalsSends given signal instead of SIGTERMsrc/uu/kill/src/kill.rs \n", 15);
    memcpy(&v11, &v6, 632);
    v12 = v7 | 4;
    v13 = *((int *)&v8);
    v6.action(&v11, 1);
    a0.arg(&v0, &v6);
    return a0;
}
