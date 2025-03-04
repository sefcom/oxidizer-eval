long long uu_join::Spec::parse::hd0c421fb4c424f36(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [sp-0xb0]
    char *v1;  // [sp-0xb0]
    unsigned long long v2;  // [sp-0xa8]
    void* v3;  // [sp-0xa0]
    unsigned long long v4;  // [sp-0x98]
    unsigned long long v5;  // [sp-0x90]
    char v6;  // [sp-0x88]
    char v7;  // [bp-0x80]
    unsigned long long v8;  // [sp-0x78]
    unsigned long v9;  // [sp-0x70]
    unsigned long v10;  // [sp-0x68], Other Possible Types: unsigned long long
    struct struct_1 **v11;  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    void* v13;  // [sp-0x50]
    char v14;  // [bp-0x40]
    unsigned int v15;  // [sp-0x28]
    unsigned int v17;  // edx
    unsigned int v18;  // eax
    char v19;  // bpl
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rcx

    v8 = a1 + a2;
    v18 = ((int)core::str::validations::next_code_point::hd261ae405076a208(&v7) ? v17 : 0x110000);
    if (v18 != 48)
    {
        if (v18 == 49)
        {
            v19 = 0;
            goto LABEL_4c3736;
        }
        if (v18 != 50)
        {
            v3 = 0;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            v0 = &v3;
            v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v20 = &g_535270;
LABEL_4c389e:
            v9 = v20;
            v10 = 1;
            v13 = 0;
            v11 = &v0;
            v12 = 1;
            ::0x4c2990::core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&v14, &v9);
            v15 = 1;
            *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v14);
            v22 = &g_5352b8;
LABEL_4c38f8:
            a0->field_10 = v22;
            v21 = 1;
        }
        else
        {
            v19 = vvar_53{reg 56} & 0xffffffffffffff00 | 1;
LABEL_4c3736:
            if (!((int)core::str::validations::next_code_point::hd261ae405076a208(&v7)) || !(v17 == 46))
            {
                v3 = 0;
                v4 = a1;
                v5 = a2;
                v6 = 1;
                v1 = &v3;
                v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v9 = &g_535260;
                v10 = 1;
                v13 = 0;
                v11 = &v0;
                v12 = 1;
                ::0x4c2990::core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&v14, &v9);
                v15 = 1;
                *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v14);
                a0->field_10 = &g_5352b8;
                a0->field_0 = 1;
                return &g_5352b8;
            }
            uu_join::parse_field_number::h9316b11a89c3fc26(&v9, ::0x4c2980::core::slice::iter::Iter$LT$T$GT$::make_slice::h63c620eea536cd3e(a1, v8), a2);
            v23 = v9;
            v22 = v10;
            if (v23)
            {
                *((unsigned long long *)&a0->field_8) = v23;
                goto LABEL_4c38f8;
            }
            else
            {
                a0->field_8 = 1;
                a0->padding_9[0] = v19;
                a0->field_10 = v22;
                v21 = 0;
            }
        }
    }
    else if ((int)core::str::validations::next_code_point::hd261ae405076a208(&v7))
    {
        v3 = 0;
        v4 = a1;
        v5 = a2;
        v6 = 1;
        v0 = &v3;
        v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v20 = &g_535260;
        goto LABEL_4c389e;
    }
    else
    {
        a0->field_8 = 0;
        v21 = 0;
    }
    a0->field_0 = v21;
    return v21;
}
