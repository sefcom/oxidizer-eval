int uu_seq::numberparse::parse_decimal_and_exponent::h1c158e7673cd805d()
{
    unsigned long long v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x90]
    unsigned long long v2;  // [sp-0x88]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    int v5;  // [bp-0x77]
    char v6;  // [bp-0x70]
    unsigned long v7;  // [sp-0x58], Other Possible Types: unsigned long long
    char v8;  // [sp-0x50]
    int v9;  // [bp-0x4f]
    int v10;  // [sp-0x40]
    char v11;  // [bp-0x30]
    char *v13;  // r8
    char *v14;  // rsi
    unsigned long v15;  // rdx
    char *v16;  // rsi
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rsi
    char v19;  // al
    struct_1 *v21;  // rdi
    unsigned long long v24;  // rdi
    unsigned long long v25;  // rdx
    unsigned long v26;  // rcx
    unsigned long long v27;  // rax
    unsigned long long v28;  // r15
    void* v29;  // r15
    int v32;  // xmm0

    v14 = v13 + 1;
    if (!((char)amd64g_calculate_condition(4, 24, v13 + 1, 0, (unsigned long long)(char)(&v11 < 104))))
    {
        if (v15 <= v14)
        {
            if (v15 != v14)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(v16 + v14)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&v3, v14 + v16, v15 - v14);
    if (!v3)
    {
        v2 = *((long long *)&v4);
        _ZN10bigdecimal8impl_num68_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$14from_str_radix17hea2b920a5b162d36E.llvm.11928066015573170657(&v3, v16, v15);
        v17 = *((long long *)&v3);
        if (v0 != 0x8000000000000000)
        {
            v19 = v4;
            *((int128_t *)&v9) = (int128_t)v5;
            *((int128_t *)&v10) = (int128_t)v5;
            v0 = v17;
            v7 = v0;
            v8 = v19;
            if (v13)
            {
                if (v13 >= v15)
                {
                    if (v13 != v15)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                else
                {
                    if (*((char *)(v16 + v13)) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
            }
            core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v3, v16, v13);
            if (v3)
            {
                v21->field_8 = 0;
                v21->field_0 = 9223372036854775812;
                goto LABEL_497ea8;
            }
            v24 = v2;
            v25 = v24 + 2;
            if (v24 <= 0)
                v25 = 2;
            if (*((long long *)&v4) >= 0)
                v25 = 1;
            v27 = (v15 < 2 ? 0 : -0x100 | *((short *)&v16) == 11821) + v24 + v26;
            v1 = v25;
            if (v27 < v1)
            {
LABEL_497e68:
                v28 = &v13[~(v26)];
                v29 = v28 - vvar_320;
                if (v28 < vvar_320)
                {
                    v29 = 0;
                    goto LABEL_497e80;
                }
                else
                {
                    if (!((char)amd64g_calculate_condition(8, 8, v28, vvar_320, (unsigned long long)(char)(&v11 < 104))))
                    {
LABEL_497e80:
                        if (!(char)_ZN6uu_seq11numberparse19is_minus_zero_float17h9c975407bde38417E.llvm.11928066015573170657(v16, v15, &v7))
                        {
                            *((long long *)((char *)&v21[3].field_0 + 5)) = (long long)(&v10)[8];
                            v32 = *((int128_t *)&v7);
                            *((int128_t *)((char *)&v21[1].field_0 + 7)) = (int128_t)(&v9)[7];
                            *((void*)&v21->field_0) = v32;
                            *((unsigned long long *)((char *)&v21[4].field_0 + 4)) = v1;
                            *((void* *)((char *)&v21[5].field_0 + 3)) = v29;
                        }
                        else
                        {
                            v21->field_0 = 9223372036854775810;
                            *((unsigned long long *)((char *)&v21[4].field_0 + 4)) = v1;
                            *((void* *)((char *)&v21[5].field_0 + 3)) = v29;
LABEL_497ea8:
                            if (v0)
                                __rust_dealloc(*((long long *)&v8));
                        }
                        return;
                    }
                }
            }
            else if (v27 >= 0)
            {
                v1 = v27;
                goto LABEL_497e68;
            }
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        else
        {
            v18 = *((long long *)&v4);
            if (v18 >= 9223372036854775812 && v18)
                __rust_dealloc(*((long long *)&v6));
        }
    }
    v21->field_8 = 0;
    v21->field_0 = 9223372036854775812;
    return;
}
