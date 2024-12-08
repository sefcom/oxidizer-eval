long long uu_env::parse_name_value_opt::h1fc8152397583ce3(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0xa0]
    unsigned long long v1;  // [sp-0x98]
    unsigned long long v2;  // [sp-0x90]
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x60]
    int v7;  // [sp-0x58]
    unsigned long long v8;  // [sp-0x48]
    int v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x30]
    void* v12;  // rax
    unsigned long long v13;  // rdx

    v0 = 0x8000000000000000;
    v1 = a2;
    v2 = a3;
    uu_env::native_int_str::NativeStr::split_once::hfd887c74f59cc2b7(&v3, &v0, "=");
    if (*((long long *)&v3) != 9223372036854775809)
    {
        v8 = *((long long *)&v4);
        *((int128_t *)&v7) = *((int128_t *)&v3);
        *((int128_t *)&v9) = *((int128_t *)&v5);
        v10 = *((long long *)&v6);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0ebd4344af231603(a1 + 48, &v7, v13);
        a0->field_8 = 0;
        goto LABEL_4cc359;
    }
    else
    {
        v12 = uu_env::parse_program_opt::hc78a1d1fa054902a(a1, a2, a3);
        if (v12)
        {
            *((char **)&a0->field_8) = &g_549000;
        }
        else
        {
            a0->field_8 = 1;
LABEL_4cc359:
            v12 = 0;
        }
    }
    a0->field_0 = v12;
    return core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h8485834d925345c0(&v0);
}
