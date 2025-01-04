long long uu_cat::write_lines::hd655140a51395418(unsigned long long a0[2], struct_0 *a1, char a2[5], struct_1 *a3)
{
    char v0;  // [sp-0x7d01]
    unsigned long v1;  // [sp-0x7d00], Other Possible Types: unsigned long long
    unsigned int v2;  // [sp-0x7ce8]
    unsigned int v3;  // [sp-0x7ce4]
    unsigned long long v4;  // [sp-0x7ce0]
    unsigned long v5;  // [sp-0x7cd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x7cd0]
    void* v7;  // [sp-0x7cc8], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [bp-0x7cc0]
    void* v9;  // [sp-0x7cb8]
    unsigned long long v10;  // [sp-0x7cb0]
    void* v11;  // [sp-0x7ca8]
    unsigned long long v12;  // [sp-0x7ca0]
    char v13;  // [sp-0x7c98]
    unsigned long long v14;  // [sp-0x7c90]
    unsigned long long v15;  // [sp-0x7c88]
    unsigned long v16;  // [sp-0x7c78], Other Possible Types: unsigned long long
    struct_1 *v17;  // [sp-0x7c70]
    unsigned long long v18;  // [sp-0x7c68]
    unsigned long v19;  // [sp-0x7c60], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x7c58]
    struct struct_1 **v21;  // [sp-0x7c50]
    unsigned long long v22;  // [sp-0x7c48]
    char *v23;  // [sp-0x7c40]
    unsigned long long v24;  // [sp-0x7c38]
    char v25;  // [bp-0x7c30]
    void* v26;  // [sp-0x7030]
    void* v27;  // [sp-0x6030]
    void* v28;  // [sp-0x5030]
    void* v29;  // [sp-0x4030]
    void* v30;  // [sp-0x3030]
    void* v31;  // [sp-0x2030]
    void* v32;  // [sp-0x1030]
    unsigned long long v34;  // rsi
    unsigned long long v35;  // rdx
    char v36;  // cc_dep1
    unsigned long long v38;  // cc_ndep
    struct_0 *v42;  // r15
    char *v43;  // r15
    char *v44;  // r12
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47;  // r13
    char *v48;  // rax
    unsigned int v49;  // ecx
    unsigned long long v50[2];  // rcx
    unsigned long long v51[2];  // rcx

    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v27 = 0;
    v26 = 0;
    memset(&v25, 0, 0x7c00);
    v16 = std::io::stdio::stdout::h077da66234850927();
    v1 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v16, v34, v35);
    v0 = a2[4];
    v36 = a2[2];
    *((int *)&v14) = (!a2[2] ? "\n" : "$\n");
    v38 = v36 < 0;
    v15 = (-0x100 | v36) + 1;
    v4 = &g_518710;
    v3 = a2[1];
    v2 = a2[3];
    while (true)
    {
        v5 = _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read::he53d1eaa77b53b09(v42, &v25, 0x7c00);
        v6 = v35;
        if (!(!v5) || !(v35))
            break;
        v43 = ::0x4acde0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(v35, &v25, 0x7c00, &g_5186f8);
        v44 = 0;
        do
        {
            if (v35 <= v44)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            if (*((char *)(v43 + v44)) == 10)
            {
                uu_cat::write_new_line::h703f4daf25cc548e(&v7, &v1, a2, a3, a1->field_8);
                v45 = v7;
                if (v45 != 9223372036854775814)
                {
                    vvar_630{reg 24} = a0;
                    *((int128_t *)&v50[1]) = *((int128_t *)&v8);
                    v50[0] = v45;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v5);
                    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                }
                a3->field_8 = 1;
                v38 = v45 < 9223372036854775814;
                v44 += 1;
            }
            else
            {
                if (!a3->padding_9)
                {
                    a3->field_a = 0;
                    if (a3->field_8 && v0)
                    {
                        v17 = a3;
                        v18 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v7 = 2;
                        v9 = 0;
                        v10 = 6;
                        v11 = 0;
                        v12 = 32;
                        v13 = 3;
                        v19 = &g_518728;
                        v20 = 2;
                        v23 = &v7;
                        v24 = 1;
                        v21 = &v17;
                        v22 = 1;
                        v46 = std::io::Write::write_fmt::h6cba046ccfa3b685(&v1, &v19);
                        if (v46)
                        {
                            v51 = a0;
                            v51[0] = 0x8000000000000000;
                            v51[1] = v46;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v5);
                            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                        }
                        a3->field_0 = a3->field_0 + 1;
                        v38 = amd64g_calculate_rflags_c(20, v46, 0, v38);
                    }
                }
                else
                {
                    v46 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v1, "\r", 1);
                    if (v46)
                    {
                        vvar_636{reg 24} = a0;
                        v51[0] = 0x8000000000000000;
                        v51[1] = v46;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v5);
                        return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                    }
                    *((short *)&a3->field_8) = 0;
                    a3->field_a = 0;
                }
                v47 = uu_cat::write_end::h5e37c7be961ff133(&v1, v43 + v44, v35 - v44, v3, v2);
                v48 = &v44[v47];
                if (v48 != v35)
                {
                    if (!((char)amd64g_calculate_condition(2, 8, v48, v35, v38)))
                    {
                        v4 = &g_518748;
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    }
                    switch (v49)
                    {
                    case 10:
                        uu_cat::write_end_of_line::h4ed837c9dff89e3f(&v7, &v1, v14, v15, a1->field_8);
                        v45 = v7;
                        if (v45 != 9223372036854775814)
                        {
                            v50 = a0;
                            *((int128_t *)&v50[1]) = *((int128_t *)&v8);
                            v50[0] = v45;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v5);
                            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                        }
                        a3->field_8 = 1;
                        v38 = (&v44[v47] <= v44 ? 1 : 0);
                        v44 = &v44[v47 + 1];
                        break;
                    case 13:
                        a3->padding_9[0] = 1;
                        v38 = (&v44[v47] <= v44 ? 1 : 0);
                        v44 = &v44[v47 + 1];
                        break;
                    default:
                        v7 = 0;
                        core::panicking::assert_failed::hdf70ea46a40497a8(); /* do not return */
                    }
                }
                else
                {
                    a3->field_8 = 0;
                    break;
                }
            }
        } while (v44 < v35);
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v5);
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v5);
    a0[0] = 9223372036854775814;
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
}
