long long uu_join::Spec::parse::h60408c57d2f8b4bc(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa8]
    void* v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x90]
    char v5;  // [sp-0x88]
    unsigned long v6;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x78]
    unsigned long v8;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    void* v12;  // [sp-0x50]
    char v13;  // [bp-0x40]
    unsigned int v14;  // [sp-0x28]
    unsigned long long v16;  // r15
    unsigned int v17;  // edx
    char v18;  // bpl
    unsigned long long v19;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rcx

    v16 = a1;
    v6 = a1;
    v7 = a1 + a2;
    if ((int)core::str::validations::next_code_point::h7bdf62f530dba612(&v6))
    {
        if (v17 == 48)
        {
            if (!(int)core::str::validations::next_code_point::h7bdf62f530dba612(&v6))
            {
                a0->field_8 = 0;
                a0->field_0 = 0;
                return 0;
            }
            v2 = 0;
            v3 = v16;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v19 = &g_535e00;
            v8 = v19;
            v9 = 1;
            v12 = 0;
            v10 = &v0;
            v11 = 1;
            ::0x4c29f0::core::option::Option$LT$T$GT$::map_or_else::h194c0e6a97f2c7f4(&v13, &v8);
            v14 = 1;
            *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v13);
            a0->field_10 = &g_535e48;
            a0->field_0 = 1;
            return 0;
        }
        if (v17 == 49)
        {
            v18 = 0;
            goto LABEL_4c3823;
        }
        else if (v17 == 50)
        {
            v18 = vvar_59{reg 56} | -0x100 | 1;
LABEL_4c3823:
            if ((int)core::str::validations::next_code_point::h7bdf62f530dba612(&v6) && v17 == 46)
            {
                uu_join::parse_field_number::hfb19f56cd8015270(&v8, ::0x4c29e0::core::slice::iter::Iter$LT$T$GT$::make_slice::h5ed706245ae56395(v6, v7), v22);
                v23 = v8;
                v21 = v9;
                if (v23)
                {
                    *((unsigned long long *)&a0->field_8) = v23;
                    a0->field_10 = v21;
                    a0->field_0 = 1;
                    return 0;
                }
                a0->field_8 = 1;
                a0->padding_9[0] = v18;
                a0->field_10 = v21;
                a0->field_0 = 0;
                return 0;
            }
            v2 = 0;
            v3 = v16;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v8 = &g_535e00;
            v9 = 1;
            v12 = 0;
            v10 = &v0;
            v11 = 1;
            ::0x4c29f0::core::option::Option$LT$T$GT$::map_or_else::h194c0e6a97f2c7f4(&v13, &v8);
            v14 = 1;
            *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v13);
            a0->field_10 = &g_535e48;
            a0->field_0 = 1;
            return &g_535e48;
        }
    }
    v2 = 0;
    v3 = v16;
    v4 = a2;
    v5 = 1;
    v0 = &v2;
    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    vvar_289{stack -112} = v19;
    vvar_290{stack -104} = 1;
    vvar_291{stack -80} = 0;
    vvar_292{stack -96} = &v0;
    vvar_293{stack -88} = 1;
    ::0x4c29f0::core::option::Option$LT$T$GT$::map_or_else::h194c0e6a97f2c7f4(&v13, &v8);
    vvar_295{stack -40} = 1;
    *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v13);
    a0->field_10 = &g_535e48;
    a0->field_0 = 1;
    return 0;
}
