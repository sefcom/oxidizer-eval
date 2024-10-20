long long uu_mktemp::dry_exec::h0f07fcbf289fc353(unsigned long long a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long a4, char *a5)
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x88]
    void* v2;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v3[2];  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x70], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x68]
    int v6;  // [sp-0x60]
    unsigned long long v7;  // [sp-0x38]
    unsigned long long v8;  // [sp-0x10]
    void* v9;  // [bp+0x8]
    char v10;  // [bp+0x10]
    unsigned long v11;  // r15
    unsigned long long v12;  // r15
    unsigned long v13;  // cc_ndep
    unsigned long long v14;  // rbp
    unsigned long long v15;  // cc_ndep
    unsigned long long v16;  // r15
    unsigned long long v17;  // r15
    unsigned long long v18;  // rbp
    unsigned long long v19;  // r12
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbp
    unsigned long long v22;  // r15
    unsigned long long v23;  // r12
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rbp
    unsigned long long v28;  // r12
    unsigned long long v29;  // rsi
    struct struct_1 **v30;  // fs
    struct_1 *v31;  // rax
    struct struct_0 **v32;  // rdx
    unsigned long long v33;  // cc_op
    unsigned long long v35;  // cc_dep2
    struct struct_0 **v36;  // rax
    unsigned long long v37[2];  // rax
    char *v38;  // rbp
    unsigned long long v39[2];  // rdi
    char *v41;  // rax
    char *v42;  // rcx
    int v43;  // ymm0
    int v44;  // ymm13
    int v45;  // ymm14
    int v46;  // ymm12
    int v47;  // ymm15
    int v48;  // xmm0
    int v49;  // xmm13
    int v50;  // xmm13
    int v51;  // xmm13
    int v52;  // xmm14
    int v53;  // xmm14
    int v54;  // xmm14
    int v55;  // xmm14
    int v56;  // xmm13
    int v57;  // xmm13
    int v58;  // xmm13
    int v59;  // xmm13
    int v60;  // xmm13
    int v61;  // xmm13
    int v62;  // xmm14
    int v63;  // xmm14
    int v64;  // xmm14
    int v65;  // xmm14
    int v66;  // xmm13
    int v67;  // xmm13
    int v68;  // xmm13
    int v69;  // xmm13
    int v70;  // xmm0
    int v71;  // xmm13
    int v72;  // xmm14
    int v73;  // xmm12
    int v74;  // xmm12
    int v75;  // xmm15
    int v76;  // xmm15
    int v77;  // xmm15
    int v78;  // xmm12
    int v79;  // xmm12
    int v80;  // xmm0
    int v81;  // xmm12
    int v82;  // xmm15
    int v83;  // xmm15
    int v84;  // xmm13
    int v85;  // xmm14
    int v86;  // xmm14
    int v87;  // xmm13
    int v88;  // xmm14
    char *v89;  // rdx
    char *v91;  // rax
    int v92;  // ymm0
    int v93;  // xmm13
    int v94;  // xmm13
    int v95;  // xmm13
    int v96;  // xmm14
    int v97;  // xmm14
    int v98;  // xmm14
    int v99;  // xmm14
    int v100;  // xmm13
    int v101;  // xmm13
    int v102;  // xmm13
    int v103;  // xmm13
    int v104;  // xmm13
    int v105;  // xmm13
    int v106;  // xmm14
    int v107;  // xmm14
    int v108;  // xmm14
    int v109;  // xmm14
    int v110;  // xmm13
    int v111;  // xmm13
    int v112;  // xmm13
    int v113;  // xmm13
    int v114;  // xmm0
    int v115;  // xmm13
    int v116;  // xmm12
    int v117;  // xmm12
    int v118;  // xmm15
    int v119;  // xmm15
    int v120;  // xmm15
    int v121;  // xmm12
    int v122;  // xmm12
    int v123;  // xmm0
    int v124;  // xmm0
    int v125;  // xmm15
    int v126;  // xmm15
    int v127;  // xmm13
    int v128;  // xmm13
    char *v129;  // rcx
    unsigned long long v130;  // rax
    char v132;  // al
    unsigned long long v133;  // r14
    unsigned long long v134;  // r15
    unsigned long long v135;  // r15
    unsigned long long v136;  // r14
    unsigned long long v137;  // r12
    unsigned long long v138;  // r15

    v8 = v11;
    v7 = &a5[a4];
    v12 = v7 + vvar_775;
    if (!v7 + vvar_775)
    {
        v14 = 1;
        goto LABEL_48acf6;
    }
    else
    {
        if ((char)amd64g_calculate_condition(8, 4, v7, vvar_775, v13))
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v14 = __rust_alloc(v12, 1);
        if (v14)
        {
LABEL_48acf6:
            v0 = v12;
            v1 = v14;
            v2 = 0;
            if (v12 >= a4)
            {
                v2 = 0;
                v1 = v1;
            }
            else
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hf649f78ee2b9491c(&v0, 0, a4);
                v1 = v1;
                v16 = v0;
            }
            v17 = v16;
            v18 = v1;
            memcpy(v2 + v18, a3, a4);
            v19 = v2 + a4;
            v2 = v19;
            v20 = v17 - v19;
            if (v20 < a5)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hf649f78ee2b9491c(&v0, v19, a5);
                v21 = v1;
                v22 = v0;
                v23 = v2;
LABEL_48ad84:
                v18 = v21;
                memset(v23 + v18, 88, a5);
                v19 = &a5[v23];
                v20 = v22 - v19;
            }
            else if (!(!a5))
            {
                goto LABEL_48ad84;
            }
            v2 = v19;
            v25 = *((long long *)&v10);
            if (v20 < v25)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hf649f78ee2b9491c(&v0, v2, v25);
                v25 = *((long long *)&v10);
                v21 = v1;
            }
            v27 = v26;
            memcpy(v2 + v27, v9, v25);
            v28 = v2 + v25;
            v2 = v28;
            v29 = v7;
            if (v29 < a4)
                core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
            if (v29 > v28)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            v31 = *(v30);
            v32 = v31[2].field_-10;
            if (!v32)
            {
                v36 = std::sys::thread_local::native::lazy::Storage$LT$T$C$D$GT$::initialize::h9005663a195c887c(v31 + 2, 0, v32);
                v33 = 20;
                v35 = 0;
                if (!v36)
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            else
            {
                v33 = 7;
                v35 = 1;
                if ((unsigned int)v32 != 1)
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v36 = v31 + 1;
            }
            v37 = *(v36);
            v3[0] = v3[0] + 1;
            if ((char)amd64g_calculate_condition(4, 24, vvar_794 + 1, 0, amd64g_calculate_rflags_c(v33, v32 & 4294967295, v35, v15)))
                [D] Unsupported jumpkind Ijk_NoDecode at address 4764316()
            v38 = v27 + a4;
            v3[0] = v37;
            rand::rng::Rng::fill::ha928c720cc245113(v3, v38, a5);
            v39 = v3;
            v39[0] = vvar_798 - 1;
            if (vvar_798 == 1)
            {
                v39[1] = v39[1] - 1;
                if (vvar_799 == 1)
                    __rust_dealloc(v39);
            }
            if (a5)
            {
                if (a5 < 8)
                {
LABEL_48b20a:
                    do
                    {
                        v130 = *(v129);
                        v132 = v130 - ((unsigned int)((v130 & 4294967295 & 255 & 255) >> 1) * 133 >> 12) * 62;
                    } while ((*(v129) = v132 | 48, v129 += 1, v129 != v38 + a5));
                }
                else
                {
                    if (a5 < 16)
                    {
                        v41 = 0;
                        goto LABEL_48aeb2;
                    }
                    v41 = a5 & -0x10;
                    v42 = 0;
                    do
                    {
                        v48 = *((int128_t *)(v38 + v42));
                        v49 = v48;
                        v50 = ShrNV(v49, 1);
                        v51 = v50 & 169473963133173273960190490760135540607;
                        v52 = v51;
                        v53 = InterleaveHIV(0, v52);
                        v54 = MulV(v53, 690586019691536059214600179879837829);
                        v55 = ShrNV(v54, 8);
                        v56 = InterleaveLOV(0, v51);
                        v57 = MulV(v56, 690586019691536059214600179879837829);
                        v58 = ShrNV(v57, 8);
                        v59 = QNarrowBinV(v55, v58);
                        v60 = ShrNV(v59, 4);
                        v61 = v60 & 20016609818878733144904388672456953615;
                        v62 = v61;
                        v63 = InterleaveHIV(v62, v62);
                        v64 = MulV(v63, 321927317450189741889512865808646206);
                        v65 = v64 & 1324055902416102970674609367438786815;
                        v66 = InterleaveLOV(v61, v61);
                        v67 = MulV(v66, 321927317450189741889512865808646206);
                        v68 = v67 & 1324055902416102970674609367438786815;
                        v69 = QNarrowBinV(v65, v68);
                        v70 = SubV(v48, v69);
                        v71 = v70;
                        v72 = v70;
                        v73 = v70;
                        v74 = AddV(v73, 328272401029611223576431974228294039286);
                        v75 = v74;
                        v76 = MinV(v75, 33361016364797888574840647787428256025);
                        v77 = CmpEQV(v76, v74);
                        v78 = v70;
                        v79 = AddV(v78, 116096336949496652240445454300250330967);
                        v80 = v70 | 64053151420411946063694043751862251568;
                        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                        v81 = v79 & v77;
                        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                        v82 = ~(v77) & v80;
                        v83 = v82 | v81;
                        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                        v84 = CmpGTV(v71, 46705422910717044004776906902399558435);
                        v85 = AddV(v72, 38698778983165550746815151433416776989);
                        v86 = v85 & v84;
                        v87 = ~(v84) & v83;
                        v44 = ...;
                        v88 = v86 | v87;
                        v45 = ...;
                        *((void*)(v38 + v42)) = v88;
                        v42 += 16;
                    } while (v41 != v42);
                    if (v41 != a5)
                    {
                        if (!((char)a5 & 8))
                        {
                            v91 = v41 + v38;
                            goto LABEL_48b20a;
                        }
LABEL_48aeb2:
                        v89 = a5 & -8;
                        do
                        {
                            v92 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)(v38 + v41));
                            v93 = (uint128_t)v92;
                            v94 = ShrNV(v93, 1);
                            v95 = v94 & 169473963133173273960190490760135540607;
                            v96 = v95;
                            v97 = InterleaveHIV(0, v96);
                            v98 = MulV(v97, 690586019691536059214600179879837829);
                            v99 = ShrNV(v98, 8);
                            v100 = InterleaveLOV(0, v95);
                            v101 = MulV(v100, 690586019691536059214600179879837829);
                            v102 = ShrNV(v101, 8);
                            v103 = QNarrowBinV(v99, v102);
                            v104 = ShrNV(v103, 4);
                            v105 = v104 & 20016609818878733144904388672456953615;
                            v106 = v105;
                            v107 = InterleaveHIV(v106, v106);
                            v108 = MulV(v107, 321927317450189741889512865808646206);
                            v109 = v108 & 1324055902416102970674609367438786815;
                            v110 = InterleaveLOV(v105, v105);
                            v111 = MulV(v110, 321927317450189741889512865808646206);
                            v112 = v111 & 1324055902416102970674609367438786815;
                            v113 = QNarrowBinV(v109, v112);
                            v114 = SubV((uint128_t)v92, v113);
                            v115 = v114;
                            v116 = v114;
                            v117 = AddV(v116, 17795682518166861558);
                            v118 = v117;
                            v119 = MaxV(v118, 1880844493789993498);
                            v120 = CmpEQV(v119, v117);
                            v121 = v114;
                            v122 = AddV(v121, 6293595036912670551);
                            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122;
                            v123 = v114 | 3472328296227680304;
                            v124 = v123 & v120;
                            v43 = v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v124;
                            v125 = ~(v120) & v122;
                            v126 = v125 | v124;
                            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v118 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v119 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126;
                            v127 = CmpGTV(v115, 2531906049332683555);
                            v128 = ~(v127) & v126;
                            v44 = ...;
                            v45 = ...;
                            *((unsigned long long *)(v38 + v41)) = (unsigned long long)v45;
                            v41 += 8;
                        } while (v89 != v41);
                        if (v89 == a5)
                            goto LABEL_48b173;
                        goto LABEL_48b20a;
                    }
                }
            }
LABEL_48b173:
            v133 = v0;
            v134 = v1;
            core::str::converts::from_utf8::ha1effb4cca6d9901(v3, v134, v28);
            if (v3)
            {
                if (v133 != 0x8000000000000000)
                {
                    v3 = v133;
                    v4 = v134;
                    v5 = v28;
                    *((int128_t *)&v6) = *((int128_t *)&v4);
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                v137 = v4;
            }
            v138 = v135;
            std::path::Path::_join::h609728e54bd034cb(a0, a1, a2, v138, v137);
            if (v136)
            {
                __rust_dealloc(v138);
                return a0;
            }
            return a0;
        }
    }
}
