long long uu_true::uu_app::hb3758cc78123f481(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    char v1;  // [bp-0x544]
    char v2;  // [bp-0x53c]
    char v3;  // [bp-0x538]
    unsigned long long v4;  // [sp-0x27c]
    unsigned int v5;  // [sp-0x274]
    char v6;  // [bp-0x270]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::h3c2c944b8b502566(&v0, uucore::util_name::h412db5e565a079f3(), v8);
    clap_builder::builder::command::Command::version::h8e21075766700da8(&v3, &v0, v8);
    clap_builder::builder::command::Command::about::hd3e607732d2b8f98(&v0, &v3);
    memcpy(&v3, &v0, 700);
    v4 = 0x14000000140000 | *((long long *)&v1);
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::new::he1c68dae3291652d(&v0, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::h10f3230b45b9596e(&v6, &v0, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::ha9b7e45653015f05(&v0, &v6, "Print help informationversionPrint version informationsrc/uucore/src/lib/lib.rs", 22);
    clap_builder::builder::arg::Arg::action::h5cae6d431e29ca7b(&v6, &v0, 5);
    clap_builder::builder::command::Command::arg::h4bc5f6da50983ffb(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::he1c68dae3291652d(&v3, "versionPrint version informationsrc/uucore/src/lib/lib.rs", 7);
    clap_builder::builder::arg::Arg::long::h10f3230b45b9596e(&v6, &v3, "versionPrint version informationsrc/uucore/src/lib/lib.rs", 7);
    clap_builder::builder::arg::Arg::help::ha9b7e45653015f05(&v3, &v6, "Print version informationsrc/uucore/src/lib/lib.rs", 25);
    clap_builder::builder::arg::Arg::action::h5cae6d431e29ca7b(&v6, &v3, 8);
    clap_builder::builder::command::Command::arg::h4bc5f6da50983ffb(a0, &v0, &v6);
    return a0;
}
