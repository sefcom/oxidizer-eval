long long uu_join::Spec::parse::hd0c421fb4c424f36(struct_1 *a0, unsigned long a1, unsigned long a2)
{
    char *v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa8]
    void* v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x90]
    char v5;  // [sp-0x88]
    unsigned long v6;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x78]
    char v8;  // [sp-0x70], Other Possible Types: unsigned long, unsigned long long
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    struct struct_0 **v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    void* v12;  // [sp-0x50]
    char v13;  // [bp-0x40]
    unsigned int v14;  // [sp-0x28]
    unsigned long long v16;  // r15
    unsigned int v17;  // eax
    char v18;  // bpl
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned int v21;  // edx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx

    v16 = a1;
    v6 = a1;
    v7 = a1 + a2;
    if (!(int)core::str::validations::next_code_point::hd261ae405076a208(&v6))
        v17 = 0x110000;
    if (v17 == 48)
    {
        if ((int)core::str::validations::next_code_point::hd261ae405076a208(&v6))
        {
            v2 = 0;
            v3 = v16;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v19 = &g_535260;
        }
        else
        {
            a0->field_8 = 0;
            a0->field_0 = 0;
            return v20;
        }
    }
    else
    {
        if (v17 == 49)
        {
            v18 = 0;
            goto LABEL_4c3736;
        }
        else if (v17 != 50)
        {
            v2 = 0;
            v3 = v16;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v19 = &g_535270;
        }
        else
        {
            v18 = vvar_56{reg 56} & 0xffffffffffffff00 | 1;
LABEL_4c3736:
            if (!((int)core::str::validations::next_code_point::hd261ae405076a208(&v6)) || !(v21 == 46))
            {
                v2 = 0;
                v3 = v16;
                v4 = a2;
                v5 = 1;
                v0 = &v2;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v8 = &g_535260;
                v9 = 1;
                v12 = 0;
                v10 = &v0;
                v11 = 1;
                ::0x4c2990::core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4();
                v14 = 1;
                *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v13);
                a0->field_10 = &g_5352b8;
                a0->field_0 = 1;
                return &g_5352b8;
            }
            uu_join::parse_field_number::h9316b11a89c3fc26(&v8, ::0x4c2980::core::slice::iter::Iter$LT$T$GT$::make_slice::h63c620eea536cd3e(v6, v7), v23);
            v24 = v8;
            v22 = v9;
            if (!v24)
            {
                a0->field_8 = 1;
                a0->padding_9[0] = v18;
                a0->field_10 = v22;
                v20 = 0;
            }
            else
            {
                *((unsigned long long *)&a0->field_8) = v24;
LABEL_4c38f8:
                a0->field_10 = v22;
                v20 = 1;
            }
            a0->field_0 = v20;
            return v20;
        }
    }
    v8 = v19;
    v9 = 1;
    v12 = 0;
    v10 = &v0;
    v11 = 1;
    ::0x4c2990::core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4();
    v14 = 1;
    *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v13);
    v22 = &g_5352b8;
    goto LABEL_4c38f8;
}
