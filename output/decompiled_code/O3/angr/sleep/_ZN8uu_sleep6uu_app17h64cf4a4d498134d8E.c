long long uu_sleep::uu_app::h64cf4a4d498134d8(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x7f8]
    unsigned long long v1;  // [sp-0x53c]
    unsigned int v2;  // [sp-0x534]
    char v3;  // [bp-0x530]
    char v4;  // [bp-0x274]
    char v5;  // [bp-0x26c]
    char v6;  // [bp-0x268]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::hf02c0847b87e3598(&v3, uucore::util_name::h412db5e565a079f3(), v8);
    clap_builder::builder::command::Command::version::ha1d5aea8874afb9b(&v0, &v3, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h7f63c98d155088cc(&v3, &v0, "Pause for NUMBER seconds.", 25);
    clap_builder::builder::command::Command::after_help::ha332b0ebc6028d3b(&v0, &v3, "Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint number.  Given two or more arguments, pause for the amount of time\nspecified by the sum of their values.", 335);
    uucore::format_usage::h00b69bae12d8ac9c(&v6, "{} NUMBER[SUFFIX]...\n{} OPTION", 30);
    clap_builder::builder::command::Command::override_usage::h22f3c125fb25683d(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::h0b2a05908ad92651(&v3, "NUMBER", 6);
    clap_builder::builder::arg::Arg::help::h8460b0966166868e(&v6, &v3);
    clap_builder::builder::arg::Arg::value_name::h351903d73d10f24e(&v3, &v6, v8);
    clap_builder::builder::arg::Arg::action::hb41fb6ca023bb97b(&v6, &v3);
    clap_builder::builder::command::Command::arg::hb74f8ab4ef44b721(a0, &v0, &v6);
    return a0;
}
