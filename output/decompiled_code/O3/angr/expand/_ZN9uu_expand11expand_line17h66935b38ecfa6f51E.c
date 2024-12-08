long long uu_expand::expand_line::h66935b38ecfa6f51(struct_0 *a0, unsigned long long a1[3], unsigned long long *a2, unsigned long long a3, struct_2 *a4)
{
    char v0;  // [sp-0x9e]
    char v1;  // [sp-0x9d]
    unsigned int v2;  // [sp-0x9c]
    void* v3;  // [sp-0x98], Other Possible Types: unsigned long long
    char *v4;  // [sp-0x90]
    char *v5;  // [sp-0x88]
    unsigned long long v6;  // [sp-0x80]
    unsigned int v7;  // [sp-0x74]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x60]
    unsigned long long v11;  // [sp-0x40]
    unsigned long long v12;  // [sp-0x38]
    unsigned long long v14;  // r14
    unsigned long long v15[3];  // 4096
    unsigned long long v16;  // 4096
    char *v17;  // rbp
    char v18;  // cl
    unsigned long long v19;  // r13
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rax
    unsigned int v22;  // r12d
    char *v23;  // rdx
    unsigned int v24;  // edx
    unsigned long v25;  // r12
    unsigned long long v26;  // rcx
    void* v27;  // rcx
    char *v28;  // r13
    unsigned long long v29;  // rsi
    unsigned long long v30;  // r8
    char *v31;  // rbp
    unsigned long long v32;  // r14
    char *v33;  // rdx
    unsigned long long v34;  // rsi
    unsigned long long v35;  // r13
    unsigned long long v36;  // r12
    void* v37;  // rax
    char *v38;  // rax
    unsigned long long v39;  // r12
    void* v40;  // rdi
    unsigned long long v42[3];  // 4096
    unsigned long long v43;  // rbx

    v14 = a0->field_10;
    if (v14)
    {
        v1 = a4->field_49;
        v0 = a4->field_48;
        v4 = &a4->field_38->field_0;
        v6 = a4->field_40;
        v5 = &a0->field_8->field_0;
        v2 = v5 | -0x100 | 1;
        v7 = a4->field_4a;
        v3 = 0;
        v17 = 0;
        do
        {
            v18 = *((char *)(v5 + v17));
            if (v1)
            {
                v19 = -0x100 | v18 < 0;
                v20 = 1;
                v21 = 1;
                if ((v17 += v43, v17 < v14))
                    goto LABEL_4b3700;
                core::str::converts::from_utf8::ha1effb4cca6d9901(&v8, ::0x4b0000::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7eb9365657e5588b(v17, &v17[1 + v19], v5, v14, &g_51ee10), v23);
                if (*((long long *)&v8))
                {
                    v21 = 1;
                    v22 = 2;
                    goto LABEL_4b3813;
                }
                else
                {
                    v11 = *((long long *)&v9);
                    v12 = *((long long *)&v10) + v11;
                    v24 = (!(int)::0x4b1370::core::str::validations::next_code_point::hd9321f49084783ac(&v11) ? 0x110000 : (unsigned int)v23);
                    if (v24 == 8)
                    {
                        v22 = 0;
LABEL_4b38d7:
                        v21 = 0;
                        goto LABEL_4b38d9;
                    }
                    else if (v24 == 9)
                    {
                        v22 = 1;
                        goto LABEL_4b38d7;
                    }
                    else
                    {
                        v21 = 1;
                        v22 = 2;
                        if (v24 != 0x110000)
                        {
                            if (v24 < 127)
                            {
                                if ((v17 += v43, v17 < v14))
                                    goto LABEL_4b38d9;
                                goto LABEL_4b38d7;
                            }
                            else if (v24 >= 160)
                            {
                                v21 = ::0x4b02f0::unicode_width::tables::charwidth::lookup_width::h3c1144d95491570b(v24);
LABEL_4b38d9:
                                v20 = v19 + 1;
                                if (v22 == 1)
                                    goto LABEL_4b38f0;
LABEL_4b3822:
                                if (v22 != 2)
                                {
                                    v26 = v3;
                                    v27 = v26 - 1;
                                    if (v26 < 1)
                                        v27 = 0;
                                    v3 = v27;
                                    if (v17 >= v14)
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
LABEL_4b370e:
                                    v33 = v5;
                                    v2 = 0;
                                    v29 = &v17[v20];
                                    v30 = &g_51ee70;
                                    goto LABEL_4b373b;
                                }
LABEL_4b3700:
                                v3 += v21;
                                if (v17 >= v14)
                                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                                goto LABEL_4b370e;
                            }
                        }
                    }
                }
            }
            else
            {
                v21 = 1;
                if (v18 == 9)
                {
                    v20 = 1;
LABEL_4b38f0:
                    v25 = v3;
                    v28 = uu_expand::next_tabstop::h3e600adfce05dc39(a2, a3, v25, v7);
                    v3 = &v28[v25];
                    if (!(!((char)v2 & 1)) || !(v0))
                    {
                        if (v28 > v6)
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, " ", 1, v28);
                            v34 = *((long long *)&v9);
                            v35 = *((long long *)&v10);
                            v36 = a1[2];
                            if (v35 < a1[0] - v36)
                            {
                                memcpy(a1[1] + v36, v34, v35);
                                a1[2] = v36 + v35;
                            }
                            else
                            {
                                v37 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hca9ee3440e1f73f7(a1, v34, v35);
                                if (v37)
                                {
                                    ::0x4b0760::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hef0842bf868d9122(&v8);
                                    return v37;
                                }
                            }
                            ::0x4b0760::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hef0842bf868d9122(&v8);
                            continue;
                        }
                        if (v28 && v28 < v6 && *((char *)(v4 + v28)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        v39 = a1[2];
                        if (v28 >= a1[0] - v39)
                        {
                            v4 = v4;
LABEL_4b38b6:
                            v37 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hca9ee3440e1f73f7(v42, v4, v28);
                            if (v37)
                                return v37;
                        }
                        else
                        {
                            v40 = a1[1] + v39;
                            v4 = v4;
LABEL_4b3760:
                            memcpy(v40, v4, v28);
                            a1[2] = &v28[v39];
                        }
                    }
                    else
                    {
                        v29 = &v17[v20];
                        v30 = &g_51ee28;
                        v5 = v5;
LABEL_4b373b:
                        v38 = ::0x4b0000::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7eb9365657e5588b(v31, v29, v5, v32, v30);
                        v28 = v23;
                        v39 = a1[2];
                        if (v23 >= a1[0] - v39)
                        {
                            goto LABEL_4b38b6;
                        }
                        else
                        {
                            v40 = a1[1] + v39;
                            goto LABEL_4b3760;
                        }
                    }
                }
                else
                {
                    v22 = (unsigned int)(-0x100 | v18 != 8) * 2;
LABEL_4b3813:
                    v20 = 1;
                    if (v22 == 1)
                        goto LABEL_4b38f0;
                    goto LABEL_4b3822;
                }
            }
        } while ((v17 += v43, v17 < v14));
    }
    v37 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h9b915c2b4847f534(a1, v15, v16);
    if (!v37)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::ha24ea31001d86a3a(a0, 0);
        return 0;
    }
    return v37;
}
