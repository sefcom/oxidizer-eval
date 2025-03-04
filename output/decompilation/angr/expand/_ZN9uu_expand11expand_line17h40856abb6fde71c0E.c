long long uu_expand::expand_line::h40856abb6fde71c0(struct_2 *a0, unsigned long long a1[3], unsigned long long *a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [sp-0x9e]
    char v1;  // [sp-0x9d]
    unsigned int v2;  // [sp-0x9c]
    void* v3;  // [sp-0x98]
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
    unsigned long v17;  // r13
    unsigned long long v18;  // rax
    unsigned int v19;  // r12d
    unsigned int v20;  // edx
    unsigned long v21;  // r12
    unsigned long long v22;  // rcx
    void* v23;  // rcx
    char *v24;  // r13
    unsigned long long v25;  // rsi
    char *v26;  // rdi
    char *v27;  // rdx
    unsigned long long v28;  // rcx
    unsigned long long v29;  // r8
    unsigned int v30;  // eax
    unsigned long long v31;  // rsi
    unsigned long long v32;  // r13
    unsigned long long v33;  // r12
    void* v34;  // rax
    char *v35;  // rax
    unsigned long long v36;  // r12
    char *v37;  // rdx, Other Possible Types: unsigned int
    void* v38;  // rdi
    char *v39;  // rsi
    unsigned long long v40[3];  // rdi
    char *v41;  // rsi
    unsigned long long v42;  // rbx

    v14 = a0->field_10;
    if (v14)
    {
        v1 = a4->field_49;
        v0 = a4->field_48;
        v4 = &a4->field_38->field_0;
        v6 = a4->field_40;
        v5 = &a0->field_8->field_0;
        v2 = v5 & 0xffffffffffffff00 | 1;
        v7 = a4->field_4a;
        v3 = 0;
        v15 = 0;
        do
        {
            v16 = *((char *)(v5 + v15));
            if (v1)
            {
                v17 = v16 < 0;
                v42 = 1;
                v18 = 1;
                if (!(&v15[1 + v17] <= v14))
                    goto LABEL_4b2bf0;
                core::str::converts::from_utf8::ha1effb4cca6d9901(&v8, ::0x4af4f0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(v15, &v15[1 + v17], v5, v14, &g_51cf30), a2);
                if (*((long long *)&v8))
                {
                    v18 = 1;
                    v19 = 2;
                    goto LABEL_4b2d03;
                }
                else
                {
                    v11 = *((long long *)&v9);
                    v12 = *((long long *)&v10) + v11;
                    v20 = (!(int)::0x4b0860::core::str::validations::next_code_point::h87ad66f27761ddf6(&v11) ? 0x110000 : v37);
                    if (v20 == 8)
                    {
                        v19 = 0;
LABEL_4b2dc7:
                        v18 = 0;
                        goto LABEL_4b2dc9;
                    }
                    else if (v20 == 9)
                    {
                        v19 = 1;
                        goto LABEL_4b2dc7;
                    }
                    else
                    {
                        v18 = 1;
                        v19 = 2;
                        if (v20 != 0x110000)
                        {
                            if (v20 < 127)
                            {
                                if (!(v20 <= 31))
                                    goto LABEL_4b2dc9;
                                goto LABEL_4b2dc7;
                            }
                            else if (v20 >= 160)
                            {
                                v18 = ::0x4af7e0::unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v20);
LABEL_4b2dc9:
                                v42 = v17 + 1;
                                if (v19 == 1)
                                    goto LABEL_4b2de0;
LABEL_4b2d12:
                                if (v19 != 2)
                                {
                                    v22 = v3;
                                    v23 = v22 - 1;
                                    if (v22 < 1)
                                        v23 = 0;
                                    v3 = v23;
                                    if (v15 >= v14)
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(v15, v14, &g_51cf78); /* do not return */
LABEL_4b2bfe:
                                    v27 = v5;
                                    v30 = v2;
                                    if (*((char *)(v27 + v15)) != 32)
                                        v30 = 0;
                                    v2 = v30;
                                    v25 = &v15[v42];
                                    v26 = v15;
                                    v28 = v14;
                                    v29 = &g_51cf90;
                                    goto LABEL_4b2c2b;
                                }
LABEL_4b2bf0:
                                v3 += v18;
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
                v18 = 1;
                if (v16 == 9)
                {
                    v42 = 1;
LABEL_4b2de0:
                    v21 = v3;
                    v24 = uu_expand::next_tabstop::h053856bdaef20e1a(a2, a3, v21, v7);
                    v3 = &v24[v21];
                    if (!(!((char)v2 & 1)) || !(v0))
                    {
                        if (v24 > v6)
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, " --tabs=", 1, v24);
                            v31 = *((long long *)&v9);
                            v32 = *((long long *)&v10);
                            v33 = a1[2];
                            if (v32 < a1[0] - v33)
                            {
                                memcpy(a1[1] + v33, v31, v32);
                                a1[2] = v33 + v32;
                            }
                            else
                            {
                                v34 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(a1, v31, v32);
                                if (v34)
                                {
                                    ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v8);
                                    return v34;
                                }
                            }
                            ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v8);
                            continue;
                        }
                        if (v24 && v24 < v6 && *((char *)(v4 + v24)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(v4, v6, 0, v24, &g_51cf60); /* do not return */
                        v36 = a1[2];
                        if (v24 >= a1[0] - v36)
                        {
                            v40 = a1;
                            v41 = v4;
LABEL_4b2da6:
                            v34 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(v40, v41, v24);
                            if (v34)
                                return v34;
                        }
                        else
                        {
                            v38 = a1[1] + v36;
                            v39 = v4;
LABEL_4b2c50:
                            memcpy(v38, v39, v24);
                            a1[2] = &v24[v36];
                        }
                    }
                    else
                    {
                        v25 = &v15[v42];
                        v26 = v15;
                        v27 = v5;
                        v28 = v14;
                        v29 = &g_51cf48;
LABEL_4b2c2b:
                        v35 = ::0x4af4f0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(v26, v25, v27, v28, v29);
                        v24 = v37;
                        v36 = a1[2];
                        if (v37 >= a1[0] - v36)
                        {
                            v40 = a1;
                            v41 = v35;
                            goto LABEL_4b2da6;
                        }
                        else
                        {
                            v38 = a1[1] + v36;
                            v39 = v35;
                            goto LABEL_4b2c50;
                        }
                    }
                }
                else
                {
                    v19 = (v16 != 8) * 2;
LABEL_4b2d03:
                    v42 = 1;
                    if (v19 == 1)
                        goto LABEL_4b2de0;
                    goto LABEL_4b2d12;
                }
            }
        } while ((v15 += v42, v15 < v14));
    }
    v34 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h1b96ef1d18ffca54(a1);
    if (!v34)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::habfea7c34b2cc233(a0, 0);
        return 0;
    }
    return v34;
}
