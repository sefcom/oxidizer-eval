long long uu_cat::write_lines::h6e954a5b1946aebd(unsigned long long a0[2], struct_1 *a1, char a2[5], struct_0 *a3)
{
    char v0;  // [sp-0x7d01]
    unsigned long v1;  // [sp-0x7d00], Other Possible Types: unsigned long long
    unsigned int v2;  // [sp-0x7ce8]
    unsigned int v3;  // [sp-0x7ce4]
    unsigned long long v4;  // [sp-0x7ce0]
    unsigned long v5;  // [sp-0x7cd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x7cd0]
    void* v7;  // [sp-0x7cc8], Other Possible Types: unsigned long long, unsigned long
    char v8;  // [bp-0x7cc0]
    void* v9;  // [sp-0x7cb8]
    unsigned long long v10;  // [sp-0x7cb0]
    void* v11;  // [sp-0x7ca8]
    unsigned long long v12;  // [sp-0x7ca0]
    char v13;  // [sp-0x7c98]
    unsigned long long v14;  // [sp-0x7c90]
    unsigned long long v15;  // [sp-0x7c88]
    unsigned long v16;  // [sp-0x7c78], Other Possible Types: unsigned long long
    struct_0 *v17;  // [sp-0x7c70]
    unsigned long long v18;  // [sp-0x7c68]
    unsigned long v19;  // [sp-0x7c60], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x7c58]
    struct struct_0 **v21;  // [sp-0x7c50]
    unsigned long long v22;  // [sp-0x7c48]
    unsigned long long v23;  // [sp-0x7c40]
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
    struct_1 *v42;  // r15
    char *v43;  // r15
    char *v44;  // r12
    unsigned long long v45;  // rax
    unsigned long long v46;  // r13
    char *v47;  // rax
    unsigned int v48;  // ecx
    unsigned long long v49;  // rax
    unsigned long long v50[2];  // rcx
    unsigned long long v51[2];  // rcx
    unsigned long long v52[2];  // rcx

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
    *((int *)&v14) = (!a2[2] ? "\n: " : "$\n");
    v38 = v36 < 0;
    v15 = (-0x100 | v36) + 1;
    v4 = &g_519128;
    v3 = a2[1];
    v2 = a2[3];
    while (true)
    {
        v5 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(v42, &v25, 0x7c00);
        v6 = v35;
        if (v5 || !v35)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hb561c660fdad22b7(&v5);
            a0[0] = 9223372036854775814;
            break;
        }
        else
        {
            v43 = ::0x4ad250::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h63b1aa296660cfa4(v35, &v25, 0x7c00, &g_519110);
            v44 = 0;
            if (v35 <= v44)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            if (*((char *)(v43 + v44)) == 10)
            {
                uu_cat::write_new_line::hccd24c400a72ac70(&v7, &v1, a2, a3, a1->field_4);
                if (v7 != 9223372036854775814)
                {
                    v50 = a0;
                    v50[1] = v9;
                    *((int128_t *)&v50[0]) = *((int128_t *)&v7);
                    goto LABEL_4b0877;
                }
                else
                {
                    a3->field_8 = 1;
                    v38 = v7 < 9223372036854775814;
                    v44 += 1;
                    goto LABEL_4b0600;
                }
            }
            if (a3->padding_9)
            {
                v45 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v1, "\r", 1);
                if (!v45)
                {
                    *((short *)&a3->field_8) = 0;
                    a3->field_a = 0;
                    goto LABEL_4b0770;
                }
            }
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
                v19 = &g_519140;
                v20 = 2;
                v23 = &v7;
                v24 = 1;
                v21 = &v17;
                v22 = 1;
                v45 = std::io::Write::write_fmt::h48dffa1e1263a8c7(&v1, &v19);
                if (!v45)
                {
                    a3->field_0 = a3->field_0 + 1;
                    v38 = amd64g_calculate_rflags_c(20, v45, 0, v38);
                    goto LABEL_4b0770;
                }
                v51 = a0;
                v51[0] = 0x8000000000000000;
                v51[1] = v45;
                goto LABEL_4b0877;
            }
LABEL_4b0770:
            v46 = uu_cat::write_end::h4f6b40b5cdf2b953(&v1, v43 + v44, v35 - v44, v3, v2);
            v47 = &v44[v46];
            if (v47 == v35)
            {
                a3->field_8 = 0;
LABEL_4b080f:
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hb561c660fdad22b7(&v5);
            }
            else
            {
                if (!((char)amd64g_calculate_condition(2, 8, v47, v35, v38)))
                {
                    v4 = &g_519160;
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                switch (v48)
                {
                case 10:
                    uu_cat::write_end_of_line::h7aa5fe7961908d2f(&v7, &v1, v14, v15, a1->field_4);
                    v49 = v7;
                    if (v49 != 9223372036854775814)
                    {
                        v52 = a0;
                        *((int128_t *)&v52[1]) = *((int128_t *)&v8);
                        v52[0] = v49;
LABEL_4b0877:
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hb561c660fdad22b7(&v5);
                        break;
                    }
                    else
                    {
                        a3->field_8 = 1;
                        v38 = (&v44[v46] <= v44 ? 1 : 0);
                        v44 = &v44[v46 + 1];
LABEL_4b0600:
                        if (!(v44 < v35))
                            goto LABEL_4b080f;
                        continue;
                    }
                case 13:
                    a3->padding_9[0] = 1;
                    v38 = (&v44[v46] <= v44 ? 1 : 0);
                    v44 = &v44[v46 + 1];
                    goto LABEL_4b0600;
                default:
                    v7 = 0;
                    core::panicking::assert_failed::he759f31d22e1f24d(); /* do not return */
                }
            }
        }
    }
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hbdcae57c3413de30(v1);
}
