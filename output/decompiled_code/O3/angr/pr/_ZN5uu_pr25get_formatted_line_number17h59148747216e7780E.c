long long uu_pr::get_formatted_line_number::h59148747216e7780(unsigned long long a0[3], unsigned long long a1[31], unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x150]
    unsigned long long v3;  // [sp-0x148]
    unsigned long long v4;  // [sp-0x140]
    unsigned long long v5;  // [sp-0x138]
    unsigned long long v6;  // [sp-0x130]
    unsigned long v7;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x120]
    unsigned long long v9;  // [sp-0x118]
    unsigned long long v10;  // [sp-0x110]
    unsigned long long v11;  // [sp-0x108]
    void* v12;  // [sp-0x100]
    unsigned long v13;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0xf0]
    unsigned long long v15;  // [sp-0xe0]
    unsigned long long v16;  // [sp-0xd8]
    void* v17;  // [sp-0xd0]
    unsigned long long v18;  // [sp-0xc8]
    char v19;  // [sp-0xc0]
    unsigned long long v20;  // [sp-0xb8]
    unsigned long long v21;  // [sp-0xa8]
    unsigned long long v22;  // [sp-0x98]
    unsigned long long v23;  // [sp-0x90]
    char v24;  // [sp-0x88]
    char v25;  // [bp-0x80]
    char v26;  // [bp-0x78]
    char v27;  // [bp-0x70]
    unsigned long v28;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x60]
    char v30;  // [bp-0x58]
    char v31;  // [bp-0x40]
    unsigned long long v34;  // r13
    unsigned long long v35;  // r14
    struct_0 *v36;  // rbx
    unsigned long long v37;  // rax
    unsigned long v38;  // rdx

    v13 = a2;
    if (a1[27] != 0x8000000000000000)
    {
        if (!a1[2])
        {
            if (!(!a2))
                goto LABEL_5c7a9c;
        }
        else
        {
            if (a2 && !a3)
            {
LABEL_5c7a9c:
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9a9bcd8184f76830(&v25, &v13);
                v34 = a1[30];
                v0 = &a1[27];
                v35 = *((long long *)&v27);
                if (v35 < v34)
                {
                    v7 = &v25;
                    v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v9 = &v0;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdcc5ea12f14f5b72;
                    v11 = v34;
                    v12 = 0;
                    v14 = 2;
                    v15 = 1;
                    v16 = 2;
                    v17 = 0;
                    v18 = 32;
                    v19 = 1;
                    v20 = 2;
                    v21 = 2;
                    v22 = 1;
                    v23 = 32;
                    v24 = 3;
                    v1 = &g_46c020;
                    v2 = 2;
                    v5 = &v14;
                    v6 = 2;
                    v3 = &v7;
                    v4 = 3;
                    v36 = &v31;
                    core::option::Option$LT$T$GT$::map_or_else::h1b0ef2f624a6aa37(&v31, &v1);
                }
                else
                {
                    v37 = ::0x5c0970::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v35 - v34, *((long long *)&v26), v35);
                    if (!v37)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    v28 = v37;
                    v29 = v38;
                    v7 = &v28;
                    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h09b250bf7d8545ee;
                    v9 = &v0;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdcc5ea12f14f5b72;
                    v11 = v34;
                    v12 = 0;
                    v14 = 2;
                    v15 = 1;
                    v16 = 2;
                    v17 = 0;
                    v18 = 32;
                    v19 = 1;
                    v20 = 2;
                    v21 = 2;
                    v22 = 1;
                    v23 = 32;
                    v24 = 3;
                    v1 = &g_46c020;
                    v2 = 2;
                    v5 = &v14;
                    v6 = 2;
                    v3 = &v7;
                    v4 = 3;
                    v36 = &v30;
                    core::option::Option$LT$T$GT$::map_or_else::h1b0ef2f624a6aa37(&v30, &v1);
                }
                a0[2] = v36->field_10;
                *((uint128_t *)&a0[0]) = v36->field_0;
                return ::0x5bf160::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hed0b916b044e1f09(&v25);
            }
        }
    }
    a0[0] = 0;
    a0[1] = 1;
    a0[2] = 0;
    return 0x8000000000000000;
}
