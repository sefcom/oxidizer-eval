long long uu_whoami::uu_app::h2921123d4c0f2e97(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x5c0]
    char v1;  // [bp-0x5a8]
    char v2;  // [bp-0x2ec]
    char v3;  // [bp-0x2e4]
    char v4;  // [bp-0x2e0]
    unsigned long long v6;  // rdx
    unsigned int v7;  // ecx

    clap_builder::builder::command::Command::new::h877ec7ead283acda(&v4, uucore::util_name::h412db5e565a079f3(), v6);
    clap_builder::builder::command::Command::version::hc6c35643d03ba57a(&v1, &v4, v6);
    clap_builder::builder::command::Command::about::hb23f48a276c8e999(&v4, &v1);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{}/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 2);
    clap_builder::builder::command::Command::override_usage::h53411f7c569450b7(&v1, &v4, &v0);
    memcpy(a0, &v1, 700);
    v7 = *((int *)&v3);
    *((long long *)&(&a0->padding_0)[1]) = 549755814016 | *((long long *)&v2);
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v7;
    return a0;
}
