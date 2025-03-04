long long uu_more::Pager::draw_prompt::hbe0a765e7105d705(struct_1 *a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x148]
    unsigned long long v2;  // [sp-0x140]
    struct struct_0 **v3;  // [sp-0x138]
    unsigned long long v4;  // [sp-0x130]
    void* v5;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x120]
    struct struct_0 **v7;  // [bp-0x118], Other Possible Types: unsigned short
    int v8;  // [bp-0x118]
    unsigned long long v9;  // [sp-0x110]
    unsigned long long v10;  // [sp-0x108]
    struct struct_0 **v11;  // [sp-0x100]
    struct struct_0 **v12;  // [sp-0xf8], Other Possible Types: unsigned long long
    char *v13;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0xe8]
    void* v15;  // [sp-0xe0]
    unsigned int v16;  // [sp-0xcc]
    int v17;  // [sp-0xc8]
    unsigned long long v18;  // [sp-0xb8]
    char v19;  // [bp-0xa8]
    char v20;  // [bp-0x90]
    char v21;  // [bp-0x80]
    char v22;  // [bp-0x78]
    char v23;  // [bp-0x68]
    char v24;  // [bp-0x60]
    char v25;  // [bp-0x50]
    char v26;  // [bp-0x48]
    char v27;  // [bp-0x38]
    unsigned long long v29;  // rax
    struct struct_0 **v30;  // rax
    struct struct_0 **v32;  // rcx
    unsigned long v33;  // rcx
    unsigned long v34;  // xmm0lq
    int v36;  // ymm0
    struct struct_0 **v37;  // rax
    unsigned long long v38;  // rax

    v29 = a0->field_30;
    if (v29 != a2)
    {
        round(v34);
        v7 = (unsigned long long)(...);
        v11 = &v7;
        v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
        v0 = &g_562a98;
        v2 = 2;
        v5 = 0;
        v37 = &v11;
    }
    else
    {
        v30 = a0->field_20;
        v32 = 1;
        if (v33)
        {
            v33 = v30;
            v30 = a0->field_28;
            v32 = v33;
        }
        v11 = v32;
        v12 = v30;
        v7 = &v11;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        v0 = &g_562a88;
        v2 = 1;
        v5 = 0;
        v37 = &v7;
    }
    v3 = v37;
    v4 = 1;
    ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v19, &v0);
    v11 = &v19;
    v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v1 = &g_562ab8;
    v2 = 2;
    v5 = 0;
    v3 = &v11;
    v4 = 1;
    ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v20, &v0);
    *((int128_t *)&v17) = *((int128_t *)&v20);
    v18 = *((long long *)&v21);
    if (a0->field_42)
    {
        if (a3 == 0x110000)
        {
            v11 = &v17;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_562b08;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v24, &v0);
            *((int128_t *)&v8) = *((int128_t *)&v24);
            v38 = *((long long *)&v25);
        }
        else
        {
            v16 = a3;
            v11 = &v17;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v13 = &v16;
            v14 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            v1 = &g_562ad8;
            v2 = 3;
            v5 = 0;
            v3 = &v11;
            v4 = 2;
            ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v22, &v0);
            *((int128_t *)&v8) = *((int128_t *)&v22);
            v38 = *((long long *)&v23);
        }
LABEL_4dda96:
        v10 = v38;
    }
    else if (a3 == 0x110000)
    {
        v10 = *((long long *)&v21);
        *((int128_t *)&v8) = *((int128_t *)&v20);
    }
    else
    {
        v11 = &v17;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v13 = &g_562b58;
        v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        v1 = &g_413510;
        v2 = 2;
        v5 = 0;
        v3 = &v11;
        v4 = 2;
        ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v26, &v0);
        *((int128_t *)&v8) = *((int128_t *)&v26);
        v38 = *((long long *)&v27);
        goto LABEL_4dda96;
    }
    v1 = &g_418aac;
    v2 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    v3 = &v7;
    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v5 = &g_418b38;
    v6 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    v11 = &g_562b28;
    v12 = 3;
    v15 = 0;
    v13 = &v0;
    v14 = 3;
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(a1, &v11), &g_562b68);
    ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v7);
    return ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v19);
}
