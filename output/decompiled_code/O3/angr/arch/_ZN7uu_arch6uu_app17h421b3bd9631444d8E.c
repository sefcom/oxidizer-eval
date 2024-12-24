long long uu_arch::uu_app::h421b3bd9631444d8(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x5a8]
    char v1;  // [bp-0x2ec]
    char v2;  // [bp-0x2e4]
    char v3;  // [bp-0x2e0]
    unsigned long long v5;  // rdx
    unsigned int v6;  // ecx

    clap_builder::builder::command::Command::new::he01e15b368d9d9d5(&v3, uucore::util_name::h412db5e565a079f3(), v5);
    clap_builder::builder::command::Command::version::h35b6d97e695abe6d(&v0, &v3, v5);
    clap_builder::builder::command::Command::about::ha7ab9907709e20a7(&v3, &v0);
    clap_builder::builder::command::Command::after_help::haa5836f6a459c963(&v0, &v3);
    memcpy(a0, &v0, 700);
    v6 = *((int *)&v2);
    *((long long *)&(&a0->padding_0)[1]) = 549755814016 | *((long long *)&v1);
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v6;
    return a0;
}
