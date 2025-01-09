long long uu_true::uu_app::h5a7239342bec5673(unsigned long long a0)
{
    char v0;  // [bp-0x800]
    char v1;  // [bp-0x544]
    char v2;  // [bp-0x53c]
    char v3;  // [bp-0x538]
    unsigned long long v4;  // [sp-0x27c]
    unsigned int v5;  // [sp-0x274]
    char v6;  // [bp-0x270]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::h72e1b29d46a1b563(&v0, uucore::util_name::h60d842bf27b05e82(), v8);
    clap_builder::builder::command::Command::version::h24840c368b480049(&v3, &v0);
    clap_builder::builder::command::Command::about::hc7b9ed5bad34d8a3(&v0, &v3);
    memcpy(&v3, &v0, 700);
    v4 = 0x14000000140000 | *((long long *)&v1);
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::new::h1278cb3c9ee3e401(&v0, "help", 4);
    clap_builder::builder::arg::Arg::long::h6a5d014ad2c63709(&v6, &v0, "help", 4);
    clap_builder::builder::arg::Arg::help::h0b42e7173e3bc953(&v0, &v6, "Print help information", 22);
    clap_builder::builder::arg::Arg::action::hc4228c65a5dc0bdb(&v6, &v0, 5);
    clap_builder::builder::command::Command::arg::hd535666a5988fe6a(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::h1278cb3c9ee3e401(&v3, "version", 7);
    clap_builder::builder::arg::Arg::long::h6a5d014ad2c63709(&v6, &v3, "version", 7);
    clap_builder::builder::arg::Arg::help::h0b42e7173e3bc953(&v3, &v6, "Print version informationsrc/uucore/src/lib/lib.rs", 25);
    clap_builder::builder::arg::Arg::action::hc4228c65a5dc0bdb(&v6, &v3, 8);
    clap_builder::builder::command::Command::arg::hd535666a5988fe6a(a0, &v0, &v6);
    return a0;
}
