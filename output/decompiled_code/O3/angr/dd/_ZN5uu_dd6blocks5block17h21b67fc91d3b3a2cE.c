long long uu_dd::blocks::block::h21b67fc91d3b3a2c(unsigned long long a0[3], char *a1, char *a2, unsigned long a3, unsigned int a4, struct_0 *a5)
{
    unsigned int v0;  // [sp-0xb4]
    char *v1;  // [sp-0xa8]
    unsigned int v2;  // [sp-0x9c]
    int v3;  // [bp-0x98], Other Possible Types: char
    unsigned long long *v4;  // [sp-0x88]
    char *v5;  // [sp-0x80]
    unsigned long long v6;  // [sp-0x78]
    char *v7;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x68]
    char *v9;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long *v11;  // [sp-0x48]
    unsigned long long *v12;  // [sp-0x40]
    unsigned long long *v14;  // r8
    unsigned long long v15;  // rbx
    unsigned long long *v16;  // rax
    char *v17;  // r14
    void* v18;  // r12
    int v19;  // ymm0
    char *v20;  // rbp
    unsigned long long v21;  // r15
    char *v22;  // rbp
    char *v23;  // r13
    char *v24;  // rbp
    unsigned long long v25;  // 4096
    unsigned long long v27;  // rbx
    int v28;  // xmm0
    unsigned long long v29;  // r14
    unsigned long long v30;  // r14
    char *v31;  // rbp
    unsigned long long v32;  // r15
    unsigned long long v33;  // r15
    char *v34;  // rbx
    char *v35;  // rdi
    unsigned long long *v36;  // r15
    unsigned long long *v37;  // rax
    unsigned long long *v38;  // rcx
    unsigned long long *v39;  // r15
    char v40[2];  // rdi
    unsigned long long v41;  // rcx
    unsigned long long v43;  // rsi
    unsigned long long *v45;  // r8

    v2 = a4;
    v0 = a5->field_18;
    v14 = 8;
    v15 = 0;
    v8 = &v3;
    v16 = 0;
    do
    {
        v17 = a1;
        if (!a2)
        {
            v10 = v15;
            v11 = v14;
            v12 = v16;
            v21 = 1;
            v22 = 0;
            v18 = 0;
            v1 = v17;
            a2 = 0;
            v12 = v12;
        }
        else
        {
            v20 = 0;
            do
            {
                v18 = v18 | -0x100 | *((char *)(v17 + v20)) == 10;
                if (*((char *)(v17 + v20)) == 10)
                {
                    a2 += ~(v20);
                    v1 = v17 + v20 + 1;
                    goto LABEL_4a68b5;
                }
            } while ((v20 += 1, a2 != v20));
            v1 = v17;
LABEL_4a68b5:
            v24 = v23;
            v10 = v10;
            v11 = v11;
            v12 = v12;
            if (!v24)
            {
                v21 = 1;
                v22 = 0;
                v12 = v12;
            }
            else
            {
                if (v24 < 0)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v21 = __rust_alloc(v24, 1);
                if (!v21)
                {
                    v9 = v24;
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                continue;
            }
        }
        v12 = v12;
        v27 = v25;
        memcpy(v21, v17, v24);
        v28 = *((int128_t *)&v10);
        v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
        v3 = v28;
        v4 = v12;
        v5 = v24;
        v6 = v21;
        v7 = v24;
        if (v27 < v24)
        {
            v0 += 1;
            a5->field_18 = v0;
        }
        v29 = v27;
        v30 = v29 - v24;
        v9 = v21;
        if (v29 > v24)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h99ac5a82b5186539(&v5, v24, v30);
            v33 = v6;
            v34 = v7;
            v35 = &v34[v33];
            if (v30 >= 2)
            {
                memset(v35, 32, v30 - 1);
                v34 = &v34[v30 + 1];
                v35 = &v34[v33];
            }
            *(v35) = 32;
            v27 = v34 + 1;
            v31 = v5;
            v32 = v6;
        }
        v7 = v27;
        v36 = v4;
        if (v36 == (long long)v3)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hca2f462affdddf16(&v3);
        v37 = (long long)(&v3)[8];
        v38 = v36 * 3;
        *((char **)((char *)v37 + 0x8 * v38)) = v31;
        *((unsigned long long *)(8 + (char *)v37 + 0x8 * v38)) = v32;
        *((unsigned long long *)(16 + (char *)v37 + 0x8 * v38)) = v7;
        v16 = (char *)v36 + 1;
        v15 = (long long)v3;
        v14 = (long long)(&v3)[8];
        a1 = v1;
    } while ((char)v18);
    if (!v16)
    {
        v39 = 0;
    }
    else if (!(char)v2 || !a5->field_8)
    {
        v40 = *((long long *)(8 + (char *)v14 + 0x8 * v38));
        v41 = *((long long *)(16 + (char *)v14 + 0x8 * v38));
        do
        {
            v43 = 0;
            if (v41 == v43)
            {
                if (!*((long long *)((char *)v14 + 0x8 * v38)) << 1)
                {
                    a0[0] = v15;
                    a0[1] = v45;
                    a0[2] = v39;
                    return a0;
                }
                __rust_dealloc(v40);
                a0[0] = v15;
                a0[1] = v45;
                a0[2] = v39;
                return a0;
            }
        } while ((v20 += 1, a2 != v20));
    }
    a0[0] = v15;
    a0[1] = v45;
    a0[2] = v39;
    return a0;
}
