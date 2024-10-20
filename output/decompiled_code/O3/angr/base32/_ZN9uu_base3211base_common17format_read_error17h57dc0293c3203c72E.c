long long uu_base32::base_common::format_read_error::h57dc0293c3203c72(unsigned long long a0, char a1)
{
    char v0;  // [sp-0xd1]
    void* v1;  // [sp-0xd0]
    char *v2;  // [sp-0xc8], Other Possible Types: char [4]
    char *v3;  // [sp-0xc0], Other Possible Types: void*
    unsigned int v4;  // [bp-0xb8], Other Possible Types: unsigned long, char
    char v5;  // [sp-0xb7]
    char v6;  // [sp-0xb6]
    char v7;  // [sp-0xb5]
    unsigned long long v8;  // [sp-0xb0]
    char v9[4];  // [sp-0xa8]
    char v10[4];  // [sp-0xa0]
    unsigned long long v11;  // [sp-0x98]
    char v12;  // [bp-0x90]
    char v13;  // [bp-0x8c]
    char v14;  // [bp-0x88]
    void* v15;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x78]
    void* v17;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned int v18;  // [bp-0x68], Other Possible Types: unsigned long long
    void* v19;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x58]
    unsigned long long v21;  // [sp-0x50]
    char v22;  // [sp-0x48]
    unsigned long long v23;  // [sp-0x38]
    unsigned long long v25;  // r15
    char *v26;  // rax
    char v27[4];  // r14
    void* v28;  // r13
    char v29[4];  // r14
    unsigned long long v30;  // rsi
    unsigned int v31;  // eax
    unsigned int v32;  // edx
    unsigned int v33;  // ecx
    unsigned int v34;  // eax
    unsigned long long v35;  // rcx
    unsigned int v36;  // eax
    unsigned long long v37;  // r15
    char *v38;  // rbx
    unsigned int v39;  // eax
    unsigned long long v40;  // r15
    char *v41;  // rsi
    char *v42;  // rsi
    char v43[4];  // rax

    v0 = a1;
    v1 = 0;
    *((long long *)&v2) = 1;
    v3 = 0;
    v21 = 32;
    v22 = 3;
    v15 = 0;
    v17 = 0;
    v19 = &v1;
    v20 = &g_5018e0;
    if ((char)_$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Display$GT$::fmt::ha1aa9f6bc9a7f1d5(&v0, &v15))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v11 = v1;
    *(&v10) = v2;
    v25 = v3;
    if (!v25)
    {
        v1 = 0;
        v2 = 1;
        v3 = 0;
        goto LABEL_48d905;
    }
    else
    {
        if (v25 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v26 = __rust_alloc(v25, 1);
        if (v26)
        {
            v1 = v25;
            v2 = v26;
            v3 = 0;
            v27 = v10;
            v23 = &v27[v25];
            v28 = 0;
            do
            {
                v29 = v27;
                v30 = v29[0];
                if ((char)v30 >= 0)
                {
                    *(&v9) = &v29[1];
                    if (!v28)
                        goto LABEL_48d750;
                    goto LABEL_48d670;
                }
                v31 = (unsigned int)v30 & 31;
                v32 = v29[1] & 63;
                if ((v30 & 255) <= 223)
                {
                    *(&v9) = &v29[2];
                    v30 = v31 * 64 | v32;
                    if (!v28)
                        goto LABEL_48d750;
LABEL_48d670:
                    ::0x48b860::alloc::string::String::push::h859ae11851fd8b8e(&v1, v30);
                }
                else
                {
                    v33 = v29[2] & 63 | v32 * 64;
                    if ((v30 & 255) >= 240)
                    {
                        *(&v9) = v29 + 1;
                        v30 = v29[3] & 63 | v33 * 64 | (v31 & 7) * 0x40000;
                        if (!v28)
                            goto LABEL_48d750;
                        goto LABEL_48d670;
                    }
                    *(&v9) = &v29[3];
                    v30 = v33 | v31 * 0x1000;
                    if (!(!v28))
                        goto LABEL_48d670;
LABEL_48d750:
                    core::unicode::unicode_data::conversions::to_upper::h75a19f004959258f(&v12, v30);
                    v34 = *((int *)&v14);
                    v35 = 2 - (*((int *)&v13) < 1);
                    if (v34)
                        v35 = 3;
                    v15 = 0;
                    v16 = v35;
                    v18 = v34;
                    v17 = *((long long *)&v12);
                    while (true)
                    {
                        v36 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc58afee2023a2b2b(&v15);
                        v37 = v36;
                        if (v36 == 0x110000)
                            break;
                        if ((unsigned int)v37 < 128)
                        {
                            v38 = v3;
                            if (v38 == v1)
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h66a46631e7372f31(&v1);
                            *((char *)(v2 + v38)) = v37;
                            v3 = v38 + 1;
                        }
                        else
                        {
                            v4 = 0;
                            v39 = v37;
                            if ((unsigned int)v37 < 0x800)
                            {
                                v4 = (char)(v39 >> 6) | 192;
                                v5 = (char)v37 & 63 | 128;
                                v40 = 2;
                            }
                            else if ((unsigned int)v37 < 0x10000)
                            {
                                v4 = (char)(v39 >> 12) | 224;
                                v5 = (char)((v37 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                                v6 = (char)v37 & 63 | 128;
                                v40 = 3;
                            }
                            else
                            {
                                v4 = (char)(v39 >> 18) | 240;
                                v5 = (char)((v37 & 4294967295 & 4294967295) >> 12 & 4294967295) & 63 | 128;
                                v6 = (char)((v37 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                                v7 = (char)v37 & 63 | 128;
                                v40 = 4;
                            }
                            v41 = v3;
                            if (v1 - v41 < v40)
                            {
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb53a982b2a596a31(&v1, v41, v40);
                                v42 = v3;
                            }
                            memcpy(v42 + v2, &v4, v40);
                            v3 = &v3[v40];
                        }
                    }
                }
            } while ((v43 = v9, v28 = v28 - v29 + v43, v43 != v23));
LABEL_48d905:
            v4 = &v1;
            v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v15 = &g_501c80;
            v16 = 1;
            v19 = 0;
            v17 = &v4;
            v18 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v15);
            if (v1)
                __rust_dealloc(v2);
            if (!v11)
                return a0;
            __rust_dealloc(v10);
        }
    }
}
