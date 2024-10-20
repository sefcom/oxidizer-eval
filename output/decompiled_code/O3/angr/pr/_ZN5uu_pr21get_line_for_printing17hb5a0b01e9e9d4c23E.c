long long uu_pr::get_line_for_printing::hb5a0b01e9e9d4c23(struct_0 *a0, struct_1 *a1, unsigned long long a2[5], unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0x198]
    char *v1;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x168]
    void* v6;  // [sp-0x160], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x158]
    unsigned long v8;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x148], Other Possible Types: unsigned long long
    int v10;  // [sp-0x140], Other Possible Types: unsigned long long
    char *v11;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x130]
    unsigned long long v13;  // [sp-0x128]
    unsigned long long v14;  // [sp-0x120]
    int v15;  // [sp-0x118], Other Possible Types: void*, unsigned long
    unsigned long long v16;  // [sp-0x110]
    void* v17;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long v18;  // [sp-0x100], Other Possible Types: unsigned long long
    int v19;  // [sp-0xf8], Other Possible Types: char [4], void*, unsigned long long
    unsigned long long v20;  // [sp-0xf0]
    void* v21;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v22;  // [sp-0xe0]
    void* v23;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0xd0]
    unsigned long long v25;  // [bp-0xc8], Other Possible Types: char
    char v26;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0xb0]
    unsigned long long v28;  // [sp-0xa0]
    unsigned long long v29;  // [sp-0x98]
    char v30;  // [sp-0x90]
    void* v31;  // [sp-0x88]
    unsigned long long v32;  // [sp-0x80]
    void* v33;  // [sp-0x78]
    char v34;  // [bp-0x60]
    char v35;  // [bp-0x50]
    char v36;  // [bp-0x48]
    char v37;  // [bp-0x38]
    char v39;  // [bp+0x10]
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    char *v42;  // rdx
    char *v43;  // rdi
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rax
    char *v46;  // rbx
    char v47[4];  // rcx
    void* v48;  // rdx
    char v49[4];  // rcx
    char v50[4];  // rdi
    unsigned long long v51;  // r8
    char v52[4];  // rdi
    unsigned int v53;  // r9d
    unsigned int v54;  // r11d
    unsigned int v55;  // r10d
    unsigned long long v57;  // rdi
    unsigned long long v60;  // rdi
    unsigned long long v61;  // rsi
    unsigned long long v62;  // rdi
    unsigned long long v63;  // rsi
    void* v64;  // r13

    v31 = 0;
    v32 = 1;
    v33 = 0;
    v18 = a2[4];
    if (a1->field_d8 == 0x8000000000000000 || a1->field_10 && a4 || !v18)
    {
        v15 = 0;
        v16 = 1;
        v17 = 0;
        goto LABEL_549a86;
    }
    else
    {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v25 = 32;
        v26 = 3;
        v19 = 0;
        v21 = 0;
        v23 = &v2;
        v24 = &g_68e898;
        if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b(&v18, &v19))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        *((int128_t *)&v0) = *((int128_t *)&v2);
        v1 = v4;
        v40 = a1->field_f0;
        v8 = &a1->field_d8;
        v41 = v1;
        v42 = v41 - v40;
        if (v41 < v40)
        {
            v2 = &v0;
            v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v4 = &v8;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbd41cebab8f81e48;
            v6 = v40;
            v7 = 0;
            v19 = 2;
            v21 = 1;
            v22 = 2;
            v23 = 0;
            v24 = 32;
            v25 = 1;
            v26 = 2;
            v27 = 2;
            v28 = 1;
            v29 = 32;
            v30 = 3;
            v9 = &g_461ff0;
            v10 = 2;
            v13 = &v19;
            v14 = 2;
            v11 = &v2;
            v12 = 3;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v36, &v9);
        }
        else
        {
            v43 = (long long)(&v0)[8];
            if (v41 != v40)
            {
                if (v42 >= v1)
                {
                    if (v40)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                else
                {
                    if (*((char *)(v43 + v42)) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
            }
            v15 = v43 + v42;
            v16 = v40;
            v2 = &v15;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h863d890a8fb4088d;
            v4 = &v8;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbd41cebab8f81e48;
            v6 = v40;
            v7 = 0;
            v19 = 2;
            v21 = 1;
            v22 = 2;
            v23 = 0;
            v24 = 32;
            v25 = 1;
            v26 = 2;
            v27 = 2;
            v28 = 1;
            v29 = 32;
            v30 = 3;
            v9 = &g_461ff0;
            v10 = 2;
            v13 = &v19;
            v14 = 2;
            v11 = &v2;
            v12 = 3;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v36, &v9);
        }
        v17 = *((long long *)&v37);
        *((int128_t *)&v15) = *((int128_t *)&v36);
        if ((long long)v0)
            __rust_dealloc((long long)(&v0)[8]);
LABEL_549a86:
    }
    if (a2[0] == 0x8000000000000000)
    {
        v19 = v9;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v9 = v19;
    v2 = &v15;
    v44 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &v9;
    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbd41cebab8f81e48;
    v19 = &g_461ff0;
    v20 = 2;
    v23 = 0;
    v21 = &v2;
    v22 = 2;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v34, &v19);
    v45 = *((long long *)&v39);
    *((int128_t *)&v0) = *((int128_t *)&v34);
    v46 = *((long long *)&v35);
    v1 = v46;
    v18 = &a1->padding_18[144];
    v47 = (long long)(&v0)[8];
    if (!v46)
    {
        v48 = 0;
    }
    else
    {
        v48 = 0;
        do
        {
            v50 = v49;
            v51 = v50[0];
            if ((char)v51 >= 0)
            {
                v52 = &v50[1];
            }
            else
            {
                v53 = (unsigned int)v51 & 31;
                v54 = v50[1] & 63;
                if ((v51 & 255) <= 223)
                {
                    v52 = &v50[2];
                    v51 = v53 * 64 | v54;
                }
                else
                {
                    v55 = v50[2] & 63 | v54 * 64;
                    if ((v51 & 255) < 240)
                    {
                        v52 = &v50[3];
                        v51 = v55 | v53 * 0x1000;
                    }
                    else
                    {
                        v51 = v50[3] & 63 | v55 * 64 | (v53 & 7) * 0x40000;
                        if ((unsigned int)v51 == 0x110000)
                            break;
                        v52 = v50 + 1;
                    }
                }
            }
        } while ((v48 += -0x100 | (unsigned long long)(char)((unsigned int)v51 == 9), v52 != v47 + v46));
    }
    v57 = &v31;
    v8 = v60;
    if (!a5)
    {
        v61 = *((long long *)&v34);
        v62 = *((long long *)&(&v34)[8]);
        v1 = *((long long *)&v35);
        goto LABEL_549d7b;
    }
    else
    {
        if (!a3)
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
        v63 = 0x7 * v48 + v46;
        if (v21 > v63)
        {
            v64 = 0;
            do
            {
                if (v46 == (long long)v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h154e87de5fb30abd(&v0);
            } while ((v48 += -0x100 | (unsigned long long)(char)((unsigned int)v51 == 9), v52 != v47 + v46));
            v47 = (long long)(&v0)[8];
            v44 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        }
        *(&v19) = v47;
        v20 = v46 + v19;
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::he8febf79b97cc0a1(&v2, &v19);
        *((int128_t *)&v19) = *((int128_t *)&v3);
        v61 = (long long)v0;
        v62 = (long long)(&v0)[8];
        if (v9 != 0x8000000000000000)
        {
            *((int128_t *)&v10) = (int128_t)v19;
            v9 = v2;
            if (v61)
                __rust_dealloc(v62);
        }
        else
        {
LABEL_549d7b:
            v9 = v61;
            v10 = v62;
            v11 = v1;
        }
        v19 = &v18;
        v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbd41cebab8f81e48;
        v21 = &v9;
        v22 = v44;
        v23 = &v8;
        v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hbd41cebab8f81e48;
        v2 = &g_46b450;
        v3 = 3;
        v6 = 0;
        v4 = &v19;
        v5 = 3;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v36, &v2);
        if (v9)
            __rust_dealloc(v10);
        a0->field_10 = *((long long *)&v37);
        a0->field_0 = *((int128_t *)&v36);
        if (!v15)
            return __rust_dealloc(v32);
        __rust_dealloc(v16);
    }
}
