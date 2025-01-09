long long uu_false::uu_app::he23c4502b9c9f7a3(unsigned long long a0)
{
    char v0;  // [bp-0x800]
    char v1;  // [bp-0x544]
    char v2;  // [bp-0x53c]
    char v3;  // [bp-0x538]
    unsigned long long v4;  // [sp-0x27c]
    unsigned int v5;  // [sp-0x274]
    char v6;  // [bp-0x270]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::hf0f143c7c60ae8b9(&v0, uucore::util_name::h60d842bf27b05e82(), v8);
    clap_builder::builder::command::Command::version::hc3a426a510f4aa12(&v3, &v0);
    clap_builder::builder::command::Command::about::h44199b518ccd190d(&v0, &v3);
    memcpy(&v3, &v0, 700);
    v4 = 0x14000000140000 | *((long long *)&v1);
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::new::h1673065d1d9f1523(&v0, "help", 4);
    clap_builder::builder::arg::Arg::long::hcccdcf21d1a5ce73(&v6, &v0, "help", 4);
    clap_builder::builder::arg::Arg::help::he5bc9eec78bee47c(&v0, &v6, "Print help information", 22);
    clap_builder::builder::arg::Arg::action::h92abc2fbc7b890bd(&v6, &v0, 5);
    clap_builder::builder::command::Command::arg::h631a2dc306f6ea00(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::h1673065d1d9f1523(&v3, "version", 7);
    clap_builder::builder::arg::Arg::long::hcccdcf21d1a5ce73(&v6, &v3, "version", 7);
    clap_builder::builder::arg::Arg::help::he5bc9eec78bee47c(&v3, &v6, "Print version informationsrc/uucore/src/lib/lib.rs", 25);
    clap_builder::builder::arg::Arg::action::h92abc2fbc7b890bd(&v6, &v3, 8);
    clap_builder::builder::command::Command::arg::h631a2dc306f6ea00(a0, &v0, &v6);
    return a0;
}
