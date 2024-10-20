long long uu_tsort::Graph::add_edge::h9abc5681d73c775b(struct_0 *a0, unsigned long long a1, unsigned long a2, void* a3, unsigned long a4)
{
    int v0;  // [bp-0xb8], Other Possible Types: void*
    uint128_t *v1;  // [sp-0xa0]
    int v2;  // [bp-0x98], Other Possible Types: void*, unsigned long
    int v3;  // [bp-0x88], Other Possible Types: uint128_t *
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    unsigned long long v9;  // [sp-0x50]
    int v10;  // [sp-0x48]
    struct_2 *v12;  // rax
    unsigned long long v13;  // rdx
    char *v14;  // rcx
    char *v15;  // rsi
    char *v16;  // r9
    int v17;  // xmm0
    int v18;  // ymm0
    int v19;  // ymm0
    unsigned long long v20;  // r10
    unsigned long long v21;  // rdi
    int v22;  // xmm0
    unsigned long long v23;  // rdi
    unsigned long long v24;  // r8
    unsigned long long v25;  // r10
    char *v26;  // r10
    char v27;  // r9b
    char v29;  // dl
    char *v30;  // rdx
    int v31;  // ymm0
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rcx
    uint128_t *v34;  // rax
    struct_2 *v35;  // rax
    unsigned long long v36;  // rdx
    char *v37;  // rcx
    char *v38;  // rsi
    char *v39;  // r9
    int v40;  // xmm0
    int v41;  // ymm0
    unsigned long long v42;  // r10
    unsigned long long v43;  // rdi
    int v44;  // xmm0
    unsigned long long v45;  // rdi
    unsigned long long v46;  // r8
    unsigned long long v47;  // r10
    char *v48;  // r10
    char v49;  // r9b
    char v51;  // dl
    char *v52;  // rdx
    struct_0 *v53;  // rbx
    unsigned long long v54;  // rax
    uint128_t *v55;  // rcx
    uint128_t *v56;  // r15
    uint128_t *v57;  // r14
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // ymm0
    void* *v63;  // r13
    uint128_t *v64;  // rcx
    int v65;  // xmm0
    int v67;  // ymm0
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rbp
    void* *v71;  // rbx
    unsigned long long v72;  // rax
    int v74;  // xmm0
    unsigned long long v76;  // rax
    uint128_t *v77;  // rax
    struct_4 *v78;  // r14
    unsigned long long *v79;  // r15
    unsigned long long *v80;  // rax
    unsigned long long *v81;  // rcx
    unsigned long long v82;  // rdx
    struct_0 *v83;  // rbx
    unsigned long long v84;  // rax
    uint128_t *v85;  // rcx
    uint128_t *v86;  // r14
    uint128_t *v87;  // r12
    int v88;  // xmm0
    int v89;  // xmm0
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // ymm0
    void* *v93;  // r13
    unsigned long long v95;  // 4096
    unsigned long long v96;  // r15
    unsigned long v97;  // rdx
    int v98;  // xmm0
    int v99;  // xmm0
    unsigned long long v100;  // rbp
    unsigned long long v101;  // rbp
    void* *v103;  // rbx
    unsigned long long v104;  // rdx
    unsigned long long v105;  // rax
    int v107;  // xmm0

    v0 = a1;
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hbf9327bbf61e49de(&v4, a0, a1, a2);
    if (*((long long *)&v4))
    {
        v12 = *((long long *)&v7);
        v13 = *((long long *)&v8);
        v14 = v12->field_0;
        v15 = v12->field_8;
        v16 = v15 & v13;
        v17 = *((int128_t *)(v14 + v16));
        v19 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17;
        v20 = UnaryOp GetMSBs;
        if (!(unsigned int)v20)
        {
            v21 = 16;
            do
            {
                v16 = &v16[v21] & v15;
                v22 = *((int128_t *)(v14 + v16));
                v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
                v20 = UnaryOp GetMSBs;
                v21 += 16;
            } while (!(unsigned int)v20);
        }
        v23 = *((long long *)&v5);
        v24 = *((long long *)&v6);
        v25 = (!(v20 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v26 = &v16[v25] & v15;
        v27 = *((char *)(v14 + v26));
        if (v27 >= 0)
        {
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v14);
            v26 = (!UnaryOp GetMSBs ? 32 : UnaryOp Ctz & 4294967295);
            v27 = *((char *)(v14 + v26));
        }
        v29 = v13 >> 57;
        *((char *)(v14 + v26)) = v29;
        v14[16 + (v26 + 16 & v15)] = v29;
        v30 = -(v26) * 48;
        v12->field_10 = v12->field_10 - (v27 & 1);
        *((unsigned long long *)(v14 + v30 - 48)) = v23;
        *((unsigned long long *)(v14 + v30 - 40)) = v24;
        *((long long *)(v14 + v30 - 32)) = 0;
        *((long long *)(v14 + v30 - 24)) = 8;
        v31 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)(v14 + v30 - 16)) = 0;
        v12->field_18 = v12->field_18 + 1;
    }
    v32 = a4;
    if (a2 == v32)
    {
        v34 = bcmp(v0, a3, a2);
        if (!(unsigned int)v34)
            return v34;
    }
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hbf9327bbf61e49de(&v4, a0, a3, v33);
    if (*((long long *)&v4))
    {
        v35 = *((long long *)&v7);
        v36 = *((long long *)&v8);
        v37 = v35->field_0;
        v38 = v35->field_8;
        v39 = v38 & v36;
        v40 = *((int128_t *)(v37 + v39));
        v41 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v42 = UnaryOp GetMSBs;
        if (!(unsigned int)v42)
        {
            v43 = 16;
            do
            {
                v39 = &v39[v43] & v38;
                v44 = *((int128_t *)(v37 + v39));
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                v42 = UnaryOp GetMSBs;
                v43 += 16;
            } while (!(unsigned int)v42);
        }
        v45 = *((long long *)&v5);
        v46 = *((long long *)&v6);
        v47 = (!(v42 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v48 = &v39[v47] & v38;
        v49 = *((char *)(v37 + v48));
        if (v49 >= 0)
        {
            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v37);
            v48 = (!UnaryOp GetMSBs ? 32 : UnaryOp Ctz & 4294967295);
            v49 = *((char *)(v37 + v48));
        }
        v51 = v36 >> 57;
        *((char *)(v37 + v48)) = v51;
        v37[16 + (v48 + 16 & v38)] = v51;
        v52 = -(v48) * 48;
        v35->field_10 = v35->field_10 - (v49 & 1);
        *((unsigned long long *)(v37 + v52 - 48)) = v45;
        *((unsigned long long *)(v37 + v52 - 40)) = v46;
        *((long long *)(v37 + v52 - 32)) = 0;
        *((long long *)(v37 + v52 - 24)) = 8;
        v31 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)(v37 + v52 - 16)) = 0;
        v35->field_18 = v35->field_18 + 1;
    }
    if (!a0->field_18)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v53 = a0;
    v9 = v53 + 1;
    v54 = core::hash::BuildHasher::hash_one::hd657446ae9004013(v53 + 1, v0, a2);
    v55 = v53->field_0;
    v56 = v53->field_8;
    v57 = v56 & v54;
    v58 = v54 >> 57;
    v59 = InterleaveLOV(v58, v58);
    v60 = (unsigned long long)(v59 >> 64) CONCAT (unsigned short)v59 CONCAT (unsigned short)v59 CONCAT (unsigned short)v59 CONCAT (unsigned short)v59;
    v61 = (unsigned int)v60 CONCAT (unsigned int)v60 CONCAT (unsigned int)v60 CONCAT (unsigned int)v60;
    v62 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
    v10 = v61;
    v63 = v55 + 3;
    v2 = 0;
    v1 = v55;
    while (true)
    {
        v65 = *((int128_t *)(v64 + v57));
        v3 = v65;
        v67 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v65, v10);
        v68 = UnaryOp GetMSBs;
        if ((unsigned int)v68)
        {
            do
            {
                v69 = v68;
                v71 = -((!(v69 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v57 & v56) * 48;
                if (*((long long *)(v63 + v71 + 8)) == a2 && !bcmp(v0, *((long long *)(v71 + v63)), a2))
                {
                    v77 = v1;
                    v78 = v77 + v71;
                    v79 = *((long long *)(v77 + v71 - 16));
                    if (v79 == *((long long *)(v77 + v71 - 32)))
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0f91a2a8abe73e10(v77 + v71 - 32);
                    v80 = v78[1].field_-10;
                    v81 = v79 * 16;
                    *((void* *)(v80 + v81)) = a3;
                    v82 = a4;
                    *((unsigned long long *)(v80 + v81 + 8)) = v82;
                    v78[1].field_-18 = (char *)v79 + 1;
                    v83 = a0;
                    if (!v83->field_18)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    v84 = core::hash::BuildHasher::hash_one::hd657446ae9004013(v9, a3, v82);
                    v85 = v83->field_0;
                    v86 = v83->field_8;
                    v87 = v86 & v84;
                    v88 = v84 >> 57;
                    v89 = InterleaveLOV(v88, v88);
                    v90 = (unsigned long long)(v89 >> 64) CONCAT (unsigned short)v89 CONCAT (unsigned short)v89 CONCAT (unsigned short)v89 CONCAT (unsigned short)v89;
                    v91 = (unsigned int)v90 CONCAT (unsigned int)v90 CONCAT (unsigned int)v90 CONCAT (unsigned int)v90;
                    v92 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                    v2 = v91;
                    v3 = v85;
                    v93 = v85 + 3;
                    while (true)
                    {
                        v96 = 0;
                        v97 = v95;
                        v98 = *((int128_t *)(v3 + v87));
                        v0 = v98;
                        v99 = CmpEQV(v98, (int128_t)v2);
                        v100 = UnaryOp GetMSBs;
                        if ((unsigned int)v100)
                        {
                            do
                            {
                                v101 = v100;
                                v103 = -((!(v101 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v87 & v86) * 48;
                                if (*((long long *)(v93 + v103 + 8)) == v97 && !bcmp(a3, *((long long *)(v103 + v93)), v97))
                                {
                                    v34 = v3;
                                    *((long long *)(v34 + v103 - 8)) = *((long long *)(v34 + v103 - 8)) + 1;
                                    return v34;
                                }
                                v97 = v104;
                                v105 = v101 - 1 & 4294967295;
                            } while (((unsigned short)v105 & (unsigned short)v101));
                        }
                        v107 = (int128_t)v0;
                        v92 = v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v107, 340282366920938463463374607431768211455);
                        if (UnaryOp GetMSBs)
                            break;
                        v87 = 16 + (char *)v87 + v96 & v86;
                    }
                }
                v72 = v69 - 1 & 4294967295;
            } while (((unsigned short)v72 & (unsigned short)v69));
        }
        v74 = (int128_t)v3;
        v62 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v74, 340282366920938463463374607431768211455);
        if (UnaryOp GetMSBs)
            break;
        v76 = v2;
        v2 = v76 + 16;
        v57 = 16 + (char *)v57 + v76 & v56;
        v64 = v1;
    }
}
