long long just::parser::Parser::parse_string_literal_token(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x222]
    char v1;  // [bp-0x221]
    unsigned int v2;  // [bp-0x220]
    unsigned int v3;  // [bp-0x21d]
    int v4;  // [bp-0x218], Other Possible Types: char
    unsigned long long v5;  // [bp-0x208]
    char v6;  // [bp-0x200], Other Possible Types: unsigned long long
    char v7;  // [bp-0x1ff]
    char v8;  // [bp-0x1fe]
    int v9;  // [bp-0x1f8]
    char v10;  // [bp-0x1f0]
    int v11;  // [bp-0x1e8]
    char v12;  // [bp-0x1e0]
    int v13;  // [bp-0x1d8]
    char v14;  // [bp-0x1d0]
    int v15;  // [bp-0x1ce]
    char v16;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char v17;  // [bp-0x1b8]
    char v18;  // [bp-0x1b7]
    char v19;  // [bp-0x1b4]
    int v20;  // [bp-0x198], Other Possible Types: char
    unsigned long long v21;  // [bp-0x190]
    int v22;  // [bp-0x188]
    int v23;  // [bp-0x178]
    int v24;  // [bp-0x168]
    unsigned long long v25;  // [bp-0x158]
    char v26;  // [bp-0x150]
    char v27;  // [bp-0x14f]
    unsigned int v28;  // [bp-0x14c]
    char v29;  // [bp-0x140]
    unsigned long long v30;  // [bp-0x138]
    unsigned long long v31;  // [bp-0x130]
    int v32;  // [bp-0x128], Other Possible Types: char
    int v33;  // [bp-0x118], Other Possible Types: char
    int v34;  // [bp-0x108], Other Possible Types: char
    int v35;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v36;  // [bp-0xe8]
    char v37;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v38;  // [bp-0xd0]
    unsigned long long v39;  // [bp-0xc8]
    unsigned long long v40;  // [bp-0xc0]
    int v41;  // [bp-0xb8]
    int v42;  // [bp-0xa8], Other Possible Types: char
    int v43;  // [bp-0x98], Other Possible Types: char
    int v44;  // [bp-0x88], Other Possible Types: char
    char v45;  // [bp-0x78]
    char v46;  // [bp-0x68]
    char v47;  // [bp-0x58]
    char v48;  // [bp-0x48]
    unsigned long long v49;  // [bp-0x38]
    char v51;  // al
    unsigned long long v52;  // rax
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2
    int v56;  // xmm2
    int v57;  // xmm3
    char v58;  // r12b
    unsigned long long v59;  // r14
    unsigned long long v60;  // r13
    unsigned long long v61;  // rdx
    unsigned long long v62;  // r15
    unsigned long long v63;  // rax
    char *v64;  // rdi
    unsigned long long v65;  // r14
    unsigned long long v66;  // rsi
    char v67;  // r15b
    unsigned long long v68;  // rax
    unsigned long long v69;  // rsi
    unsigned long long v70;  // rdx
    int v71;  // xmm0
    int v72;  // xmm1
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2
    unsigned int v80;  // esi
    unsigned int v81;  // ecx
    int v82;  // xmm0
    int v83;  // xmm1
    int v84;  // xmm2

    v51 = a1.next_is(24);
    if (v51)
    {
        v52 = v6.expect_keyword(a1, 30);
        if (v17 == 37)
            goto LABEL_67daa7;
        *((int128_t *)&a0[72]) = *((int128_t *)&v16);
        v53 = *((int128_t *)&v6);
        v54 = *((int128_t *)&v10);
        v55 = *((int128_t *)&v12);
        *((int128_t *)&a0[56]) = *((int128_t *)&v14);
        a0[40] = v55;
        a0[24] = v54;
        a0[8] = v53;
    }
    else
    {
LABEL_67daa7:
        v6.expect(a1, 33);
        v52 = v17;
        v56 = *((int128_t *)&v12);
        v57 = *((int128_t *)&v14);
        memcpy(&v20, &v6, 16);
        *((int128_t *)&v22) = *((int128_t *)&v10);
        v23 = v56;
        v24 = v57;
        v25 = v16;
        if ((char)v52 == 37)
        {
            memcpy(&v32, &v20, 16);
            memcpy(&v33, &v22, 16);
            memcpy(&v34, &v23, 16);
            memcpy(&v35, &v24, 16);
            v36 = v25;
            memcpy(&v45, &v20, 16);
            memcpy(&v46, &v22, 16);
            memcpy(&v47, &v23, 16);
            memcpy(&v48, &v24, 16);
            v49 = v36;
            v6.from_string_or_backtick(&v32);
            v58 = v6;
            v52 = v17;
            if ((char)v52 == 37)
            {
                v1 = v51;
                v0 = v7;
                v59 = v58 * 2 + 1;
                v60 = v45.lexeme();
                v45.lexeme();
                v62 = v61 - v59;
                v63 = v59.get(v62, v60, v61);
                if (!v63)
                    core::str::slice_error_fail(v60, v61, v59, v62, &g_8308e0); /* do not return */
                v64 = &v29;
                v65 = v63;
                v66 = v63;
                if ((v58 & 1))
                {
                    just::unindent::unindent(v64, v66, v61);
                    v67 = v0;
                    if (v67 == 1)
                        goto LABEL_67ddbb;
LABEL_67dc37:
                    v5 = v31;
                    memcpy(&v4, &v29, 16);
                    if (!v1)
                    {
                        a0[8] = v32;
                        a0[24] = v33;
                        a0[40] = v34;
                        a0[56] = v35;
                        *((unsigned long long *)&a0[72]) = v36;
                        a0[80] = v4;
                        *((unsigned long long *)&a0[96]) = v5;
                        *((unsigned long long *)&a0[104]) = v65;
                        *((unsigned long long *)&a0[112]) = v61;
                        *((char *)&a0[120]) = v58;
                        *((char *)&a0[121]) = v67;
                        *((char *)&a0[122]) = 0;
                        *((unsigned long long *)a0) = 0;
                        return v5;
                    }
LABEL_67de03:
                    shellexpand::strings::funcs::full_with_context(&v37, &v4);
                    if ((char)(((0 ^ v37) & (0 ^ -(v37))) >> 63))
                    {
                        v68 = v38;
                        v69 = v39;
                        v70 = v40;
                        if (v38 == 0x8000000000000000)
                            goto LABEL_67dfb7;
                        goto LABEL_67dfd0;
                    }
                    else
                    {
                        v71 = *((int128_t *)&v37);
                        v72 = *((int128_t *)&v39);
                        v13 = v41;
                        v11 = v72;
                        v9 = v71;
                        v6 = 9223372036854775859;
                        v20.error(&v45, &v6);
                        v68 = *((long long *)&v20);
                        v69 = v21;
                        v70 = (long long)v22;
                        memcpy(&v42, &(char)v22, 16);
                        memcpy(&v43, &v23, 16);
                        memcpy(&v44, &v24, 16);
                        v2 = *((int *)&v27);
                        v3 = v28;
                        if (v26 == 37)
                        {
                            if (v68 == 0x8000000000000000)
                            {
LABEL_67dfb7:
                                v6.to_vec(v69, v70);
                                v68 = v6;
                                v69 = (long long)v9;
                                v70 = (long long)(&v9)[8];
                            }
LABEL_67dfd0:
                            *((unsigned long long *)&a0[72]) = v36;
                            a0[56] = v35;
                            a0[40] = v34;
                            a0[24] = v33;
                            a0[8] = v32;
                            *((unsigned long long *)&a0[80]) = v68;
                            *((unsigned long long *)&a0[88]) = v69;
                            *((unsigned long long *)&a0[96]) = v70;
                            *((unsigned long long *)&a0[104]) = v65;
                            *((unsigned long long *)&a0[112]) = v61;
                            *((char *)&a0[120]) = v58;
                            *((char *)&a0[121]) = v67;
                            *((char *)&a0[122]) = v1;
                            *((unsigned long long *)a0) = 0;
                            v73 = core::ptr::drop_in_place<alloc::string::String>(&v4);
                            if (v67 != 1)
                                return v73;
                        }
                        else
                        {
                            a0[64] = v44;
                            a0[48] = v43;
                            a0[32] = v42;
                            *((unsigned int *)&a0[81]) = v2;
                            *((unsigned int *)&a0[84]) = v3;
                            *((unsigned long long *)&a0[8]) = v68;
                            *((unsigned long long *)&a0[16]) = v69;
                            *((unsigned long long *)&a0[24]) = v70;
                            *((char *)&a0[80]) = v26;
                            *((unsigned long long *)a0) = 1;
                            v74 = core::ptr::drop_in_place<alloc::string::String>(&v4);
                            if (v67 != 1)
                                return v74;
                        }
                    }
                }
                else
                {
                    v64.to_vec(v66, v61);
                    v67 = v0;
                    if (v67 != 1)
                        goto LABEL_67dc37;
LABEL_67ddbb:
                    v6.cook_string(&v32, v30, v31);
                    if (v17 == 37)
                    {
                        memcpy(&v4, &v6, 16);
                        v5 = *((long long *)&v10);
                        if (v1)
                            goto LABEL_67de03;
                        a0[8] = v32;
                        a0[24] = v33;
                        a0[40] = v34;
                        a0[56] = v35;
                        *((unsigned long long *)&a0[72]) = v36;
                        a0[80] = v4;
                        *((unsigned long long *)&a0[96]) = v5;
                        *((unsigned long long *)&a0[104]) = v65;
                        *((unsigned long long *)&a0[112]) = v61;
                        *((char *)&a0[120]) = v58;
                        *((unsigned short *)&a0[121]) = 1;
                        *((unsigned long long *)a0) = 0;
                    }
                    else
                    {
                        v25 = v16;
                        v75 = *((int128_t *)&v6);
                        v76 = *((int128_t *)&v10);
                        memcpy(&(char)v24, &v14, 16);
                        *((int128_t *)&v23) = *((int128_t *)&v12);
                        v22 = v76;
                        v20 = v75;
                        *((int *)&a0[84]) = *((int *)&v19);
                        *((int *)&a0[81]) = *((int *)&v18);
                        *((unsigned long long *)&a0[72]) = v25;
                        v77 = (int128_t)v20;
                        v78 = (int128_t)v22;
                        v79 = (int128_t)v23;
                        *((int128_t *)&a0[56]) = (int128_t)v24;
                        a0[40] = v79;
                        a0[24] = v78;
                        a0[8] = v77;
                        *((char *)&a0[80]) = v17;
                        *((unsigned long long *)a0) = 1;
                    }
                }
                return core::ptr::drop_in_place<alloc::string::String>(&v29);
            }
            *((unsigned long long *)&a0[72]) = v16;
            *((int128_t *)&a0[58]) = (int128_t)v15;
            *((int128_t *)&a0[42]) = *((int128_t *)&(&v12)[2]);
            *((int128_t *)&a0[26]) = *((int128_t *)&(&v10)[2]);
            *((int128_t *)&a0[10]) = *((int128_t *)&v8);
            v80 = *((int *)&v19);
            *((int *)&a0[81]) = *((int *)&v18);
            *((unsigned int *)&a0[84]) = v80;
            *((char *)&a0[8]) = v58;
            *((char *)&a0[9]) = v7;
        }
        else
        {
            v81 = *((int *)&v18);
            *((int *)&a0[84]) = *((int *)&v19);
            *((unsigned int *)&a0[81]) = v81;
            *((unsigned long long *)&a0[72]) = v25;
            v82 = (int128_t)v20;
            v83 = (int128_t)v22;
            v84 = (int128_t)v23;
            *((int128_t *)&a0[56]) = (int128_t)v24;
            a0[40] = v84;
            a0[24] = v83;
            a0[8] = v82;
        }
        *((char *)&a0[80]) = v52;
    }
    *((unsigned long long *)a0) = 1;
    return v52;
}
