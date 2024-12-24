long long uu_nproc::uu_app::h328822479a5b7555(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    unsigned long long v1;  // [sp-0x544]
    unsigned int v2;  // [sp-0x53c]
    char v3;  // [bp-0x538]
    char v4;  // [bp-0x27c]
    char v5;  // [bp-0x274]
    char v6;  // [bp-0x270]
    unsigned long long v8;  // rdx

    clap_builder::builder::command::Command::new::hdb3d04a9201d0b42(&v0, uucore::util_name::h412db5e565a079f3(), v8);
    clap_builder::builder::command::Command::version::hb556c24644eaaa52(&v3, &v0, v8);
    clap_builder::builder::command::Command::about::h9aa325c76f81b9b2(&v0, &v3);
    uucore::format_usage::h00b69bae12d8ac9c(&v6, "{} [OPTIONS]...", 15);
    clap_builder::builder::command::Command::override_usage::ha97280997b806951(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::hde0b603e5628aa6c(&v3, "all", 3);
    clap_builder::builder::arg::Arg::long::ha1268ee8c322dc0c(&v6, &v3, "all", 3);
    clap_builder::builder::arg::Arg::help::h4044c9f2ecabe635(&v3, &v6, "print the number of cores available to the system", 49);
    clap_builder::builder::arg::Arg::action::h72096a57757c48ea(&v6, &v3);
    clap_builder::builder::command::Command::arg::ha1e4227d164b2bd0(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::hde0b603e5628aa6c(&v0, "ignore", 6);
    clap_builder::builder::arg::Arg::long::ha1268ee8c322dc0c(&v6, &v0, "ignore", 6);
    clap_builder::builder::arg::Arg::value_name::hcef9580cefe964cc(&v0, &v6, v8);
    clap_builder::builder::arg::Arg::help::h4044c9f2ecabe635(&v6, &v0, "ignore up to N cores/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 20);
    clap_builder::builder::command::Command::arg::ha1e4227d164b2bd0(a0, &v3, &v6);
    return a0;
}
