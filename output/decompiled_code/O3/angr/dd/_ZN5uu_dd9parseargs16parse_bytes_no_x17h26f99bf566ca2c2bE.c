long long uu_dd::parseargs::parse_bytes_no_x::h26f99bf566ca2c2b(unsigned long long a0[4], void* a1, unsigned long a2, char *a3, char *a4)
{
    void* v0;  // [sp-0x118]
    unsigned long long v1;  // [sp-0x110]
    char v2;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xf0]
    unsigned long long v4;  // [sp-0xe8]
    unsigned long long v5;  // [sp-0xe0]
    void* v6;  // [sp-0xd8]
    char v7;  // [bp-0xc8]
    char v8;  // [bp-0xc0]
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    unsigned long v11;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0xa0]
    void* v13;  // [sp-0x98]
    char *v14;  // [sp-0x90]
    char *v15;  // [sp-0x88]
    char v16;  // [sp-0x80]
    void* v17;  // [sp-0x78]
    void* v18;  // [sp-0x68]
    unsigned short v19;  // [sp-0x58]
    char v20;  // [sp-0x56]
    char v21;  // [bp-0x48]
    char v22;  // [bp-0x40]
    void* v24;  // r14
    char *v25;  // rbp
    unsigned long long v26;  // cc_ndep
    unsigned long long v27;  // rax
    char *v28;  // rsi
    unsigned long long v29;  // rax
    char *v30;  // rdx
    char v31;  // cc_dep1
    char *v32;  // rdx
    char *v33;  // 4096
    char *v34;  // r12
    unsigned long long v35;  // rax
    char *v36;  // rdx
    unsigned long long v37;  // rax
    char *v38;  // r12
    unsigned long long v39;  // rbx
    char *v40;  // 4096
    unsigned long long v41;  // rax
    char *v42;  // rcx
    unsigned long v43;  // rbx
    unsigned long long v44;  // r15
    unsigned long long v45;  // rax
    unsigned long v46;  // rbx
    unsigned long long v47;  // r15
    unsigned long long v48;  // r12
    unsigned long long v49;  // rax
    char *v50;  // 4096
    unsigned long long v51;  // r13
    unsigned long long v52;  // rbx
    unsigned long long v54[4];  // rax
    unsigned long long v55;  // r14
    unsigned long long v56[4];  // rcx

    v19 = 257;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    v24 = 0;
    do
    {
        v27 = a4 - v24;
        v28 = v24 + a3;
        if (v27 > 15)
        {
            v29 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(99, v28);
            if (v29 == 1)
                goto LABEL_497a44;
            goto LABEL_497d60;
        }
        if (a4 != v24)
        {
            v30 = 0;
            while (true)
            {
                v31 = *((char *)(v28 + v30));
                if (*((char *)(v28 + v30)) == 99)
                    break;
                v26 = v31 < 99;
                v30 += 1;
                if (v27 == v30)
                    goto LABEL_497a5f;
            }
        }
        else
        {
LABEL_497a5f:
            v0 = 0;
            goto LABEL_497a66;
        }
LABEL_497a44:
        v25 = v24 + v32;
        if (v25 < a4 && *((char *)(a3 + v25)) == 99)
        {
            v29 = 1;
            goto LABEL_497d60;
        }
    } while ((v26 = (v24 + v32 <= v24 ? 1 : 0), v24 = v24 + v32 + 1, v24 <= a4));
    v29 = 0;
LABEL_497d60:
    v0 = v29;
LABEL_497a66:
    do
    {
        v34 = v33;
        v35 = core::slice::memchr::memrchr::had8ec28fff70f705(119, a3, v34);
        if (v35 != 1)
        {
            v1 = -0x100 | v35;
            goto LABEL_497ac6;
        }
        if (v36 < a4 && *((char *)(a3 + v36)) == 119)
        {
            v37 = 1;
            goto LABEL_497ac1;
        }
    } while (v36 <= a4);
    v37 = 0;
LABEL_497ac1:
    v1 = v37;
LABEL_497ac6:
    v39 = 0;
    while (true)
    {
        v41 = core::slice::memchr::memrchr::had8ec28fff70f705(98, a3, v40);
        if (v41 != 1)
        {
            v39 = -0x100 | v41;
            if (!(!v0))
                goto LABEL_497b06;
            goto LABEL_497b53;
        }
        if (v36 < a4 && *((char *)(a3 + v36)) == 98)
            break;
        if (!(v36 <= a4))
            goto LABEL_497afe;
    }
    v39 = 1;
