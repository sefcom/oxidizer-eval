long long uu_nl::nl::h577667c2138e41ae(unsigned long a0, unsigned long long a1[3], struct_0 *a2)
{
    char v0;  // [sp-0x161]
    unsigned long long v1;  // [sp-0x160]
    char v2;  // [bp-0x158]
    char v3;  // [bp-0x150]
    char v4;  // [bp-0x148]
    unsigned long long v5;  // [sp-0x128]
    unsigned long long v6;  // [sp-0x120]
    unsigned long long v7;  // [sp-0x118]
    unsigned long v8;  // [sp-0x110]
    unsigned long long v9;  // [sp-0xd8]
    unsigned long long v10;  // [sp-0xd0]
    unsigned long long v11;  // [sp-0xc8]
    unsigned long long v12;  // [sp-0xc0]
    unsigned long long v13;  // [sp-0xb8]
    unsigned long long v14;  // [sp-0xb0]
    unsigned long long v15;  // [sp-0xa8]
    unsigned long long v16;  // [sp-0xa0]
    unsigned long long v17;  // [sp-0x98]
    unsigned long long v18;  // [sp-0x90]
    unsigned long long v19;  // [sp-0x88]
    unsigned long long v20;  // [sp-0x80]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x68]
    int v23;  // [sp-0x48]
    unsigned long long v24;  // [sp-0x38]
    unsigned long long v26;  // r15
    void* v30;  // rbp

    v8 = a0;
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6e3dbf5939bcb51e(&v21, &v8);
    if (*((long long *)&v21) == 9223372036854775809)
        return 0;
    v19 = a2->field_38;
    v18 = a2->field_40;
    v15 = &a2->padding_0[32];
    v0 = a2->field_80;
    v17 = a2->field_60;
    v9 = a2->field_70;
    v13 = a2->field_78;
    v14 = v13 + 1;
    v12 = a2 + 1;
    v11 = &a2->padding_48;
    v10 = a2->field_68;
    v1 = a1[1];
    v20 = 0x8000000000000000;
    v16 = &a2->padding_0[16];
    v24 = *((long long *)&v22);
    *((int128_t *)&v23) = *((int128_t *)&v21);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h300adc762093d65d(&v2, &v23);
    v26 = *((long long *)&v3);
    if (v5 == v20)
        return v26;
    v5 = *((long long *)&v2);
    v6 = v26;
    v7 = *((long long *)&v4);
    v30 = a1[2] + 1;
    if (v7)
        v30 = 0;
    a1[2] = v30;
    goto *((int *)(4593888 + (unsigned int)uu_nl::SectionDelimiter::parse::h6872879c6cc1e509(vvar_172{stack -288}, v7, vvar_154{stack -136}, vvar_155{stack -144}) * 4)) + 4593888;
}
