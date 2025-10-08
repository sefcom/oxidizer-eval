fn uu_timeout::uu_app() -> : struct700 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xab8], Other Possible Types: struct640
    let v1: u32;  // [bp-0x840]
    let v2: u32;  // [bp-0x83c]
    let v3: struct437;  // [bp-0x838], Other Possible Types: struct712, struct640
    let v4: u32;  // [bp-0x5c0]
    let v5: i8;  // [bp-0x5bc]
    let v6: u64;  // [bp-0x57c]
    let v7: u32;  // [bp-0x574]
    let v8: struct640;  // [bp-0x570], Other Possible Types: struct712
    let v9: struct712;  // [bp-0x570]
    let v10: struct640;  // [bp-0x570]
    let v11: u32;  // [bp-0x2f8]
    let v12: struct640;  // [bp-0x2a8]

    v3 = clap_builder::builder::command::Command::new();
    v8 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v8);
    v0 = uucore::format_usage("{} [OPTION] DURATION COMMAND...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("foreground");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "foreground");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 102);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "when not running timeout directly from a shell prompt, allow COMMAND to read from the TTY and get TTY signals; in this mode, children of COMMAND will not be timed out");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v12);
    v8 = clap_builder::builder::arg::Arg::new("kill-after");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "kill-after");
    v8 = clap_builder::builder::arg::Arg::short(&v0, 107);
    v0 = clap_builder::builder::arg::Arg::help(&v8, "also send a KILL signal if COMMAND is still running this long after the initial signal was sent");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("preserve-status");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "preserve-status");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 112);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "exit with the same status as COMMAND, even when the command times out");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v12);
    v8 = clap_builder::builder::arg::Arg::new("signal");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 115);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "signal");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "specify the signal to be sent on timeout; SIGNAL may be a name like 'HUP' or a number; see 'kill -l' for a list of signals");
    v12 = clap_builder::builder::arg::Arg::value_name(&v0);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 118);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "diagnose to stderr any signal sent upon timeout");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v10 = clap_builder::builder::arg::Arg::new("duration");
    memcpy(&v0, &v10, 632);
    v1 = v11 | 1;
    v2 = v11;
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("command");
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = *(&v5 as &i32);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    memcpy(a0, &v3, 700);
    *((a0 + 700) as &u64) = 549755814048 | v6;
    *((a0 + 708) as &u32) = v7;
    return;
}
