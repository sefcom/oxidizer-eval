long long uu_more::Pager::draw_prompt::hbe0a765e7105d705(struct_1 *a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x140]
    struct struct_0 **v2;  // [sp-0x138]
    unsigned long long v3;  // [sp-0x130]
    void* v4;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x120]
    struct struct_0 **v6;  // [bp-0x118], Other Possible Types: int, unsigned short
    unsigned long long v7;  // [sp-0x110]
    unsigned long long v8;  // [sp-0x108]
    struct struct_0 **v9;  // [sp-0x100]
    struct struct_0 **v10;  // [sp-0xf8], Other Possible Types: unsigned long long
    char *v11;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0xe8]
    void* v13;  // [sp-0xe0]
    unsigned int v14;  // [sp-0xcc]
    int v15;  // [sp-0xc8]
    unsigned long long v16;  // [sp-0xb8]
    char v17;  // [bp-0xa8]
    char v18;  // [bp-0x90]
    char v19;  // [bp-0x80]
    char v20;  // [bp-0x78]
    char v21;  // [bp-0x68]
    char v22;  // [bp-0x60]
    char v23;  // [bp-0x50]
    char v24;  // [bp-0x48]
    char v25;  // [bp-0x38]
    unsigned long long v27;  // rax
    struct struct_0 **v28;  // rax
    struct struct_0 **v30;  // rcx
    struct struct_0 **v31;  // rax
    unsigned long v32;  // xmm0lq
    int v34;  // ymm0
    struct struct_0 **v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rdx

    v27 = a0->field_30;
    if (v27 != a2)
    {
        round(v32);
        v6 = (unsigned long long)(...);
        v9 = &v6;
        v10 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
        v0 = &g_562a98;
        v1 = 2;
        v4 = 0;
        v35 = &v9;
    }
    else
    {
        v28 = a0->field_20;
        v30 = 1;
        v31 = v28;
        if (v28)
        {
            v30 = v28;
            v31 = a0->field_28;
        }
        v9 = v30;
        v10 = v31;
        v6 = &v9;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        v0 = &g_562a88;
        v1 = 1;
        v4 = 0;
        v35 = &v6;
    }
    v2 = v35;
    v3 = 1;
    ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v17, &v0);
    v9 = &v17;
    v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v0 = &g_562ab8;
    v1 = 2;
    v4 = 0;
    v2 = &v9;
    v3 = 1;
    ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v18, &v0);
    *((int128_t *)&v15) = *((int128_t *)&v18);
    v16 = *((long long *)&v19);
    if (a0->field_42)
    {
        if (a3 == 0x110000)
        {
            v9 = &v15;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v0 = &g_562b08;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v22, &v0);
            *((int128_t *)&v6) = *((int128_t *)&v22);
            v36 = *((long long *)&v23);
        }
        else
        {
            v14 = a3;
            v9 = &v15;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v11 = &v14;
            v12 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            v0 = &g_562ad8;
            v1 = 3;
            v4 = 0;
            v2 = &v9;
            v3 = 2;
            ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v20, &v0);
            *((int128_t *)&v6) = *((int128_t *)&v20);
            v36 = *((long long *)&v21);
        }
LABEL_4dda96:
        v8 = v36;
    }
    else if (a3 == 0x110000)
    {
        v8 = *((long long *)&v19);
        *((int128_t *)&v6) = *((int128_t *)&v18);
    }
    else
    {
        v9 = &v15;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v11 = &g_562b58;
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h482629c9d5db64e0;
        v0 = &g_413510;
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 2;
        ::0x4db270::core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&v24, &v0);
        *((int128_t *)&v6) = *((int128_t *)&v24);
        v36 = *((long long *)&v25);
        goto LABEL_4dda96;
    }
    v0 = &g_418aac;
    v1 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    v2 = &v6;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &g_418b38;
    v5 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h8e43bbdd8f4ff5a1;
    v9 = &g_562b28;
    v10 = 3;
    v13 = 0;
    v11 = &v0;
    v12 = 3;
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(a1, &v9, v37), &g_562b68);
    ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v6);
    return ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v17);
}
