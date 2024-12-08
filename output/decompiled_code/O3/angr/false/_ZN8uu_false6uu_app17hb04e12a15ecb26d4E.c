long long uu_false::uu_app::hb04e12a15ecb26d4(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    char v1;  // [bp-0x544]
    char v2;  // [bp-0x53c]
    char v3;  // [bp-0x538]
    unsigned long long v4;  // [sp-0x27c]
    unsigned int v5;  // [sp-0x274]
    char v6;  // [bp-0x270]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::h46869bcbd265e047(&v0, uucore::util_name::h412db5e565a079f3(), v8);
    clap_builder::builder::command::Command::version::h8099f7c14edd7935(&v3, &v0, v8);
    clap_builder::builder::command::Command::about::hb64a2c974d684ddd(&v0, &v3);
    memcpy(&v3, &v0, 700);
    v4 = 0x14000000140000 | *((long long *)&v1);
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::new::h6d680c36bcdb100c(&v0, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::h2a730c653dee19f0(&v6, &v0, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::hb2415ce3b7fa955b(&v0, &v6, "Print help informationversionPrint version informationsrc/uucore/src/lib/lib.rs", 22);
    clap_builder::builder::arg::Arg::action::h04d8a85e38645f02(&v6, &v0, 5);
    clap_builder::builder::command::Command::arg::h3460e40caffa4f15(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::h6d680c36bcdb100c(&v3, "versionPrint version informationsrc/uucore/src/lib/lib.rs", 7);
    clap_builder::builder::arg::Arg::long::h2a730c653dee19f0(&v6, &v3, "versionPrint version informationsrc/uucore/src/lib/lib.rs", 7);
    clap_builder::builder::arg::Arg::help::hb2415ce3b7fa955b(&v3, &v6, "Print version informationsrc/uucore/src/lib/lib.rs", 25);
    clap_builder::builder::arg::Arg::action::h04d8a85e38645f02(&v6, &v3, 8);
    clap_builder::builder::command::Command::arg::h3460e40caffa4f15(a0, &v0, &v6);
    return a0;
}
