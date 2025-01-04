long long uu_sleep::uu_app::h7f221250c3adad43(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x7f8]
    unsigned long long v1;  // [sp-0x53c]
    unsigned int v2;  // [sp-0x534]
    char v3;  // [bp-0x530]
    char v4;  // [bp-0x274]
    char v5;  // [bp-0x26c]
    char v6;  // [bp-0x268]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::h550840e1cc1ba956(&v3, uucore::util_name::h60d842bf27b05e82(), v8);
    clap_builder::builder::command::Command::version::ha3a67252f6f91644(&v0, &v3, "0.0.28{} NUMBER[SUFFIX]...\n{} OPTIONNUMBERpause for NUMBER secondsInput was emptyFound only whitespace in input at position Exponent was out of boundsNumber was negative: invalid time interval '': \n", 6);
    clap_builder::builder::command::Command::about::h76115d2a8ee9f3e6(&v3, &v0, "Pause for NUMBER seconds.Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint ", 25);
    clap_builder::builder::command::Command::after_help::he1950b12e48d234e(&v0, &v3, "Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint number.  Given two or more arguments, pause for the amount of time\nspecified by the sum of their values.", 335);
    uucore::format_usage::h76fcb2d15fbabc58(&v6, "{} NUMBER[SUFFIX]...\n{} OPTIONNUMBERpause for NUMBER secondsInput was emptyFound only whitespace in input at position Exponent was out of boundsNumber was negative: invalid time interval '': \n", 30);
    clap_builder::builder::command::Command::override_usage::hfb5f500f09c205e8(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::ha16ac1f27ee23c7e(&v3, "NUMBERpause for NUMBER secondsInput was emptyFound only whitespace in input at position Exponent was out of boundsNumber was negative: invalid time interval '': \n", 6);
    clap_builder::builder::arg::Arg::help::hd1cb79528c548903(&v6, &v3);
    clap_builder::builder::arg::Arg::value_name::he21f62fd7314821f(&v3, &v6, v8);
    clap_builder::builder::arg::Arg::action::h97274f682063a2c0(&v6, &v3);
    clap_builder::builder::command::Command::arg::h4d4defefb4443c82(a0, &v0, &v6);
    return a0;
}
