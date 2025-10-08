long long fish::expand::expand_braces(unsigned long long a0[3], unsigned int a1, unsigned long long a2)
{
    void* v0;  // [bp-0x140], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v3[3];  // [bp-0x128]
    unsigned long long v4[3];  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    void* v6;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp-0x110]
    unsigned long v8;  // [bp-0x100]
    unsigned long v9;  // [bp-0xf8]
    unsigned int v10;  // [bp-0xec]
    unsigned long long v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xc8]
    unsigned long v15;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xb8]
    unsigned long long v17;  // [bp-0xa8]
    void* v18;  // [bp-0xa0]
    unsigned long long v19;  // [bp-0x98]
    void* v20;  // [bp-0x90]
    int v22;  // [bp-0x88]
    unsigned long long v23;  // [bp-0x80]
    void* v24;  // [bp-0x78]
    unsigned long long v25;  // [bp-0x70]
    void* v26;  // [bp-0x68]
    char v27;  // [bp-0x60]
    char v28;  // [bp-0x58]
    unsigned long long v29;  // [bp-0x48]
    char v30;  // [bp-0x40]
    unsigned long long v31;  // [bp-0x18]
    unsigned long long v33;  // r14
    unsigned long v34;  // rax
    unsigned long long v35;  // r14
    char v36;  // bpl
    unsigned int v37;  // r13d
    char v38;  // bl
    unsigned long long v39;  // cc_ndep
    unsigned long long v40;  // rax
    unsigned int v41;  // edx
    unsigned int v42;  // r13d
    unsigned long long *v43;  // rcx
    unsigned int v44;  // ecx
    unsigned long v45;  // rax
    unsigned long v47;  // cc_dep1
    unsigned long v48;  // rbx
    unsigned long v49;  // r14
    unsigned long long v50;  // rax
    unsigned long v51;  // rdx
    unsigned int v53;  // ebx
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rdi
    unsigned long long v58;  // rsi
    unsigned long v59;  // rsi
    unsigned long v60;  // rbx
    int v61;  // ymm0, Other Possible Types: uint256_t
    unsigned long long v62;  // rax
    unsigned long long v63;  // rbp
    unsigned long long v64;  // r15
    unsigned long long v65;  // r15
    unsigned long v67;  // rbx
    void* v68;  // rdx
    void* v69;  // rax
    unsigned long long v70;  // rdi
    void* v71;  // rsi
    unsigned long v72;  // rdi
    unsigned long long v73;  // r8
    void* v74;  // r9
    int v75;  // xmm0
    uint256_t v76;  // ymm0
    int v77;  // xmm0
    void* v78;  // rdx
    unsigned long long v79;  // r15
    unsigned long long v80;  // rax
    unsigned long v81;  // rdx
    unsigned long long v82;  // rax
    unsigned long long v83;  // rbx
    unsigned long long v86;  // rax

    v31 = v33;
    v10 = a1;
    v34 = a0[1];
    v9 = a0[2];
    v35 = v34 + a0[2] * 4;
    v8 = v34;
    *(v4) = v34;
    v5 = v35;
    v6 = 0;
    v11 = &g_14d8680;
    v14 = &g_14d8698;
    v17 = 0;
    v36 = 0;
    v37 = 0;
    v12 = 0;
    while (true)
    {
        while (true)
        {
            v40 = v4.next();
            if (v41 > 64981)
                break;
            if (v41 == 64980)
            {
                v44 = v37;
                v39 = v41 < 64980;
                if ((char)_ccall(0, 23, (unsigned long long)(v44 + 1), 0, (unsigned long long)(char)(v41 < 64980)))
                {
                    v11 = &g_14d8680;
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d8680); /* do not return */
                }
                if (!v37)
                    v36 = 1;
                if (!v37)
                    v45 = v40;
                else
                    v45 = v13;
                v13 = v45;
                v37 = v44 + 1;
            }
            else if (v41 == 64981)
            {
                v39 = v41 < 64981;
                v42 = v37 - 1;
                if ((char)_ccall(0, 27, (unsigned long long)(v37 - 1), 0, (unsigned long long)(char)(v41 < 64981)))
                {
                    v14 = &g_14d8698;
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d8698); /* do not return */
                }
                else if (v42 >= 0)
                {
                    v37 = v42;
                    if (!v37)
                    {
                        v37 = 0;
                        v17 = v43 & 0xffffffffffffff00 | 1;
                        v16 = v40;
                    }
                }
                else
                {
                    v12 = v40 & 0xffffffffffffff00 | 1;
                    v37 = v42;
                }
            }
        }
        if (v41 == 64982)
        {
            if (v37 == 1)
            {
                v37 = 1;
                v38 = 1;
                v15 = v40;
            }
        }
        else
        {
            if (v41 == 0x110000)
                break;
        }
    }
    if (v37 > 0)
    {
        if (((char)v10 & 8))
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            if ((v38 & 1))
            {
                v47 = v36 & 1;
                v48 = v8;
                if (!(v36 & 1))
                    core::option::unwrap_failed(&g_14d85f0); /* do not return */
                v49 = v9;
                if ((char)_ccall(4, 24, v13 + 1, 0, _ccall(17, v47, 0, v39)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d8608); /* do not return */
                v50 = v48.index(v49, v13 + 1, &g_14d8620);
                v0.spec_extend(v50, v50 + v51 * 4);
                if ((char)_ccall(4, 24, v15 + 1, 0, _ccall(24, v13 + 1, 0, _ccall(17, v47, 0, v39))))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d8638); /* do not return */
                v8 = v48.index(v49, v15 + 1, &g_14d8650);
                v35 = v8 + v51 * 4;
            }
            v0.spec_extend(v8, v35);
            v0.push(64981);
            v6 = 0;
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v53 = fish::expand::expand_braces(&v4, 1, a2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
            return v53;
        }
    }
    else
    {
        if (!((char)v12 & 1))
        {
            if ((v36 & 1))
            {
                if (((char)v17 & 1))
                {
                    v56 = v16;
                    if (v9 <= v56)
                    {
                        v14 = &g_14d84e8;
                        v14 = &g_14d84e8;
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14d84e8); /* do not return */
                    }
                    v57 = ~(v56) + v9;
                    v58 = v13;
                    v12 = v57 + v58;
                    if (!((char)__CFADD__(v57, v58)))
                    {
                        v59 = v58 + 1;
                        if (!((char)_ccall(4, 24, v58 + 1, 0, (v57 + v58 <= v57 ? 1 : 0))))
                        {
                            *(v3) = v8;
                            v5 = v35;
                            v6 = 0;
                            v15 = v56 + 1;
                            v11 = &g_14d85c0;
                            v14 = &g_14d85d8;
                            v60 = v59;
                            while (true)
                            {
                                if (!v59)
                                {
                                    v62 = v3.next();
                                }
                                else
                                {
                                    v59 = 0;
                                    v62 = v3.nth(v59);
                                }
                                v59 = v7;
                                v63 = v62;
                                if ((unsigned int)v81 == 0x110000)
                                {
                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                                    return 0;
                                }
                                if (!v37 && !(v63 != v16 & (unsigned int)v81 != 64982))
                                    break;
                                if ((unsigned int)v81 == 64980)
                                {
                                    v37 += 1;
                                    if ((char)_ccall(0, 23, (unsigned long long)(v37 + 1), 0, (unsigned long long)(char)((unsigned int)v81 < 64980)))
                                    {
                                        v11 = &g_14d85c0;
                                        core::panicking::panic_const::panic_const_add_overflow(&g_14d85c0); /* do not return */
                                    }
                                }
                                else
                                {
                                    v37 = v37;
                                    if ((unsigned int)v81 == 64981)
                                    {
                                        v37 -= 1;
                                        if ((char)_ccall(0, 27, (unsigned long long)(v37 - 1), 0, (unsigned long long)(char)((unsigned int)v81 < 64981)))
                                        {
                                            v14 = &g_14d85d8;
                                            core::panicking::panic_const::panic_const_sub_overflow(&g_14d85d8); /* do not return */
                                        }
                                    }
                                }
                            }
                            v64 = v63;
                            v65 = v64 - v60;
                            if (v64 < v60)
                                core::panicking::panic("assertion failed: pos >= item_begin", 35, &g_14d8530); /* do not return */
                            v0.to_vec(v8.index(v9, v60, v63, &g_14d8548), a2);
                            v29 = v2;
                            v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                            memcpy(&v28, &v0, 16);
                            fish::wcstringutil::trim(&v0, &v28, &g_54a2e8, 2);
                            v67 = v8;
                            if (v2)
                            {
                                v68 = v1;
                                v69 = v68 + 4;
                                v70 = v2 + 4611686018427387903 & 4611686018427387903;
                                if (v70 < 7)
                                {
                                    v71 = v68;
                                    goto LABEL_13abba8;
                                }
                                else
                                {
                                    v72 = v70 + 1;
                                    v73 = v72 & 9223372036854775800;
                                    v69 += v73 * 4;
                                    v71 = v68 + v73 * 4;
                                    v74 = 0;
                                    do
                                    {
                                        v75 = CmpEQV(*((int128_t *)((char *)v68 + 0x4 * v74)), 5148483685863164220262234177207767);
                                        v76 = (v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)((char *)v68 + 0x4 * v74))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
                                        if (((char)v76 & 1))
                                        {
                                            *((unsigned int *)((char *)v68 + 0x4 * v74)) = 32;
                                            if (((char)((unsigned long long)v75 >> 32) & 1))
                                                goto LABEL_13ab9ac;
                                            goto LABEL_13ab97a;
                                        }
                                        else if (!((char)((unsigned long long)v75 >> 32) & 1))
                                        {
LABEL_13ab97a:
                                            if (!((char)(v75 >> 64) & 1))
                                                goto LABEL_13ab9c1;
                                            goto LABEL_13ab986;
                                        }
                                        else
                                        {
LABEL_13ab9ac:
                                            *((unsigned int *)(4 + (char *)v68 + 0x4 * v74)) = 32;
                                            if (((char)(v75 >> 64) & 1))
                                            {
LABEL_13ab986:
                                                *((unsigned int *)(8 + (char *)v68 + 0x4 * v74)) = 32;
                                                if (!((char)(v75 >> 96) & 1))
                                                    goto LABEL_13ab9d6;
                                                goto LABEL_13ab9cd;
                                            }
                                            else
                                            {
LABEL_13ab9c1:
                                                if (!((char)(v75 >> 96) & 1))
                                                    goto LABEL_13ab9d6;
LABEL_13ab9cd:
                                                *((unsigned int *)(12 + (char *)v68 + 0x4 * v74)) = 32;
LABEL_13ab9d6:
                                                v77 = CmpEQV(*((int128_t *)(16 + (char *)v68 + 0x4 * v74)), 5148483685863164220262234177207767);
                                                v61 = (v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(16 + (char *)v68 + 0x4 * v74))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                                                if (((char)v61 & 1))
                                                {
                                                    *((unsigned int *)(16 + (char *)v68 + 0x4 * v74)) = 32;
                                                    if (((char)((unsigned long long)v77 >> 32) & 1))
                                                        goto LABEL_13aba3c;
                                                    goto LABEL_13aba05;
                                                }
                                                else if (!((char)((unsigned long long)v77 >> 32) & 1))
                                                {
LABEL_13aba05:
                                                    if (!((char)(v77 >> 64) & 1))
                                                        goto LABEL_13aba51;
                                                    goto LABEL_13aba11;
                                                }
                                                else
                                                {
LABEL_13aba3c:
                                                    *((unsigned int *)(20 + (char *)v68 + 0x4 * v74)) = 32;
                                                    if (((char)(v77 >> 64) & 1))
                                                    {
LABEL_13aba11:
                                                        *((unsigned int *)(24 + (char *)v68 + 0x4 * v74)) = 32;
                                                        if (!((char)(v77 >> 96) & 1))
                                                            continue;
                                                        goto LABEL_13aba61;
                                                    }
                                                    else
                                                    {
LABEL_13aba51:
                                                        if (!((char)(v77 >> 96) & 1))
                                                            continue;
LABEL_13aba61:
                                                        *((unsigned int *)(28 + (char *)v68 + 0x4 * v74)) = 32;
                                                    }
                                                }
                                            }
                                        }
                                        v74 += 8;
                                    } while (v73 != v74);
                                    if (v72 != v73)
                                    {
LABEL_13abba8:
                                        do
                                        {
                                            v78 = v69;
                                            if (*((int *)v71) == 64983)
                                                *((unsigned int *)v71) = 32;
                                            v69 = v78 + 4;
                                            v71 = v78;
                                        } while (v78 != v68 + v2 * 4);
                                    }
                                }
                            }
                            v18 = 0;
                            v19 = 4;
                            v20 = 0;
                            v79 = v65 + v12;
                            if ((char)__CFADD__(v65, v12) || (char)__CFADD__(v79, 2))
                                goto LABEL_13abcd5__18;
                            v18.reserve(v79 + 2);
                            v80 = v67.index(v9, v13, &g_14d8578);
                            v18.spec_extend(v80, v80 + v81 * 4);
                            v18.spec_extend(v1, v1 + v2 * 4);
                            v82 = v67.index(v9, v15, &g_14d8590);
                            v18.spec_extend(v82, v82 + v81 * 4);
                            fish::expand::expand_braces(&v18, v10, a2);
                            v83 = v63;
                            v60 = v83 + 1;
                            if ((char)_ccall(4, 24, v83 + 1, 0, (v79 + 2 <= v79 ? 1 : 0)))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14d85a8); /* do not return */
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                            if (v63 == v16)
                            {
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                                return 0;
                            }
LABEL_13abcd5__18:
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d8560); /* do not return */
                        }
                        v86 = &g_14d8518;
                    }
                    else
                    {
                        v86 = &g_14d8500;
                    }
                    v11 = v86;
                    core::panicking::panic_const::panic_const_add_overflow(v11); /* do not return */
                }
                else
                {
                    core::option::unwrap_failed(&g_14d84d0); /* do not return */
                }
            }
            else
            {
                if (!a2.add(a0))
                    return (unsigned int)fish::expand::append_overflow_error(*(v43));
                return 0;
            }
        }
    }
    if (*(v43))
    {
        *((unsigned long long *)&v22) = 0;
        v23 = 4;
        v24 = 0;
        v25 = 18446744073709551615;
        v26 = 0;
        v27 = 1;
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v5 = "M";
        v6 = 17;
        *(v3) = 0x8000000000000000;
        fish_printf::printf_impl::sprintf_locale(&v30, &v0, v3.localize(), v55, ".", 8, 0);
        v30.unwrap(&g_14d8668);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
        *((int128_t *)&v4) = *((int128_t *)&v0);
        v6 = 0;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v22);
        v24 = 0;
        *((int128_t *)&v22) = *((int128_t *)&v4[0]);
        *(v43).push(&(unsigned long long)v22, &g_14d8668);
    }
    v53 = 121.make_error();
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    return v53;
}
