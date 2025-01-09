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
    unsigned long v17;  // r13
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbx
    unsigned int v21;  // r12d
    char *v22;  // rdx
    unsigned int v23;  // edx
    unsigned long v24;  // r12
    unsigned long long v25;  // rcx
    void* v26;  // rcx
    char *v27;  // r13
    unsigned long long v28;  // rsi
    unsigned long long v29;  // r8
    char *v30;  // rbp
    unsigned long long v31;  // r14
    char *v32;  // rdx
    unsigned long long v33;  // rsi
    unsigned long long v34;  // r13
    unsigned long long v35;  // r12
    void* v36;  // rax
    char *v37;  // rax
    unsigned long long v38;  // r12
    void* v39;  // rdi
    unsigned long long v41[3];  // 4096
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
                v18 = 1;
                v19 = 1;
                if ((v15 += v42, v15 < v14))
                    goto LABEL_4b2bf0;
                core::str::converts::from_utf8::ha1effb4cca6d9901(&v8, ::0x4af4f0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(v15, &v15[1 + v17], v5, v14, &g_51cf30), v22);
                if (*((long long *)&v8))
                {
                    v19 = 1;
                    v21 = 2;
                    goto LABEL_4b2d03;
                }
                else
                {
                    v11 = *((long long *)&v9);
                    v12 = *((long long *)&v10) + v11;
                    v23 = (!(int)::0x4b0860::core::str::validations::next_code_point::h87ad66f27761ddf6(&v11) ? 0x110000 : (unsigned int)v22);
                    if (v23 == 8)
                    {
                        v21 = 0;
LABEL_4b2dc7:
                        v19 = 0;
                        goto LABEL_4b2dc9;
                    }
                    else if (v23 == 9)
                    {
                        v21 = 1;
                        goto LABEL_4b2dc7;
                    }
                    else
                    {
                        v19 = 1;
                        v21 = 2;
                        if (v23 != 0x110000)
                        {
                            if (v23 < 127)
                            {
                                if ((v15 += v42, v15 < v14))
                                    goto LABEL_4b2dc9;
                                goto LABEL_4b2dc7;
                            }
                            else if (v23 >= 160)
                            {
                                v19 = ::0x4af7e0::unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v23);
LABEL_4b2dc9:
                                v20 = v17 + 1;
                                if (v21 == 1)
                                    goto LABEL_4b2de0;
LABEL_4b2d12:
                                if (v21 != 2)
                                {
                                    v25 = v3;
                                    v26 = v25 - 1;
                                    if (v25 < 1)
                                        v26 = 0;
                                    v3 = v26;
                                    if (v15 >= v14)
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(v15, v14, &g_51cf78); /* do not return */
LABEL_4b2bfe:
                                    v32 = v5;
                                    v2 = 0;
                                    v28 = &v15[v20];
                                    v29 = &g_51cf90;
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
                    v20 = 1;
LABEL_4b2de0:
                    v24 = v3;
                    v27 = uu_expand::next_tabstop::h053856bdaef20e1a(a2, a3, v24, v7);
                    v3 = &v27[v24];
                    if (!(!((char)v2 & 1)) || !(v0))
                    {
                        if (v27 > v6)
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v8, " --tabs=", 1, v27);
                            v33 = *((long long *)&v9);
                            v34 = *((long long *)&v10);
                            v35 = a1[2];
                            if (v34 < a1[0] - v35)
                            {
                                memcpy(a1[1] + v35, v33, v34);
                                a1[2] = v35 + v34;
                            }
                            else
                            {
                                v36 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(a1, v33, v34);
                                if (v36)
                                {
                                    ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v8);
                                    return v36;
                                }
                            }
                            ::0x4afc50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&v8);
                            continue;
                        }
                        if (v27 && v27 < v6 && *((char *)(v4 + v27)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(v4, v6, 0, v27, &g_51cf60); /* do not return */
                        v38 = a1[2];
                        if (v27 >= a1[0] - v38)
                        {
                            v4 = v4;
LABEL_4b2da6:
                            v36 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4607e557ce367ef1(v41, v4, v27);
                            if (v36)
                                return v36;
                        }
                        else
                        {
                            v39 = a1[1] + v38;
                            v4 = v4;
LABEL_4b2c50:
                            memcpy(v39, v4, v27);
                            a1[2] = &v27[v38];
                        }
                    }
                    else
                    {
                        v28 = &v15[v20];
                        v29 = &g_51cf48;
                        v5 = v5;
LABEL_4b2c2b:
                        v37 = ::0x4af4f0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h165bffab35878e2a(v30, v28, v5, v31, v29);
                        v27 = v22;
                        v38 = a1[2];
                        if (v22 >= a1[0] - v38)
                        {
                            goto LABEL_4b2da6;
                        }
                        else
                        {
                            v39 = a1[1] + v38;
                            goto LABEL_4b2c50;
                        }
                    }
                }
                else
                {
                    v21 = (v16 != 8) * 2;
LABEL_4b2d03:
                    v20 = 1;
                    if (v21 == 1)
                        goto LABEL_4b2de0;
                    goto LABEL_4b2d12;
                }
            }
        } while ((v15 += v42, v15 < v14));
    }
    v36 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h1b96ef1d18ffca54(a1);
    if (!v36)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::habfea7c34b2cc233(a0, 0);
        return 0;
    }
    return v36;
}
