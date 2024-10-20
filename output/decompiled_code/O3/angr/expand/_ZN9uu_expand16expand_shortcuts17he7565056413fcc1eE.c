double uu_expand::expand_shortcuts::he7565056413fcc1e(long long a0, long long a1)
{
    unsigned long long v0;  // [sp-0x110]
    unsigned long v1;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long *v2;  // [sp-0x100]
    unsigned long long *v3;  // [sp-0xf8]
    char v4[4];  // [sp-0xf0]
    unsigned long long v5;  // [sp-0xe8]
    unsigned long long v6;  // [sp-0xe0]
    unsigned long long v7[3];  // [sp-0xd8]
    unsigned long long v8;  // [sp-0xd0]
    unsigned long long v9;  // [sp-0xc8]
    char v10;  // [bp-0xb8]
    char v11;  // [bp-0xa8]
    unsigned long v12;  // [sp-0xa0], Other Possible Types: unsigned long long
    char v13[2];  // [sp-0x98]
    unsigned long long v14;  // [sp-0x90]
    unsigned long long v15;  // [sp-0x88]
    void* v16;  // [sp-0x80]
    unsigned long long v17[3];  // [sp-0x70]
    unsigned long long v18[3];  // [sp-0x68]
    unsigned long long v19;  // [sp-0x60]
    unsigned long long v20;  // [sp-0x58]
    unsigned long v21;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x48]
    unsigned long v23;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x38]
    unsigned long long v26;  // r12
    unsigned long long *v27;  // rax
    unsigned long long *v28;  // r15
    unsigned long long v29[3];  // r14
    char v30[4];  // rbp
    int v31;  // ymm0
    unsigned long long v32[3];  // rax
    unsigned long long v33;  // r12
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rcx
    char v36[2];  // rdi
    char v37[4];  // r13
    char v38[4];  // rdx
    unsigned long long v39;  // rsi
    unsigned int v40;  // r8d
    unsigned int v41;  // r10d
    unsigned int v42;  // r9d
    unsigned long long *v43;  // r15
    unsigned long long *v44;  // rax
    unsigned long long *v45;  // rcx
    char v46[4];  // r12
    char v47[4];  // rbx
    unsigned long long *v48;  // r15
    unsigned long long v49;  // rax
    char v50[4];  // rcx
    unsigned long long *v51;  // r15
    char v52[4];  // r12
    char v53[4];  // rbx
    char v54[4];  // rax
    char *v55;  // rdx
    char *v56;  // rdx
    unsigned long long *v58;  // r12
    unsigned long long *v59;  // rax
    unsigned long long *v60;  // rcx
    int v61;  // xmm0
    unsigned long long v62;  // rsi
    unsigned long long v63;  // rbx
    struct_3 *v64;  // r14
    unsigned long long v66;  // rbx
    int v67;  // xmm0

    v26 = a1->field_10;
    if (!v26)
    {
        v27 = 8;
        goto LABEL_48314e;
    }
    else
    {
        if (v26 > 384307168202282325)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v28 = 8;
        v27 = __rust_alloc(v26 * 24, 8);
        if (v27)
        {
LABEL_48314e:
            v1 = v26;
            v2 = v27;
            v3 = 0;
            v29 = a1->field_8;
            v17[0] = v29;
            v18[0] = v29;
            v9 = a1->field_0;
            v19 = v9;
            v8 = &v29[v26];
            v20 = v8;
            v7[0] = v29;
            if (v26)
            {
                v6 = &g_4e5688;
                v7[0] = v7;
                while (true)
                {
                    v32 = v7;
                    v29 = v32 + 1;
                    v18[0] = v29;
                    v33 = v32[0];
                    if (v33 == 0x8000000000000000)
                        break;
                    v34 = v32[2];
                    v5 = v32[1];
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v12, v32[1], v34);
                    if (!(!v12) || !(v35) || !((v36 = v13, v36[0] == 45)))
                    {
LABEL_483208:
                        v43 = v3;
                        if (v43 == v1)
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfb90af9efad6b9fa(&v1);
                        v44 = v2;
                        v45 = v43 * 3;
                        *((unsigned long long *)((char *)v44 + 0x8 * v45)) = v33;
                        *((unsigned long long *)(8 + (char *)v44 + 0x8 * v45)) = v5;
                        *((unsigned long long *)(16 + (char *)v44 + 0x8 * v45)) = v34;
                        v28 = (char *)v43 + 1;
                        v3 = v28;
                        goto LABEL_483242;
                    }
                    else
                    {
                        if (v35 == 1)
                        {
                            v37 = 0;
                        }
                        else if (v36[1] > 191)
                        {
                            v37 = v35 - 1;
                        }
                        else
                        {
                            v0 = v33;
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                        v38 = &v36[1];
                        *(&v4) = v38;
                        if (v38 == &v36[v35])
                        {
LABEL_483368:
                            v0 = v33;
                            if (v35 != 1 && v4[0] <= 191)
                            {
                                v6 = &g_4e56a0;
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            }
                            v46 = 0;
                            v47 = 0;
                            do
                            {
                                v30 = v30;
                                if (v37 < v47)
                                {
                                    v51 = 0;
                                    goto LABEL_483466;
                                }
                                v49 = v37 - v47;
                                v50 = v4;
                                if (v49 <= 15)
                                {
                                    if (v37 == v47)
                                        goto LABEL_4833fe;
                                    v55 = 0;
                                    while (*(&v50[0] + &v47[0] + v55) != 44)
                                    {
                                        v55 += 1;
                                        if (v49 == v55)
                                            goto LABEL_4833fe;
                                    }
LABEL_483428:
                                    v54 = v56 + v47;
                                    v47 = v47 + v56 + 1;
                                    if (!(v54 < v37) || !(*((char *)(v4 + v54)) == 44))
                                        continue;
                                    v48 = v48 | -0x100 | 1;
                                    v30 = v47;
                                    if (!(v54 == v46))
                                        goto LABEL_483472;
                                    goto LABEL_4833b4;
                                }
                                v54 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(44, v50 + v47);
                                if (v54 == 1)
                                    goto LABEL_483428;
                                if (v54)
                                {
                                    v48 = v48 | -0x100 | 1;
                                    goto LABEL_483472;
                                }
LABEL_4833fe:
                                v51 = 0;
LABEL_483466:
                                v47 = v53;
                                v30 = v52;
                                v54 = v37;
                                if (v54 != v46)
                                {
LABEL_483472:
                                    v21 = v46 + v4;
                                    v22 = v54 - v46;
                                    v23 = &v21;
                                    v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde6efb36308096d4;
                                    v12 = &g_4e56b8;
                                    *((long long *)&v13) = 1;
                                    v16 = 0;
                                    v14 = &v23;
                                    v15 = 1;
                                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v10, &v12);
                                    v58 = v3;
                                    if (v58 == v1)
                                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfb90af9efad6b9fa(&v1);
                                    v59 = v2;
                                    v60 = v58 * 3;
                                    *((long long *)(16 + (char *)v59 + 0x8 * v60)) = *((long long *)&v11);
                                    v61 = *((int128_t *)&v10);
                                    v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                                    *((void*)((char *)v59 + 0x8 * v60)) = v61;
                                    v3 = (char *)v58 + 1;
                                }
LABEL_4833b4:
                            } while ((char)v28);
                            if (v0)
                                __rust_dealloc(v5);
LABEL_483242:
                            if (v29 == v8)
                                break;
                        }
                        else
                        {
                            v39 = v38[0];
                            if ((char)v39 >= 0)
                            {
                                v38 = &v38[1];
                                continue;
                            }
                            else
                            {
                                v40 = (unsigned int)v39 & 31;
                                v41 = v38[1] & 63;
                                if ((v39 & 255) <= 223)
                                {
                                    v38 = &v38[2];
                                    v39 = v40 * 64 | v41;
                                    continue;
                                }
                                else
                                {
                                    v42 = v38[2] & 63 | v41 * 64;
                                    if ((v39 & 255) >= 240)
                                    {
                                        v39 = v38[3] & 63 | v42 * 64 | (v40 & 7) * 0x40000;
                                        if ((unsigned int)v39 == 0x110000)
                                            goto LABEL_483368;
                                        v38 += 1;
                                        continue;
                                    }
                                    else
                                    {
                                        v38 = &v38[3];
                                        v39 = v42 | v40 * 0x1000;
                                        if (!((unsigned int)v39 != 44) || !((unsigned int)v39 - 48 >= 10))
                                            continue;
                                    }
                                }
                            }
                            goto LABEL_483208;
                        }
                    }
                }
            }
            v62 = v8;
            if (v62 != v29)
            {
                v63 = (v62 - (char *)v29) / 24;
                v64 = &v29[1];
                do
                {
                    if (v64->field_0)
                        __rust_dealloc(v64->field_-8);
                } while ((v64 += 24, v66 = v63 - 1, v63 != 1));
            }
            if (!v9)
            {
                a0->field_10 = v3;
                v67 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v67;
                return (unsigned long long)(v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67);
            }
            __rust_dealloc(v7);
        }
    }
}
