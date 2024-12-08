long long uu_yes::uu_app::h12eef1d96a91dfec(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x78c]
    char v2;  // [bp-0x784]
    char v3;  // [bp-0x780]
    char v4;  // [bp-0x530]
    unsigned long long v5;  // [sp-0x268]
    unsigned long long v7;  // rdx
    unsigned int v8;  // ecx

    clap_builder::builder::command::Command::new::h5d407a142f90baf2(&v0, uucore::util_name::h412db5e565a079f3(), v7);
    clap_builder::builder::command::Command::version::h619f2ed6d78e05de(&v4, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hb93b1f2691c93731(&v0, &v4, "Repeatedly display a line with STRING (or 'y')", 46);
    uucore::format_usage::h00b69bae12d8ac9c(&v3, "{} [STRING]...", 14);
    clap_builder::builder::command::Command::override_usage::hfd7e2a9d36b590be(&v4, &v0, &v3);
    clap_builder::builder::arg::Arg::new::h1c20ad40024851f4(&v0, "STRING", 6);
    v5 = 2;
    clap_builder::builder::arg::Arg::value_parser::h9f3db684ff39eaec(&v3, &v0, &v5);
    clap_builder::builder::arg::Arg::action::ha99b9e4df4b8b86f(&v5, &v3);
    clap_builder::builder::command::Command::arg::h65317cffc2c2e70a(&v0, &v4, &v5);
    memcpy(a0, &v0, 700);
    v8 = *((int *)&v2);
    *((long long *)&(&a0->padding_0)[1]) = 549755814016 | *((long long *)&v1);
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v8;
    return a0;
}
