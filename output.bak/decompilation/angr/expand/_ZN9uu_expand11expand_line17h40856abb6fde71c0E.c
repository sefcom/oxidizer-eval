long long uu_expand::expand_line::h40856abb6fde71c0(struct_0 *a0, unsigned long long a1[3], unsigned long long *a2, unsigned long long a3, struct_2 *a4)
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
    char *v15;  // rbp
    char v16;  // cl
    unsigned long long v17;  // r13
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax
    unsigned int v20;  // r12d
    char *v21;  // rdx
    unsigned int v22;  // edx
    unsigned long v23;  // r12
    unsigned long long v24;  // rcx
    void* v25;  // rcx
    char *v26;  // r13
    unsigned long long v27;  // rsi
    unsigned long long v28;  // r8
    char *v29;  // rbp
    unsigned long long v30;  // r14
    char *v31;  // rdx
    unsigned long long v32;  // rsi
    unsigned long long v33;  // r13
    unsigned long long v34;  // r12
    void* v35;  // rax
    char *v36;  // rax
    unsigned long long v37;  // r12
    void* v38;  // rdi
    unsigned long long v40[3];  // 4096
    unsigned long long v41;  // rbx

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
        v15 = 0;
        do
        {
            v16 = *((char *)(v5 + v15));
            if (v1)
            {
                v17 = -0x100 | v16 < 0;
                v18 = 1;
                v19 = 1;
                if ((v15 += v41, v15 < v14))
                    goto LABEL_4b2bf0;
                core::str::converts::from_utf8::ha1effb4cca6d9901(&v8, ::0x4af4f0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(v15, &v15[1 + v17], v5, v14, &g_51cf30), v21);
                if (*((long long *)&v8))
                {
                    v19 = 1;
                    v20 = 2;
                    goto LABEL_4b2d03;
                }
                else
                {
                    v11 = *((long long *)&v9);
                    v12 = *((long long *)&v10) + v11;
                    v22 = (!(int)::0x4b0860::core::str::validations::next_code_point::h87ad66f27761ddf6(&v11) ? 0x110000 : (unsigned int)v21);
                    if (v22 == 8)
                    {
                        v20 = 0;
LABEL_4b2dc7:
                        v19 = 0;
                        goto LABEL_4b2dc9;
                    }
                    else if (v22 == 9)
                    {
                        v20 = 1;
                        goto LABEL_4b2dc7;
                    }
                    else
                    {
                        v19 = 1;
                        v20 = 2;
                        if (v22 != 0x110000)
                        {
                            if (v22 < 127)
                            {
                                if ((v15 += v41, v15 < v14))
                                    goto LABEL_4b2dc9;
                                goto LABEL_4b2dc7;
                            }
                            else if (v22 >= 160)
                            {
                                v19 = ::0x4af7e0::unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v22);
LABEL_4b2dc9:
                                v18 = v17 + 1;
                                if (v20 == 1)
                                    goto LABEL_4b2de0;
LABEL_4b2d12:
                                if (v20 != 2)
                                {
                                    v24 = v3;
                                    v25 = v24 - 1;
                                    if (v24 < 1)
                                        v25 = 0;
                                    v3 = v25;
                                    if (v15 >= v14)
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(v15, v14, &g_51cf78); /* do not return */
LABEL_4b2bfe:
                                    v31 = v5;
                                    v2 = 0;
                                    v27 = &v15[v18];
                                    v28 = &g_51cf90;
                                    goto LABEL_4b2c2b;
                                }
LABEL_4b2bf0:
                                v3 += v19;
                                if (v15 >= v14)
                                    core::panicking::panic_bounds_check::h25a5330941572dd1(v15, v14, &g_51cf78); /* do not return */
                                goto LABEL_4b2bfe;
                            }
                        }
                    }
                }
            }
            else
            {
                v19 = 1;
                if (v16 == 9)
                {
                    v18 = 1;
LABEL_4b2de0:
                    v23 = v3;
                    v26 = uu_expand::next_tabstop::h053856bdaef20e1a(a2, a3, v23, v7);
                    v3 = &v26[v23];
                    if (!(!((char)v2 & 1)) || !(v0))
                    {
                        if (v26 > v6)
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, " --tabs=", 1, v26);
                            v32 = *((long long *)&v9);
                            v33 = *((long long *)&v10);
                            v34 = a1[2];
                            if (v33 < a1[0] - v34)
                            {
                                memcpy(a1[1] + v34, v32, v33);
                                a1[2] = v34 + v33;
                            }
                            else
                            {
                                v35 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(a1, v32, v33);
                                if (v35)
                                {
                                    ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v8);
                                    return v35;
                                }
                            }
                            ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v8);
                            continue;
                        }
                        if (v26 && v26 < v6 && *((char *)(v4 + v26)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(v4, v6, 0, v26, &g_51cf60); /* do not return */
                        v37 = a1[2];
                        if (v26 >= a1[0] - v37)
                        {
                            v4 = v4;
LABEL_4b2da6:
                            v35 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(v40, v4, v26);
                            if (v35)
                                return v35;
                        }
                        else
                        {
                            v38 = a1[1] + v37;
                            v4 = v4;
LABEL_4b2c50:
                            memcpy(v38, v4, v26);
                            a1[2] = &v26[v37];
                        }
                    }
                    else
                    {
                        v27 = &v15[v18];
                        v28 = &g_51cf48;
                        v5 = v5;
LABEL_4b2c2b:
                        v36 = ::0x4af4f0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(v29, v27, v5, v30, v28);
                        v26 = v21;
                        v37 = a1[2];
                        if (v21 < a1[0] - v37)
                        {
                            v38 = a1[1] + v37;
                            goto LABEL_4b2c50;
                        }
                        else
                        {
                            goto LABEL_4b2da6;
                        }
                    }
                }
                else
                {
                    v20 = (unsigned int)(-0x100 | v16 != 8) * 2;
LABEL_4b2d03:
                    v18 = 1;
                    if (v20 == 1)
                        goto LABEL_4b2de0;
                    goto LABEL_4b2d12;
                }
            }
        } while ((v15 += v41, v15 < v14));
    }
    v35 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h1b96ef1d18ffca54(a1);
    if (!v35)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::habfea7c34b2cc233(a0, 0);
        return 0;
    }
    return v35;
}
