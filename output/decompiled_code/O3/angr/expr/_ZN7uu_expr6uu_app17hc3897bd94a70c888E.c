long long uu_expr::uu_app::hc3897bd94a70c888(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    unsigned int v1;  // [sp-0x5b8]
    unsigned int v2;  // [sp-0x5b4]
    char v3;  // [bp-0x544]
    char v4;  // [bp-0x53c]
    char v5;  // [bp-0x538]
    unsigned long long v6;  // [sp-0x27c]
    unsigned int v7;  // [sp-0x274]
    char v8;  // [bp-0x270]
    char v9;  // [bp-0x28]
    char v10;  // [bp-0x24]
    unsigned long long v12;  // rdx

    clap_builder::builder::command::Command::new::h47cdcfd68fb0c03c(&v0, uucore::util_name::h412db5e565a079f3(), v12);
    clap_builder::builder::command::Command::version::hab08a015ead0bbab(&v5, &v0, v12);
    clap_builder::builder::command::Command::about::h978641e49c0f97d7(&v0, &v5);
    uucore::format_usage::h00b69bae12d8ac9c(&v8, "{} [EXPRESSION]\n{} [OPTIONS]Print the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.\n\nEXPRESSION may be:\n\n- ARG1 | ARG2: ARG1 if it is neither null nor 0, otherwise ARG2\n- ARG1 & ARG2: ARG1 if neither ar", 28);
    clap_builder::builder::command::Command::override_usage::h3ae408dfabf29d9d(&v5, &v0, &v8);
    clap_builder::builder::command::Command::after_help::h4c7141d0123bc300(&v0, &v5);
    ::libc.so.0::memcpy(&v5, &v0, 700);
    v6 = 5630049291337856 | *((long long *)&v3);
    v7 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::h7e893162b2536e71(&v0, "versionoutput version information and exitdisplay this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 7);
    clap_builder::builder::arg::Arg::long::h727826ec2374011a(&v8, &v0, "versionoutput version information and exitdisplay this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 7);
    clap_builder::builder::arg::Arg::help::h2a63d425159283f4(&v0, &v8, "output version information and exitdisplay this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 35);
    clap_builder::builder::arg::Arg::action::h8b1e83e34d077360(&v8, &v0, 8);
    clap_builder::builder::command::Command::arg::h5f6873804174c008(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h7e893162b2536e71(&v5, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::h727826ec2374011a(&v8, &v5, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::h2a63d425159283f4(&v5, &v8, "display this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 26);
    clap_builder::builder::arg::Arg::action::h8b1e83e34d077360(&v8, &v5, 5);
    clap_builder::builder::command::Command::arg::h5f6873804174c008(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h7e893162b2536e71(&v0, "expression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 10);
    clap_builder::builder::arg::Arg::action::h8b1e83e34d077360(&v8, &v0, 1);
    ::libc.so.0::memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 32;
    v2 = *((int *)&v10);
    clap_builder::builder::command::Command::arg::h5f6873804174c008(a0, &v5, &v0);
    return a0;
}
