long long uu_tsort::Graph::dfs::h2db7c235628f80b9(struct_2 *a0, unsigned long a1, unsigned long a2, struct_3 *a3, struct_5 *a4)
{
    unsigned long long *v0;  // [sp-0xa8]
    struct struct_0 **v1;  // [sp-0xa0]
    void* v2;  // [sp-0x90]
    void* v3;  // [bp-0x78], Other Possible Types: unsigned long
    struct struct_0 **v4;  // [sp-0x68]
    struct struct_0 **v5;  // [bp-0x58]
    unsigned long v6;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x38]
    unsigned long v9;  // r12
    void* *v10;  // r15
    void* *v11;  // r14
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    struct struct_0 **v14;  // rcx
    struct struct_0 **v15;  // rbx
    struct struct_0 **v16;  // r14
    int v17;  // xmm0
    int v18;  // xmm0
    int v19;  // xmm0
    struct struct_0 **v20;  // xmm0
    int v21;  // ymm0
    int v22;  // ymm0
    struct struct_0 **v23;  // xmm0
    unsigned long long v25;  // r13
    unsigned long long v26;  // r13
    struct_1 *v28;  // rax
    unsigned long long v29;  // rax
    struct struct_0 **v31;  // xmm0
    unsigned long long v33;  // rax
    unsigned long long v35;  // rbp
    unsigned long long *v36;  // r14
    void* *v37;  // rax
    unsigned long long *v38;  // r14

    v9 = a2;
    v2 = a1;
    v6 = a1;
    v7 = a2;
    v10 = a4->field_8;
    v0 = &a4->field_10->field_0;
    if (v0)
    {
        v11 = 0;
        do
        {
            if (*((long long *)(v10 + v11 + 8)) == v9)
                v12 = bcmp(*((long long *)(v10 + v11)), v2, v9);
        } while ((v11 += 16, v0 << 4 != v11));
    }
    if (a3->field_18)
    {
        v13 = core::hash::BuildHasher::hash_one::h1fa345907f3705fb(a3 + 1, &v6);
        v14 = a3->field_0;
        v15 = a3->field_8;
        v16 = v15 & v13;
        v17 = v13 >> 57;
        v18 = InterleaveLOV(v17, v17);
        v19 = (unsigned long long)(v18 >> 64) CONCAT (unsigned short)v18 CONCAT (unsigned short)v18 CONCAT (unsigned short)v18 CONCAT (unsigned short)v18;
        v20 = (unsigned int)v19 CONCAT (unsigned int)v19 CONCAT (unsigned int)v19 CONCAT (unsigned int)v19;
        v22 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
        v4 = v20;
        v1 = v14;
        v3 = 0;
        while (true)
        {
            v23 = *((int128_t *)(v1 + v16));
            v5 = v23;
            v25 = UnaryOp GetMSBs;
            if ((unsigned int)v25)
            {
                while (true)
                {
                    v26 = v25;
                    v28 = (char *)&v14[-2 * ((!(v26 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v16 & v15)] + 2;
                    if (v28->field_8 == v9 && !bcmp(v2, v28->field_0, v9))
                        break;
                    v29 = v26 - 1 & 4294967295;
                    if (!((unsigned short)v29 & (unsigned short)v26))
                        goto LABEL_486a6a;
                }
            }
LABEL_486a6a:
            v31 = *((int128_t *)&v5);
            v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v23, v4) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v31, 340282366920938463463374607431768211455);
            if (UnaryOp GetMSBs)
                break;
            v33 = v3;
            v3 = v33 + 16;
            v16 = 16 + (char *)v16 + v33 & v15;
        }
    }
    v35 = v2;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5bf006794d077055(a3, v35, v9);
    a4 = a4;
    v36 = v0;
    if (v36 == a4->field_0)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0f91a2a8abe73e10(a4);
        v10 = a4->field_8;
    }
    v37 = v36 * 16;
    *((unsigned long long *)(v10 + v37)) = v35;
    *((unsigned long *)(v10 + v37 + 8)) = v9;
    v38 = (char *)v36 + 1;
    a4->field_10 = v0;
    if (!a0->field_18)
        goto LABEL_0x486c81;
    else
        goto LABEL_0x486b39;
}
