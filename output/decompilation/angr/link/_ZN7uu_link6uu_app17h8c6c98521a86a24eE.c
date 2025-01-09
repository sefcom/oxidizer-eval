long long uu_link::uu_app::h8c6c98521a86a24e(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::hafb9acd88b0ae54c(&v6, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h0479e3c7bd32251b(&v1, &v6);
    clap_builder::builder::command::Command::about::h95e0f927299ffdcb(&v6, &v1);
    uucore::format_usage::h76fcb2d15fbabc58(&v9, "{} FILE1 FILE2", 14);
    clap_builder::builder::command::Command::override_usage::hef90f16fca87e7e9(&v1, &v6, &v9);
    memcpy(&v6, &v1, 700);
    v7 = 549755814016 | *((long long *)&v4);
    v8 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::h3f0689815de3b14c(&v1);
    memcpy(&v9, &v1, 584);
    v10 = *((int *)&v2) | 5;
    v11 = *((int *)&v3);
    clap_builder::builder::arg::Arg::num_args::h77348722a794a375(&v1, &v9);
    clap_builder::builder::arg::Arg::value_hint::h9c02bbfd7160c2e8(&v9, &v1);
    v0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h470e7129040b0519(&v1, &v9, &v0);
    clap_builder::builder::command::Command::arg::h3215c946dd2bf29e(a0, &v6, &v1);
    return a0;
}
