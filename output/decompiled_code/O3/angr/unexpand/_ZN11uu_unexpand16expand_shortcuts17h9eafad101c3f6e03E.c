long long uu_unexpand::expand_shortcuts::h9eafad101c3f6e03(unsigned long long a0[3], struct_0 *a1, unsigned long long a2)
{
    void* v0;  // [sp-0xe0], Other Possible Types: unsigned long
    char *v1;  // [sp-0xd8]
    char *v2;  // [sp-0xd0]
    void* v3;  // [sp-0xc8], Other Possible Types: char *, unsigned long
    struct_0 *v4;  // [sp-0xc0]
    unsigned long long v5;  // [sp-0xb8]
    void* v6;  // [sp-0xb0]
    unsigned long long v7;  // [sp-0xa0]
    unsigned long long v8;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x80]
    void* v12;  // [sp-0x78]
    char v13;  // [bp-0x68]
    char v14;  // [bp-0x58]
    unsigned long v15;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x48]
    unsigned long v17;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x38]
    char *v20;  // rax
    char *v21;  // r14
    char *v22;  // r14
    int v23;  // ymm0
    char v24[5];  // r15
    unsigned long long v25;  // rbx
    char *v26;  // rbp
    char *v27;  // r12
    char *v28;  // r12
    char *v29;  // rcx
    unsigned long long v30;  // rdx
    char *v31;  // rcx
    unsigned int v32;  // esi
    unsigned int v33;  // r8d
    unsigned int v34;  // edi
    char *v35;  // r14
    char *v36;  // r15
    char *v37;  // rbx
    char *v38;  // rax
    char *v39;  // rcx
    int v40;  // xmm0
    struct_0 *v41;  // r13
    unsigned long long v42;  // rax
    struct_0 *v43;  // r13
    char *v44;  // r15
    char *v45;  // rbx
    char *v46;  // rax
    char *v47;  // rdx
    char *v48;  // rdx
    char *v50;  // r15
    char *v51;  // rcx
    int v52;  // xmm0
    unsigned long long v53;  // rax
    struct_2 *v54;  // rax
    struct_2 *v55;  // r14
    char *v56;  // rbx
    char *v57;  // rax
    char *v58;  // rcx

    if (!a2)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        a0[2] = v2;
        a0[0] = v0;
        a0[1] = v1;
        return a0;
    }
    if (a2 > 384307168202282325)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v20 = __rust_alloc(a2 * 24, 8);
    if (v20)
    {
        v0 = a2;
        v1 = v20;
        v2 = 0;
        v7 = &a1[a2];
        v6 = 0;
        v5 = &g_4e6ab8;
        v3 = 0;
        while (true)
        {
            v24 = a1->field_8;
            v4 = a1;
            v25 = a1->field_10;
            if (v25 && v24[0] == 45)
            {
                if (v25 == 1)
                {
                    v26 = 0;
                }
                else if (v24[1] > 191)
                {
                    v26 = v25 - 1;
                }
                else
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                v27 = &v24[1];
                while (true)
                {
                    while (true)
                    {
                        v29 = v28;
                        if (v29 == &v24[v25])
                        {
LABEL_48440b:
                            if (v25 != 1 && *(v27) <= 191)
                            {
                                v5 = &g_4e6ad0;
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            }
                            v36 = 0;
                            v37 = 0;
                            do
                            {
                                v36 = v36;
                                if (v26 < v37)
                                {
                                    v43 = 0;
                                    goto LABEL_4844f6;
                                }
                                v42 = v26 - v37;
                                if (v42 <= 15)
                                {
                                    if (v26 == v37)
                                        goto LABEL_48449e;
                                    v47 = 0;
                                    while (*(v27 + v37 + v47) != 44)
                                    {
                                        v47 += 1;
                                        if (v42 == v47)
                                            goto LABEL_48449e;
                                    }
LABEL_4844c8:
                                    v46 = v48 + v37;
                                    v37 = v37 + v48 + 1;
                                    if (!(v46 < v26) || !(*((char *)(v27 + v46)) == 44))
                                        continue;
                                    v41 = v41 | -0x100 | 1;
                                    v21 = v37;
                                    if (!(v46 == v36))
                                        goto LABEL_484502;
                                    goto LABEL_48445a;
                                }
                                v46 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(44, v27 + v37);
                                if (v46 == 1)
                                    goto LABEL_4844c8;
                                if (v46)
                                {
                                    v41 = v41 | -0x100 | 1;
                                    goto LABEL_484502;
                                }
LABEL_48449e:
                                v43 = 0;
LABEL_4844f6:
                                v37 = v45;
                                v21 = v44;
                                v46 = v26;
                                if (v46 != v36)
                                {
LABEL_484502:
                                    v15 = v36 + v27;
                                    v16 = v46 - v36;
                                    v17 = &v15;
                                    v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0d950737c3cdc14;
                                    v8 = &g_4e6ae8;
                                    v9 = 1;
                                    v12 = 0;
                                    v10 = &v17;
                                    v11 = 1;
                                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v13, &v8);
                                    v50 = v2;
                                    if (v50 == v0)
                                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h233a1c64253e19de(&v0);
                                    v46 = v1;
                                    v51 = v50 * 3;
                                    *((long long *)(16 + v46 + 0x8 * v51)) = *((long long *)&v14);
                                    v52 = *((int128_t *)&v13);
                                    v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                                    *((void*)(v46 + 0x8 * v51)) = v52;
                                    v2 = v50 + 1;
                                }
LABEL_48445a:
                            } while ((char)v41);
                            v3 = v46 | -0x100 | 1;
                            continue;
                        }
                        v30 = *(v29);
                        if ((char)v30 < 0)
                            break;
                        v31 = v29 + 1;
                    }
                    v32 = (unsigned int)v30 & 31;
                    v33 = v29[1] & 63;
                    if ((v30 & 255) > 223)
                        break;
                    v31 = v29 + 2;
                    v30 = v32 * 64 | v33;
                }
                v34 = v29[2] & 63 | v33 * 64;
                if ((v30 & 255) < 240)
                {
                    v31 = v29 + 3;
                    v30 = v34 | v32 * 0x1000;
                    if (!((unsigned int)v30 != 44) || !((unsigned int)v30 - 48 >= 10))
                        continue;
                }
                else
                {
                    v30 = v29[3] & 63 | v34 * 64 | (v32 & 7) * 0x40000;
                    if ((unsigned int)v30 == 0x110000)
                        goto LABEL_48440b;
                    v31 = v29 + 4;
                    continue;
                }
            }
            v4 = v4;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, v4);
            v35 = v2;
            if (v35 == v0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h233a1c64253e19de(&v0);
            v38 = v1;
            v39 = v35 * 3;
            *((unsigned long long *)(16 + v38 + 0x8 * v39)) = v10;
            v40 = *((int128_t *)&v8);
            v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
            *((void*)(v38 + 0x8 * v39)) = v40;
            v22 = v35 + 1;
            v2 = v22;
            if (v25 == 2)
            {
                v53 = *((short *)&v24[0]);
                if (!((unsigned int)v53 == 24877))
                    continue;
            }
            else if (!(v25 == 5) || !(!(v24[4] ^ 108)) || !(!(unsigned int)v53))
            {
                continue;
            }
            v6 = v53 | -0x100 | 1;
            a1 = v4 + 1;
            if (a1 == v7)
                break;
        }
        if (!(((char)v3 & 1) && !((char)v6 & 1)))
        {
            a0[2] = v2;
            a0[0] = v0;
            a0[1] = v1;
            return a0;
        }
        v54 = __rust_alloc(12, 1);
        if (!v54)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v55 = v54;
        v55->field_0 = 3275369764236963117;
        v55->field_8 = 2037149295;
        v56 = v2;
        if (v56 == v0)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h233a1c64253e19de(&v0);
        v57 = v1;
        v58 = v56 * 3;
        *((long long *)(v57 + 0x8 * v58)) = 12;
        *((struct_2 **)(8 + v57 + 0x8 * v58)) = v55;
        *((long long *)(16 + v57 + 0x8 * v58)) = 12;
        v2 = v56 + 1;
    }
}
