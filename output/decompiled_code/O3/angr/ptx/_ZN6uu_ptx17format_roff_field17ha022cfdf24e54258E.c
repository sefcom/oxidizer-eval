double uu_ptx::format_roff_field::ha022cfdf24e54258(long long a0, long long a1, long long a2)
{
    unsigned short *v0;  // [sp-0x68], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x60]
    unsigned short *v2;  // [sp-0x58]
    unsigned short *v3;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x48]
    unsigned long long v5;  // [sp-0x40]
    char *v6;  // [sp-0x38]
    void* v8;  // r15
    void* v9;  // r14
    void* v10;  // rbp
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax
    char *v14;  // rcx
    char *v15;  // rcx
    char *v17;  // rax
    void* v19;  // rbp
    unsigned long long v20;  // r15
    unsigned long v21;  // rdx
    void* v22;  // rbp
    unsigned long v23;  // r13
    unsigned long long v24;  // r15
    int v25;  // xmm0
    int v26;  // ymm0

    v1 = 0;
    v2 = 1;
    v0 = 1;
    v8 = 0;
    v9 = 0;
    while (true)
    {
        v11 = 0;
        v5 = v5;
        v3 = v8;
        do
        {
            v12 = a2 - v9;
            if (v12 <= 15)
            {
                if (a2 == v9)
                    break;
                v14 = 0;
                while (*(a1 + v9 + v14) != 34)
                {
                    v14 += 1;
                    if (v12 == v14)
                        goto LABEL_53b74f;
                }
            }
            v13 = core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(34, a1 + v9);
            if (v13 != 1)
            {
                v5 = v5;
                if (!v13)
                    break;
                goto LABEL_53b692;
            }
            v17 = v15 + v9;
            v9 = v9 + v15 + 1;
            if (v17 < a2 && *((char *)(a1 + v17)) == 34)
            {
                v5 = v9;
                v6 = v17;
LABEL_53b692:
                v5 = v5;
                v19 = &a1[v11];
                if (v4 - v8 >= v0)
                {
                    v4 = v1;
                    v4 = v4;
                    v0 = v0;
                    v0 = v0;
                }
                else
                {
                    v0 = a1 + v6 - v19;
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v1, v8, v0);
                    v4 = v1;
                    v4 = v4;
                    v0 = v0;
                    v20 = v3;
                    v0 = v2;
                }
                v21 = v0;
                v4 = v4;
                v0 = v0;
                memcpy((char *)v0 + v20, v19, v21);
                v3 = v20 + v21;
                if (v4 - (char *)v3 > 1)
                {
                    v3 = v3;
                    v0 = v0;
                    goto LABEL_53b731;
                }
                else
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v1, v3, 2);
                    v3 = v3;
                    v0 = v2;
                    goto LABEL_53b731;
                }
            }
        } while (v9 <= a2);
LABEL_53b74f:
        v22 = &a1[v11];
        v23 = &a1[a2] - v22;
        if (v1 - v8 < v23)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v1, v8, v23);
            v20 = v3;
        }
        memcpy((char *)v2 + v24, v22, v23);
        v3 = v24 + v23;
        v25 = *((int128_t *)&v1);
        *((void*)&a0->field_0) = v25;
        a0->field_10 = v3;
        return (unsigned long long)(v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25);
LABEL_53b731:
        v0 = v0;
        *((short *)(v0 + v3)) = 8738;
        v8 = v3 + 1;
        v5 = v5;
        v10 = v5;
    }
}
