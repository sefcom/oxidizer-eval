long long uu_fold::handle_obsolete::h8ce3ca62bb4f1de2(unsigned long long a0[5], unsigned long a1, unsigned long a2)
{
    void* v0;  // [sp-0xb0], Other Possible Types: unsigned long, unsigned long long
    uint128_t *v1;  // [sp-0xa8]
    char *v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x90]
    unsigned long long v5;  // [sp-0x88]
    int v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x68]
    char v8[5];  // [sp-0x58]
    uint128_t *v9;  // [sp-0x50]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rdi
    unsigned long long *v14;  // r14
    void* v15;  // rbp
    unsigned long long v17;  // r15
    char v18[5];  // r10
    char *v19;  // r9
    unsigned long long v20;  // rcx
    unsigned int v21;  // edx
    unsigned int v22;  // r8d
    unsigned int v23;  // esi
    uint128_t *v24;  // rax
    uint128_t *v25;  // rax
    uint128_t *v26;  // rbx
    uint128_t *v28;  // r14
    void* v29;  // r12
    uint128_t *v30;  // r12
    void* v31;  // rbx
    int v32;  // ymm0
    int v33;  // xmm0
    int v34;  // ymm0
    uint128_t *v35;  // rcx
    int v36;  // xmm0
    unsigned long long v37[5];  // rax
    unsigned long long v38;  // r15
    unsigned long long v39[5];  // rcx
    unsigned long long v40;  // rbx
    unsigned long long v41;  // rax
    unsigned long long *v42;  // rcx
    unsigned long long v43;  // r12
    unsigned long long v44;  // r13
    unsigned long long v45;  // rsi
    char *v46;  // rax
    void* v48;  // rax

    if (!a2)
    {
        v0 = 0;
        v1 = 8;
    }
    v13 = a2 * 24;
    v14 = 0;
    v15 = 0;
    do
    {
        v17 = *((long long *)(16 + a1 + (char *)v14));
        if (v17 && v18[0] == 45 && v17 != 1)
        {
            v19 = &v18[1];
            v20 = *(v19);
            if ((char)v20 < 0)
            {
                v21 = (unsigned int)v20 & 31;
                v22 = v18[2] & 63;
                if ((v20 & 255) <= 223)
                {
                    v20 = v21 * 64 | v22;
                }
                else
                {
                    v23 = v18[3] & 63 | v22 * 64;
                    v20 = ((v20 & 255 & 255) < 240 ? v18[4] & 63 | v23 * 64 | (v21 & 7) * 0x40000 : v23 | v21 * 0x1000);
                }
            }
            if ((unsigned int)v20 - 48 <= 9)
            {
                v4 = v13;
                if (a2 > 384307168202282325)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                *(&v8) = v18;
                v3 = v19;
                v25 = __rust_alloc(v13, 8);
                if (v25)
                {
                    v5 = a2;
                    v0 = a2;
                    v9 = v25;
                    v1 = v25;
                    v30 = 0;
                    v31 = 0;
                    while (v4 != v30 && (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v10, v30 + a1), v31 += 1, v35 = v9, *((long long *)(v35 + v30 + 16)) = *((long long *)&v11), v36 = *((int128_t *)&v10), v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36, *((void*)(v35 + v30)) = v36, v30 += 24, v5 != v31))
                    {
                    }
                    *((int128_t *)&v6) = *((int128_t *)&v0);
                    v40 = v5;
                    v7 = v40;
                    v41 = v40;
                    if (v41 <= v15)
                        alloc::vec::Vec$LT$T$C$A$GT$::remove::assert_failed::h3e94234f5c0f1d7f(); /* do not return */
                    v42 = (long long)(&v6)[8];
                    v43 = *((long long *)(v42 + v14));
                    v44 = *((long long *)(v42 + v14 + 8));
                    v45 = v42 + v14;
                    memmove(v42 + v14, v45 + 24, (v41 - v15) * 24 - 24);
                    v7 = v40 - 1;
                    if (v43)
                        __rust_dealloc(v44);
                    v46 = v3;
                    if (*(v46) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    v38 = v17 - 1;
                    if ((char)amd64g_calculate_condition(8, 28, v17 - 1, 0, amd64g_calculate_rflags_c(5, (unsigned long long)*(v46), 191, (v45 + 24 <= v45 ? 1 : 0))))
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v48 = __rust_alloc(v38, 1);
                    if (v48)
                    {
                        memcpy(v48, v3, v38);
                        v37 = a0;
                        *((void*)&v37[0]) = v6;
                        v37[2] = v7;
                        v37[3] = v38;
                        v37[4] = v48;
                        v39 = 40;
                    }
                }
            }
        }
    } while ((v14 += 24, v15 += 1, v13 != v14));
    if (a2 > 384307168202282325)
    {
LABEL_483823:
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    v24 = __rust_alloc(v13, 8);
    if (!v24)
        goto LABEL_483823;
    v26 = v24;
    v0 = a2;
    v1 = v24;
    v28 = 0;
    v29 = 0;
    while (v13 != v28 && (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v10, v28 + a1), v29 += 1, *((long long *)(v26 + v28 + 16)) = *((long long *)&v11), v33 = *((int128_t *)&v10), v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33, *((void*)(v26 + v28)) = v33, v28 += 24, a2 != v29))
    {
    }
}
