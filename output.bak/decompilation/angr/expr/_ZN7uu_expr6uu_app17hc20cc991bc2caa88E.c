long long uu_expr::uu_app::hc20cc991bc2caa88(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::h76addc3ba26221e4(&v0, uucore::util_name::h60d842bf27b05e82(), v12);
    clap_builder::builder::command::Command::version::h66ca2875f1466deb(&v5, &v0);
    clap_builder::builder::command::Command::about::heb0ed7269ad341e1(&v0, &v5);
    uucore::format_usage::h76fcb2d15fbabc58(&v8, "{} [EXPRESSION]\n{} [OPTIONS]Print the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.\n\nEXPRESSION may be:\n\n- ARG1 | ARG2: ARG1 if it is neither null nor 0, otherwise ARG2\n- ARG1 & ARG2: ARG1 if neither ar", 28);
    clap_builder::builder::command::Command::override_usage::h7cc06664601e5526(&v5, &v0, &v8);
    clap_builder::builder::command::Command::after_help::ha3b77d5d1d813194(&v0, &v5);
    ::libc.so.0::memcpy(&v5, &v0, 700);
    v6 = 5630049291337856 | *((long long *)&v3);
    v7 = *((int *)&v4);
    clap_builder::builder::arg::Arg::new::h39d6d013c6f207ca(&v0, "versionoutput version information and exitdisplay this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 7);
    clap_builder::builder::arg::Arg::long::h013cd6110297798e(&v8, &v0, "versionoutput version information and exitdisplay this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 7);
    clap_builder::builder::arg::Arg::help::h6cc7c409285df083(&v0, &v8, "output version information and exitdisplay this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 35);
    clap_builder::builder::arg::Arg::action::h0a3764240212ffaf(&v8, &v0, 8);
    clap_builder::builder::command::Command::arg::hdabab5c48a2b492d(&v0, &v5, &v8);
    clap_builder::builder::arg::Arg::new::h39d6d013c6f207ca(&v5, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::h013cd6110297798e(&v8, &v5, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::h6cc7c409285df083(&v5, &v8, "display this help and exitexpression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 26);
    clap_builder::builder::arg::Arg::action::h0a3764240212ffaf(&v8, &v5, 5);
    clap_builder::builder::command::Command::arg::hdabab5c48a2b492d(&v5, &v0, &v8);
    clap_builder::builder::arg::Arg::new::h39d6d013c6f207ca(&v0, "expression/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/iter.rs", 10);
    clap_builder::builder::arg::Arg::action::h0a3764240212ffaf(&v8, &v0, 1);
    ::libc.so.0::memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 32;
    v2 = *((int *)&v10);
    clap_builder::builder::command::Command::arg::hdabab5c48a2b492d(a0, &v5, &v0);
    return a0;
}
