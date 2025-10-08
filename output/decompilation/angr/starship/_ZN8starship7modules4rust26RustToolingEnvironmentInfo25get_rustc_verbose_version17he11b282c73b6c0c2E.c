long long starship::modules::rust::RustToolingEnvironmentInfo::get_rustc_verbose_version(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long long v3[6];  // rax
    void* v4;  // rcx
    struct_0 *v5;  // rax
    void* v6;  // rcx
    struct_0 *v7;  // rax
    unsigned long v8;  // rsi
    struct_0 *v9;  // rax

    v3 = a1.get_rustup_settings(a2);
    v4 = 0;
    if (!((char)(((0 ^ v3[3]) & (0 ^ -(v3[3]))) >> 63)))
    {
        v4 = v3[4];
        v1 = v3[5];
    }
    v0 = v4;
    v5 = a1 + 200.get_or_try_init(a2, &v0);
    if (v5->field_0 == 0x8000000000000000)
    {
        v6 = 0;
        v7 = v5;
    }
    else
    {
        v6 = v5->field_8;
        v8 = v5->field_20;
        v9 = v5->field_28;
        a0->field_8 = v5->field_10;
        a0->field_10 = v8;
        a0->field_18 = v9;
        v7 = v9;
    }
    a0->field_0 = v6;
    return v7;
}
