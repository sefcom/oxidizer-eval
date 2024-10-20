long long uu_sum::sysv_sum::h74772a6bd9d3ea00(unsigned long long a0, struct_1 *a1)
{
    unsigned long long v0;  // [sp-0x1038]
    void* v1;  // [sp-0x1030]
    unsigned long v3;  // rax
    void* v5;  // r13
    struct struct_0 **v6;  // rbp
    void* v7;  // r15
    int v8;  // ymm1
    int v9;  // ymm0
    int v10;  // ymm4
    int v11;  // ymm2
    int v12;  // ymm3
    unsigned long long v13;  // rdx
    unsigned long long v15;  // rcx
    int v17;  // xmm1
    int v18;  // ymm1
    int v19;  // ymm0
    void* v20;  // rsi
    int v21;  // xmm2
    int v22;  // xmm3
    int v23;  // xmm2
    int v24;  // xmm2
    int v25;  // xmm1
    int v26;  // xmm3
    int v27;  // xmm3
    int v28;  // xmm0
    int v29;  // xmm0
    int v30;  // xmm1
    int v31;  // xmm1
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    struct struct_0 **v34;  // rax

    v1 = 0;
    v0 = v3;
    v5 = 0;
    memset(&v1, 0, 0x1000);
    v6 = a1->field_18;
    v7 = 0;
    while (true)
    {
        if (v6(a0, &v1, 0x1000))
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h63fb46542ca77edeE.llvm.1430992003039368830(v13);
            break;
        }
        else
        {
            if (!v13)
                break;
            if (v13 >= 4097)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            v7 += v13;
            if (v13 >= 8)
            {
                v15 = v13 & -8;
                v17 = (uint128_t)v5;
                v18 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17;
                v19 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v20 = 0;
                v10 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                do
                {
                    v21 = *((int *)(&v1 + v20));
                    v22 = *((int *)(&v1 + v20));
                    v23 = InterleaveLOV(0, v21);
                    v24 = InterleaveLOV(0, v23);
                    v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24;
                    v25 = AddV(v17, v24);
                    v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25;
                    v26 = InterleaveLOV(0, v22);
                    v27 = InterleaveLOV(0, v26);
                    v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
                    v28 = AddV(0, v27);
                    v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
                    v20 += 8;
                } while (v15 != v20);
                v29 = AddV(v28, v25);
                v30 = (unsigned int)(v29 >> 96) CONCAT (unsigned int)(v29 >> 64) CONCAT (unsigned int)(v29 >> 96) CONCAT (unsigned int)(v29 >> 64);
                v31 = AddV(v30, v29);
                v8 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                v9 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)((unsigned long long)v31 >> 32) CONCAT (unsigned int)((unsigned long long)v31 >> 32) CONCAT (unsigned int)((unsigned long long)v31 >> 32) CONCAT (unsigned int)((unsigned long long)v31 >> 32)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned int)((unsigned long long)v31 >> 32) CONCAT (unsigned int)((unsigned long long)v31 >> 32) CONCAT (unsigned int)((unsigned long long)v31 >> 32) CONCAT (unsigned int)((unsigned long long)v31 >> 32), v31));
                v5 = (unsigned long long)v9;
                if (v15 == v13)
                    continue;
            }
            do
            {
                v33 = v32 + 1;
                v5 = v5 + *((char *)v32) & 4294967295;
            } while (v33 != (char *)&v1 + v13);
        }
    }
    if (a1->field_0)
        v34(a0);
    if (a1->field_8)
        __rust_dealloc(a0);
    return v7 + 511 >> 9;
}
