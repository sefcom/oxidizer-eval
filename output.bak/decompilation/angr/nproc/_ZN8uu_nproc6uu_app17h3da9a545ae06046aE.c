long long uu_nproc::uu_app::h3da9a545ae06046a(unsigned long long a0)
{
    char v0;  // [bp-0x800]
    unsigned long long v1;  // [sp-0x544]
    unsigned int v2;  // [sp-0x53c]
    char v3;  // [bp-0x538]
    char v4;  // [bp-0x27c]
    char v5;  // [bp-0x274]
    char v6;  // [bp-0x270]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::hceccec51013e9e1c(&v0, uucore::util_name::h60d842bf27b05e82(), v8);
    clap_builder::builder::command::Command::version::h7bb5058d72446d03(&v3, &v0);
    clap_builder::builder::command::Command::about::h90572b7e349fba71(&v0, &v3);
    uucore::format_usage::h76fcb2d15fbabc58(&v6, "{} [OPTIONS]...", 15);
    clap_builder::builder::command::Command::override_usage::he65458940b2f4f13(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::he198255556941580(&v3, "all", 3);
    clap_builder::builder::arg::Arg::long::h2e70cc18bf9510ea(&v6, &v3, "all", 3);
    clap_builder::builder::arg::Arg::help::h06a09468789626eb(&v3, &v6, "print the number of cores available to the system", 49);
    clap_builder::builder::arg::Arg::action::hfebe0cf4ee56a176(&v6, &v3);
    clap_builder::builder::command::Command::arg::hefe55eed1b7773c3(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::he198255556941580(&v0, "ignore", 6);
    clap_builder::builder::arg::Arg::long::h2e70cc18bf9510ea(&v6, &v0, "ignore", 6);
    clap_builder::builder::arg::Arg::value_name::h41a3621bea01d5a7(&v0, &v6);
    clap_builder::builder::arg::Arg::help::h06a09468789626eb(&v6, &v0, "ignore up to N cores", 20);
    clap_builder::builder::command::Command::arg::hefe55eed1b7773c3(a0, &v3, &v6);
    return a0;
}
