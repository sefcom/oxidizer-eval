long long uu_tsort::Graph::run_tsort::h26bfb03b6d41d9be(struct_0 *a0, struct_1 *a1)
{
    void* v0;  // [sp-0x180], Other Possible Types: unsigned long long *
    char v1;  // [bp-0x171]
    int v2;  // [sp-0x170]
    unsigned long long *v3;  // [sp-0x160]
    unsigned long long v4;  // [sp-0x158]
    void* v5;  // [sp-0x150]
    unsigned int v6;  // [bp-0x148]
    unsigned long long v7;  // [sp-0x140]
    uint128_t *v8;  // [sp-0x138]
    unsigned long v9;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long *v10;  // [sp-0x128]
    unsigned long long *v11;  // [sp-0x120]
    unsigned long long v12[2];  // [sp-0x118]
    unsigned long long v13;  // [sp-0x110]
    unsigned long long v14;  // [sp-0x108]
    unsigned long v15;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xf8]
    void* v17;  // [sp-0xf0]
    int v18;  // [bp-0xe8], Other Possible Types: unsigned long
    int v19;  // [bp-0xd8], Other Possible Types: char
    int v20;  // [bp-0xc8], Other Possible Types: char
    char v21;  // [bp-0xc0]
    unsigned long long v22;  // [sp-0xb8], Other Possible Types: unsigned long
    unsigned long long v23;  // [sp-0xb0]
    int v24;  // [sp-0x98]
    unsigned long long v25;  // [sp-0x80]
    int v26;  // [sp-0x78]
    unsigned long long v27;  // [sp-0x68]
    uint128_t *v28;  // [sp-0x58]
    unsigned long long v29;  // [sp-0x50]
    unsigned long long v30;  // [sp-0x48]
    unsigned short v31;  // [sp-0x40]
    unsigned long long v32;  // [sp-0x38]
    unsigned long long v34;  // r14
    unsigned long long *v35;  // rax
    void* v36;  // rcx
    struct_1 *v37;  // 4096
    struct_1 *v38;  // rsi
    uint128_t *v39;  // rax
    int v41;  // xmm0
    int v42;  // ymm0
    int v43;  // ymm0
    unsigned long long v45;  // rdx
    unsigned long long *v46;  // rbx
    unsigned long long v47;  // r15
    struct_4 *v48;  // r14
    unsigned long long v49;  // rcx
    void* v50;  // r12
    unsigned long long v51;  // rbp
    void* v52;  // rsi
    unsigned long long v53;  // rdx
    unsigned long long v55;  // r13
    unsigned long long v59;  // rax
    unsigned long long *v60;  // r13
    int v61;  // xmm0
    unsigned long long v63;  // rdx
    unsigned long long v65;  // r15
    unsigned long long v66;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long *v70;  // r13
    unsigned long long *v71;  // rbx
    unsigned long long v73;  // rax
    unsigned long long v76;  // r15
    unsigned long long *v77;  // rcx
    unsigned long long v79;  // r13
    unsigned long long *v80;  // rdx
    unsigned long long *v81;  // rcx
    unsigned long long v82;  // rbx
    unsigned long long v83;  // r12
    unsigned long long *v84;  // r14
    unsigned long long *v85;  // rax
    unsigned long long *v86;  // rcx
    unsigned long long v118;  // r14
    struct struct_3 **v119;  // fs
    struct_0 *v120;  // rbx
    unsigned long long v121[3];  // rax
    unsigned long long v122;  // rbx
    unsigned long long v123;  // r15
    unsigned long long v124[3];  // rax
    int v125;  // xmm0
    int v126;  // xmm0
    unsigned long long v127;  // rax
    unsigned long long v128;  // rcx
    uint128_t *v129;  // rdx
    uint128_t *v130;  // rbx
    int v131;  // xmm0
    int v132;  // ymm0
    unsigned long long v133;  // rax
    int v134;  // xmm0
    unsigned int v135;  // eax
    uint128_t *v136;  // rdx
    int v137;  // ymm0
    unsigned long long v138;  // rax
    unsigned long long v139;  // rax
    unsigned long v140;  // rbp
    unsigned long long v141;  // rax
    uint128_t *v142;  // rcx
    uint128_t *v143;  // r14
    uint128_t *v144;  // r15
    int v145;  // xmm0
    int v146;  // xmm0
    int v147;  // xmm0
    int v148;  // xmm0
    int v149;  // xmm0
    unsigned long long v151;  // r12
    unsigned long long v152;  // r12
    struct_5 *v154;  // rax
    unsigned long long v155;  // rax
    int v157;  // xmm0
    unsigned long long v159;  // rax
    unsigned long long v161;  // rsi
    unsigned long long v162;  // rax

    v34 = a1->field_18;
    if (!v34)
    {
        v35 = 8;
        v36 = 0;
        goto LABEL_485f63;
    }
    if (v34 > 576460752303423487)
        goto LABEL_486848;
    v35 = __rust_alloc(v34 * 16, 8);
    if (!v35)
    {
LABEL_486848:
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    v38 = a1;
    v36 = v38->field_18;
LABEL_485f63:
    v9 = v34;
    v10 = v35;
    v11 = 0;
    v39 = v37->field_0;
    v28 = v39;
    v29 = v39 + 1;
    v30 = v39 + v37->field_8 + 1;
    v31 = ~(UnaryOp GetMSBs);
    v32 = v36;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4d160665f3ceb047(&v19, &v28);
    v41 = v19;
    v43 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(v39) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
    v3 = 0;
    v4 = *((long long *)&v20);
    v2 = v41;
    if (v45 >= 2)
    {
        v46 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::haf1b7af5069feb63(&v2);
        if (v45 >= 21)
        {
            core::slice::sort::unstable::ipnsort::h0071b5c943be5344(v46, v45, &v1, v49);
        }
        else
        {
            v47 = &v46[2 * v45];
            v48 = v46 + 2;
            v0 = 16;
            v18 = v47;
            do
            {
                v50 = v48->field_-10;
                v51 = v48->field_-8;
                v52 = v48->field_0;
                v53 = v48->field_-8;
                v55 = v51 - v53;
                if (v59 < 0)
                {
                    v0 = v0;
                    do
                    {
                        v60 = v0;
                        v61 = *((int128_t *)(v46 + v60 - 16));
                        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                        *((void*)(v46 + v60)) = v61;
                        if (v60 == 16)
                            goto LABEL_486040;
                        v63 = *((long long *)(v46 + v60 - 24));
                        v65 = v51 - v63;
                        v68 = memcmp(v50, *((long long *)(v46 + v60 - 32)), v66);
                        v70 = v60 + 2;
                    } while (v69 < 0);
LABEL_486040:
                    v47 = v18;
                    *(v71) = v50;
                    v71[1] = v51;
                }
                v48 = &v48->field_0;
                v0 += 2;
            } while (v48 != v47);
        }
    }
    v73 = v4;
    if (!v73)
    {
LABEL_48640d:
        v118 = a1->field_18;
        if (!v118)
        {
            v120 = a0;
            *((unsigned long long **)((char *)&v120->field_8 + 8)) = v11;
            *((int128_t *)&(&v120->field_0)[1]) = *((int128_t *)&v9);
            v120->field_0 = 0;
            if (!(long long)v2)
                return v120;
            v10 = (long long)(&v2)[8];
        }
        else
        {
            if (*((long long *)&*(v119)->padding_-28[40]))
            {
                v121 = &*(v119)->padding_-28[40];
                v122 = v121[1];
                v123 = v121[2];
            }
            else
            {
                v122 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
                v124 = &*(v119)->padding_-28[40];
                v124[0] = 1;
                v124[2] = v123;
                v118 = a1->field_18;
            }
            *((unsigned long long *)&*(v119)->padding_-28[32]) = v122 + 1;
            v22 = v122;
            v23 = v123;
            v125 = anon.c57a7805e9a900e622496ec0d4f4cf5c.5.llvm.6768286536187217038;
            v19 = v125;
            v126 = g_4e7770;
            v20 = v126;
            if (!v118)
            {
                v15 = v118;
                v16 = 8;
                v17 = 0;
                goto LABEL_486874;
            }
            if (v118 > 576460752303423487)
                goto LABEL_486892;
            v127 = __rust_alloc(v118 * 16, 8);
            if (!v127)
            {
LABEL_486892:
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            v128 = a1->field_18;
            v15 = v118;
            v16 = v127;
            v17 = 0;
            if (!v128)
            {
LABEL_486874:
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            }
            v129 = a1->field_0;
            v130 = v129 + 1;
            v131 = *(v129);
            v132 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v131;
            v133 = ~(UnaryOp GetMSBs);
            do
            {
                v14 = v128;
                if ((unsigned short)v133)
                {
                    v6 = (unsigned int)(v133 - 1) & (unsigned int)v133;
                }
                else
                {
                    do
                    {
                        v134 = *(v130);
                        v132 = v132 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v134;
                        v135 = UnaryOp GetMSBs;
                        v129 += 48;
                        v130 += 1;
                    } while (v135 == 65535);
                    v133 = ~(v135);
                    v6 = (unsigned int)v133 & (unsigned int)(4294967294 - v135);
                }
                v138 = (!(v133 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
                v139 = -(v138) * 48;
                v0 = *((long long *)(-48 + (char *)v136 + v139));
                v129 = v136;
                v140 = *((long long *)(-40 + (char *)v136 + v139));
                if ((long long)(&v20)[8])
                {
                    v141 = core::hash::BuildHasher::hash_one::hd657446ae9004013(&v22, v0, v140);
                    v142 = (long long)v19;
                    v143 = (long long)(&v19)[8];
                    v144 = v143 & v141;
                    v145 = v141 >> 57;
                    v146 = InterleaveLOV(v145, v145);
                    v147 = (unsigned long long)(v146 >> 64) CONCAT (unsigned short)v146 CONCAT (unsigned short)v146 CONCAT (unsigned short)v146 CONCAT (unsigned short)v146;
                    v148 = (unsigned int)v147 CONCAT (unsigned int)v147 CONCAT (unsigned int)v147 CONCAT (unsigned int)v147;
                    v137 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v145 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v146 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v147 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v148;
                    v24 = v148;
                    v8 = v142;
                    v5 = 0;
                    while (true)
                    {
                        v149 = *((int128_t *)(v8 + v144));
                        v18 = v149;
                        v132 = v137 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v149 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v149, v24);
                        v151 = UnaryOp GetMSBs;
                        if ((unsigned int)v151)
                        {
                            while (true)
                            {
                                v152 = v151;
                                v154 = (char *)&v142[-1 * ((!(v152 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v144 & v143)] + 1;
                                if (v154->field_8 == v140 && !bcmp(v0, v154->field_0, v140))
                                    break;
                                v155 = v152 - 1 & 4294967295;
                                if (!((unsigned short)v155 & (unsigned short)v152))
                                    goto LABEL_4866ae;
                            }
                        }
LABEL_4866ae:
                        v157 = (int128_t)v18;
                        v137 = v132 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v157 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v157, 340282366920938463463374607431768211455);
                        if (UnaryOp GetMSBs)
                            break;
                        v159 = v5;
                        v5 = v159 + 16;
                        v144 = 16 + (char *)v144 + v159 & v143;
                    }
                }
                if ((char)uu_tsort::Graph::dfs::h2db7c235628f80b9(a1, v0, v140, &v19, &v15))
                {
                    v27 = v17;
                    *((int128_t *)&v26) = *((int128_t *)&v15);
                    v161 = (long long)(&v19)[8];
                    if (v161)
                    {
                        v162 = v161 * 16;
                        if (v161 + v162 + 33)
                            __rust_dealloc((long long)v19 - v162 - 16);
                    }
                    v120 = a0;
                    *((unsigned long long *)((char *)&v120->field_8 + 8)) = v27;
                    *((void*)&(&v120->field_0)[1]) = v26;
                    v120->field_0 = 1;
                    if ((long long)v2)
                        __rust_dealloc((long long)(&v2)[8]);
                    if (!v9)
                        return v120;
                    goto LABEL_486814;
                }
            } while ((v133 = (unsigned long long)v6, v128 = v14 - 1, v14 != 1));
            goto LABEL_486874;
        }
LABEL_486814:
        __rust_dealloc(v10);
        return v120;
    }
    v7 = a1 + 1;
    v76 = 0x8000000000000000;
    v25 = 0x8000000000000000;
    while (true)
    {
        v77 = v3;
        v80 = (long long)(&v2)[8];
        v3 = 1 + -(v79) + (char *)v77;
        v4 = v73 - 1;
        v81 = v77 * 16;
        v82 = *((long long *)(v80 + v81));
        v83 = *((long long *)(v80 + v81 + 8));
        v84 = v11;
        if (v84 == v9)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0f91a2a8abe73e10(&v9);
        v85 = v10;
        v86 = v84 * 16;
        *((unsigned long long *)(v85 + v86)) = v82;
        *((unsigned long long *)(v85 + v86 + 8)) = v83;
        v11 = (char *)v84 + 1;
        hashbrown::raw::RawTable$LT$T$C$A$GT$::remove_entry::h054de438437dab88(&v19, a1, core::hash::BuildHasher::hash_one::hd657446ae9004013(v7, v82, v83), v82, v83);
        v13 = *((long long *)&v20);
        if (v13 != v76)
            break;
        v73 = v4;
        if (!v73)
            goto LABEL_48640d;
    }
    v12[0] = *((long long *)&v21);
    if (!v22)
        goto LABEL_0x4863d0;
    else
        goto LABEL_0x486217;
}
