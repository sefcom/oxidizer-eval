long long uu_arch::uu_app::h8f2567686988086a(struct_0 *a0)
{
    char v0;  // [bp-0x5a8]
    char v1;  // [bp-0x2ec]
    char v2;  // [bp-0x2e4]
    char v3;  // [bp-0x2e0]
    unsigned long long v5;  // rdx
    unsigned int v6;  // ecx

    clap_builder::builder::command::Command::new::hbb56a5a7b96c7e35(&v3, uucore::util_name::h60d842bf27b05e82(), v5);
    clap_builder::builder::command::Command::version::h7decdfeb72eb2da9(&v0, &v3);
    clap_builder::builder::command::Command::about::h18a6b7e00eeabd4f(&v3, &v0);
    clap_builder::builder::command::Command::after_help::hdeb8b7f265e710a0(&v0, &v3);
    memcpy(a0, &v0, 700);
    v6 = *((int *)&v2);
    *((unsigned long long *)&(&a0->padding_0)[1]) = 549755814016 | *((long long *)&v1);
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v6;
    return a0;
}
