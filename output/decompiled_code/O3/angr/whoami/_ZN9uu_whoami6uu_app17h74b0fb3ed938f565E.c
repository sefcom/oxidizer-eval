long long uu_whoami::uu_app::h74b0fb3ed938f565(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x5c0]
    char v1;  // [bp-0x5a8]
    char v2;  // [bp-0x2ec]
    char v3;  // [bp-0x2e4]
    char v4;  // [bp-0x2e0]
    unsigned long long v6;  // rdx
    unsigned int v7;  // ecx

    clap_builder::builder::command::Command::new::h140a7e7c798df51d(&v4, uucore::util_name::h60d842bf27b05e82(), v6);
    clap_builder::builder::command::Command::version::h6d79b15dc0546f23(&v1, &v4, v6);
    clap_builder::builder::command::Command::about::he894dc93fe7cb947(&v4, &v1);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{}", 2);
    clap_builder::builder::command::Command::override_usage::hab49b17853338a37(&v1, &v4, &v0);
    memcpy(a0, &v1, 700);
    v7 = *((int *)&v3);
    *((long long *)&(&a0->padding_0)[1]) = 549755814016 | *((long long *)&v2);
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v7;
    return a0;
}
