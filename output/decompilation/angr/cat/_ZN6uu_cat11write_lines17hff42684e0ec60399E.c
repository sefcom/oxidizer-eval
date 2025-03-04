long long uu_cat::write_lines::hff42684e0ec60399(unsigned long long a0[2], struct_1 *a1, char a2[5], struct_0 *a3)
{
    char v0;  // [sp-0x7d01]
    unsigned long v1;  // [sp-0x7d00]
    struct_1 *v2;  // [sp-0x7cf0]
    unsigned int v3;  // [sp-0x7ce8]
    unsigned int v4;  // [sp-0x7ce4]
    unsigned long long v5;  // [sp-0x7ce0]
    unsigned long v6;  // [sp-0x7cd8]
    unsigned long long v7;  // [sp-0x7cd0]
    void* v8;  // [sp-0x7cc8], Other Possible Types: unsigned long long
    char v9;  // [bp-0x7cc0]
    void* v10;  // [sp-0x7cb8]
    unsigned long long v11;  // [sp-0x7cb0]
    void* v12;  // [sp-0x7ca8]
    unsigned long long v13;  // [sp-0x7ca0]
    char v14;  // [sp-0x7c98]
    unsigned long long v15;  // [sp-0x7c90]
    unsigned long long v16;  // [sp-0x7c88]
    unsigned long v17;  // [sp-0x7c78]
    struct_0 *v18;  // [sp-0x7c70]
    unsigned long long v19;  // [sp-0x7c68]
    unsigned long v20;  // [sp-0x7c60]
    unsigned long long v21;  // [sp-0x7c58]
    struct struct_0 **v22;  // [sp-0x7c50]
    unsigned long long v23;  // [sp-0x7c48]
    char *v24;  // [sp-0x7c40]
    unsigned long long v25;  // [sp-0x7c38]
    char v26;  // [bp-0x7c30]
    void* v27;  // [sp-0x7030]
    void* v28;  // [sp-0x6030]
    void* v29;  // [sp-0x5030]
    void* v30;  // [sp-0x4030]
    void* v31;  // [sp-0x3030]
    void* v32;  // [sp-0x2030]
    void* v33;  // [sp-0x1030]
    struct_1 *v35;  // r15
    char v36;  // cc_dep1
    unsigned long long v38;  // cc_ndep
    unsigned long long v39;  // rdx
    char *v40;  // r15
    char *v41;  // r12
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // r13
    char *v45;  // rax
    unsigned int v46;  // ecx
    unsigned long long v47[2];  // rcx
    unsigned long long v48[2];  // rcx

    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v27 = 0;
    v35 = a1;
    memset(&v26, 0, 0x7c00);
    v17 = std::io::stdio::stdout::h077da66234850927();
    v1 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v17);
    v0 = a2[4];
    v36 = a2[2];
    *((int *)&v15) = (!a2[2] ? "\n" : "$\n");
    v38 = v36 < 0;
    v16 = (v36) + 1;
    v5 = &g_518710;
    v4 = a2[1];
    v3 = a2[3];
    v2 = a1;
    while (true)
    {
        v6 = _$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..io..Read$GT$::read::hcece2f3bec9614ed(v35, &v26, 0x7c00);
        v7 = v39;
        if (!(!v6) || !(v39))
            break;
        v40 = ::0x4acde0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(v39, &v26, 0x7c00, &g_5186f8);
        v41 = 0;
        do
        {
            if (v39 <= v41)
                core::panicking::panic_bounds_check::h25a5330941572dd1(v41, v39, v5); /* do not return */
            if (*((char *)(v40 + v41)) == 10)
            {
                uu_cat::write_new_line::h703f4daf25cc548e(&v8, &v1, a2, a3, v2->field_4);
                v42 = v8;
                if (v42 != 9223372036854775814)
                {
                    vvar_625{reg 24} = a0;
                    *((int128_t *)&v47[1]) = *((int128_t *)&v9);
                    v47[0] = v42;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v6);
                    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                }
                a3->field_8 = 1;
                v38 = v42 < 9223372036854775814;
                v41 += 1;
            }
            else
            {
                if (!a3->padding_9)
                {
                    a3->field_a = 0;
                    if (a3->field_8 && v0)
                    {
                        v18 = a3;
                        v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v8 = 2;
                        v10 = 0;
                        v11 = 6;
                        v12 = 0;
                        v13 = 32;
                        v14 = 3;
                        v20 = &g_518728;
                        v21 = 2;
                        v24 = &v8;
                        v25 = 1;
                        v22 = &v18;
                        v23 = 1;
                        v43 = std::io::Write::write_fmt::h6cba046ccfa3b685(&v1, &v20);
                        if (v43)
                        {
                            v48 = a0;
                            v48[0] = 0x8000000000000000;
                            v48[1] = v43;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v6);
                            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                        }
                        a3->field_0 = a3->field_0 + 1;
                        v38 = amd64g_calculate_rflags_c(20, v43, 0, v38);
                    }
                }
                else
                {
                    v43 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v1, "\r", 1);
                    if (v43)
                    {
                        vvar_631{reg 24} = a0;
                        v48[0] = 0x8000000000000000;
                        v48[1] = v43;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v6);
                        return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                    }
                    *((unsigned short *)&a3->field_8) = 0;
                    a3->field_a = 0;
                }
                v44 = uu_cat::write_end::h5e37c7be961ff133(&v1, v40 + v41, v39 - v41, v4, v3);
                v45 = &v41[v44];
                if (v45 != v39)
                {
                    if (!((char)amd64g_calculate_condition(2, 8, v45, v39, v38)))
                    {
                        v41 = v45;
                        v5 = &g_518748;
                        core::panicking::panic_bounds_check::h25a5330941572dd1(v41, v39, v5); /* do not return */
                    }
                    switch (v46)
                    {
                    case 10:
                        uu_cat::write_end_of_line::h4ed837c9dff89e3f(&v8, &v1, v15, v16, v2->field_4);
                        v42 = v8;
                        if (v42 != 9223372036854775814)
                        {
                            v47 = a0;
                            *((int128_t *)&v47[1]) = *((int128_t *)&v9);
                            v47[0] = v42;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v6);
                            return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
                        }
                        a3->field_8 = 1;
                        v38 = (&v41[v44] <= v41 ? 0 : 1);
                        v41 = &v41[v44 + 1];
                        break;
                    case 13:
                        a3->padding_9[0] = 1;
                        v38 = (&v41[v44] <= v41 ? 0 : 1);
                        v41 = &v41[v44 + 1];
                        break;
                    default:
                        v8 = 0;
                        core::panicking::assert_failed::hdf70ea46a40497a8(0, v40 + v45, "\n", &v8, &g_518760); /* do not return */
                    }
                }
                else
                {
                    a3->field_8 = 0;
                    break;
                }
            }
        } while (v41 < v39);
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v6);
        v35 = v2;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(&v6);
    a0[0] = 9223372036854775814;
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(v1);
}
