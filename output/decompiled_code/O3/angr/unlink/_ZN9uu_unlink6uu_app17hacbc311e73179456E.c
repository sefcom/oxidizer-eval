long long uu_unlink::uu_app::hacbc311e73179456(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x818]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x5b8]
    char v3;  // [bp-0x5b4]
    char v4;  // [bp-0x544]
    char v5;  // [bp-0x53c]
    char v6;  // [bp-0x538]
    unsigned long long v7;  // [sp-0x27c]
    unsigned int v8;  // [sp-0x274]
    char v9;  // [bp-0x270]
    unsigned int v10;  // [sp-0x28]
    unsigned int v11;  // [sp-0x24]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::hcf00ec8fa56d60bc(&v6, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::h233de8568e9f64d2(&v1, &v6, v13);
    clap_builder::builder::command::Command::about::h4456a5e6e90aa368(&v6, &v1);
    uucore::format_usage::h00b69bae12d8ac9c(&v9, "{} [FILE]\n{} OPTION/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 19);
    clap_builder::builder::command::Command::override_usage::h06c2ad6337e54804(&v1, &v6, &v9);
    memcpy(&v6, &v1, 700);
    v7 = 549755814016 | *((long long *)&v4);
    v8 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::h7c9605b5ef531c80(&v1);
    memcpy(&v9, &v1, 584);
    v10 = *((int *)&v2) | 5;
    v11 = *((int *)&v3);
    v0 = 2;
    clap_builder::builder::arg::Arg::value_parser::hca09453c4d12b644(&v1, &v9, &v0);
    clap_builder::builder::arg::Arg::value_hint::hec11d925ddbd3bee(&v9, &v1);
    clap_builder::builder::command::Command::arg::h9af26a55ab606ae6(a0, &v6, &v9);
    return a0;
}