LABEL_497afe:
    if (!v0)
    {
LABEL_497b53:
        if (v1)
        {
            if (!v39)
            {
                if (v38)
                {
                    if (v38 >= a4)
                    {
                        if (v38 == a4)
                            goto LABEL_497dac;
                    }
                    else
                    {
                        if (!(*((char *)(a3 + v38)) <= 191))
                            goto LABEL_497dac;
                    }
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
LABEL_497dac:
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v2, a3, v38);
                if (!v2)
                {
                    v52 = 2;
                    goto LABEL_497e71;
                }
                else
                {
                    if (!a4)
                    {
                        memcpy(0x1, a3, a4);
                        vvar_948{reg 16} = a0;
                        v54[0] = 7;
                        v54[1] = a4;
                        v54[2] = 1;
                        v54[3] = a4;
                        return v54;
                    }
                }
            }
            else
            {
LABEL_497b64:
                v43 = a2;
                if (!v43)
                {
                    v44 = 1;
                }
                else
                {
                    if (v43 < 0)
                        goto LABEL_497f86;
                    v44 = __rust_alloc(v43, 1);
                    if (!v44)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                memcpy(v44, a1, v43);
                v54 = a0;
                v54[0] = 7;
                v54[1] = v43;
                v54[2] = v44;
                v54[3] = v43;
                return v54;
            }
LABEL_497dc9:
            if (v50 < 0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            goto LABEL_497dcb;
        }
        else if (!v39)
        {
            uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v7, &v17, a3, a4);
            v45 = *((long long *)&v7);
            v46 = a2;
            if (v45 != 3)
            {
                v47 = *((long long *)&v8);
                v48 = *((long long *)&v9);
                if ((unsigned int)v45 == 2)
                    goto LABEL_497e48;
                if (!v46)
                {
                    v51 = 1;
                    goto LABEL_497f3e;
                }
                else
                {
                    if (v46 < 0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v51 = __rust_alloc(v46, 1);
                    if (v51)
                    {
LABEL_497f3e:
                        memcpy(v51, a1, v46);
                        v54 = a0;
                        v54[0] = 13;
                        v54[1] = v46;
                        v54[2] = v51;
                        v54[3] = v46;
                        if (v47)
                        {
                            v54 = __rust_dealloc(v48);
                            return v54;
                        }
                        return v54;
                    }
                }
            }
            else if (!*((long long *)&v10))
            {
                v49 = *((long long *)&v9);
                goto LABEL_497c79;
            }
            else
            {
                v13 = 0;
                v14 = a3;
                v15 = a4;
                v16 = 1;
                v11 = &v13;
                v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v2 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
                v3 = 2;
                v6 = 0;
                v4 = &v11;
                v5 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v2);
                v47 = *((long long *)&v21);
                v48 = *((long long *)&v22);
LABEL_497e48:
                v49 = -1;
                v52 = 1;
                if (v47)
                {
                    __rust_dealloc(v48);
                    v49 = -1;
                }
            }
        }
        else
        {
            if (v42)
            {
                if (v42 >= a4)
                {
                    if (v42 == a4)
                        goto LABEL_497d70;
                }
                else
                {
                    if (!(*((char *)(a3 + v42)) <= 191))
                        goto LABEL_497d70;
                }
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
LABEL_497d70:
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v2, a3, v42);
            if (!v2)
            {
                v52 = 0x200;
                goto LABEL_497e71;
            }
            else if (!a4)
            {
                memcpy(0x1, a3, a4);
                vvar_909{reg 16} = a0;
                v54[0] = 7;
                v54[1] = a4;
                v54[2] = 1;
                v54[3] = a4;
                return v54;
            }
            else if (a4 < 0)
            {
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
LABEL_497dcb:
            v55 = __rust_alloc(a4, 1);
            if (v55)
            {
                memcpy(v55, a3, a4);
                v54 = a0;
                v54[0] = 7;
                v54[1] = a4;
                v54[2] = v55;
                v54[3] = a4;
                return v54;
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
    }
    else
    {
LABEL_497b06:
        if (!(!v39) || !(!v1))
            goto LABEL_497b64;
        if (v25)
        {
            if (v25 >= a4)
            {
                if (v25 != a4)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(a3 + v25)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&v2, a3, v25);
        if (!v2)
        {
LABEL_497c79:
            v52 = 1;
        }
        else
        {
            if (!a4)
            {
                memcpy(0x1, a3, a4);
                vvar_940{reg 16} = a0;
                v54[0] = 7;
                v54[1] = a4;
                v54[2] = 1;
                v54[3] = a4;
                return v54;
            }
            goto LABEL_497dc9;
        }
    }
LABEL_497e71:
    v54 = v49 * v52;
    if (!((char)amd64g_calculate_condition(0, 48, v49, v52, v26)))
    {
        v56 = a0;
        v56[1] = v54;
        v56[0] = 14;
        return v54;
    }
    v43 = a2;
    if (!v43)
    {
        memcpy(0x1, a1, v43);
        a0[0] = 8;
        v54[1] = v43;
        v54[2] = v44;
        v54[3] = v43;
        return v54;
    }
    if (v43 < 0)
    {
LABEL_497f86:
    }
    else
    {
        v44 = __rust_alloc(v43, 1);
        if (v44)
        {
            memcpy(v44, a1, v43);
            a0[0] = 8;
            goto LABEL_497bc3__14;
        }
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_497bc3__14:
    v54[1] = v43;
    v54[2] = v44;
    v54[3] = v43;
    return v54;
}
