long long uu_sort::merge::merge_with_file_limit::h0cab999079376d70(unsigned long long a0[2], uint128_t a1[3], unsigned long long a2[15], unsigned long long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x360]
    uint128_t *v1;  // [sp-0x358]
    uint128_t *v2;  // [sp-0x350]
    unsigned long long v3;  // [sp-0x348]
    unsigned long long v4;  // [sp-0x340]
    uint128_t *v5;  // [sp-0x328], Other Possible Types: int, unsigned long, unsigned long long
    uint128_t *v6;  // [sp-0x320], Other Possible Types: unsigned long long
    int v7;  // [sp-0x318], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x310]
    int v9;  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x300]
    int v11;  // [sp-0x2f8]
    int v12;  // [sp-0x2e8]
    int v13;  // [sp-0x2d8]
    int v14;  // [sp-0x2c8]
    char v15;  // [bp-0x2c0]
    unsigned long long v16;  // [sp-0x2b0]
    int v17;  // [bp-0x2a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v18;  // [sp-0x2a0]
    int v19;  // [bp-0x298], Other Possible Types: unsigned long, unsigned long long
    int v20;  // [bp-0x290]
    int v21;  // [bp-0x288]
    int v22;  // [bp-0x280]
    int v23;  // [bp-0x278]
    int v24;  // [bp-0x270]
    int v25;  // [bp-0x268]
    int v26;  // [bp-0x260]
    int v27;  // [bp-0x258]
    int v28;  // [sp-0x250]
    unsigned long long v29;  // [sp-0x240]
    unsigned long v30;  // [sp-0x238], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x230]
    unsigned long v32;  // [sp-0x228], Other Possible Types: unsigned long long
    int v33;  // [sp-0x220]
    unsigned long long v34;  // [sp-0x210]
    char v35;  // [bp-0x208]
    char v36;  // [bp-0x200]
    char v37;  // [bp-0x1f8]
    char v38;  // [bp-0x1f0]
    char v39;  // [bp-0x1e0]
    char v40;  // [bp-0x1d0]
    char v41;  // [bp-0x1c0]
    char v42;  // [bp-0x1b0]
    unsigned long v43;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v44;  // [sp-0x1a0]
    unsigned long v45;  // [sp-0x198], Other Possible Types: unsigned long long
    int v46;  // [sp-0x190]
    int v47;  // [sp-0x180]
    int v48;  // [sp-0x170]
    int v49;  // [sp-0x160]
    unsigned long long v50;  // [sp-0x150]
    unsigned long long v51;  // [sp-0x148]
    unsigned long long v52;  // [sp-0x140]
    int v53;  // [sp-0x138]
    int v54;  // [sp-0x128]
    void* v55;  // [sp-0x110]
    unsigned long long v56;  // [sp-0x108]
    void* v57;  // [sp-0x100]
    unsigned long long v58;  // [sp-0xf8]
    int v59;  // [sp-0xa8]
    int v60;  // [sp-0x98]
    int v61;  // [sp-0x88]
    unsigned long long v62;  // [sp-0x78]
    int v63;  // [sp-0x70]
    int v64;  // [sp-0x60]
    void* v65;  // [sp-0x50]
    unsigned long long v66;  // [sp-0x48]
    char v67;  // [sp-0x40]
    void* v68;  // [sp-0x38]
    void* v70;  // r13
    unsigned long long v71;  // rcx
    int v72;  // ymm0
    int v73;  // ymm0
    int v74;  // xmm1
    int v75;  // ymm1
    int v76;  // ymm1
    int v77;  // xmm2
    int v78;  // ymm2
    int v79;  // ymm2
    int v80;  // xmm3
    int v81;  // ymm3
    int v82;  // ymm3
    unsigned long long v83[15];  // r15
    unsigned long long v84;  // rax
    unsigned long long v85;  // r13
    int v87;  // xmm0
    int v88;  // xmm0
    int v89;  // xmm0
    int v90;  // xmm1
    int v91;  // xmm2
    int v92;  // xmm3
    unsigned long long v93;  // rdx
    unsigned long long v94;  // rax
    unsigned long long v95;  // rcx
    int v96;  // xmm0
    int v97;  // xmm1
    int v98;  // xmm2
    int v99;  // xmm3
    unsigned long long v100;  // rax
    int v101;  // xmm0
    int v102;  // xmm0
    int v103;  // xmm0
    int v104;  // xmm1
    int v105;  // xmm2
    int v106;  // xmm3
    int v107;  // xmm0
    int v108;  // xmm0
    int v109;  // xmm0
    int v110;  // xmm1
    int v111;  // xmm2
    int v112;  // xmm3
    unsigned long long v113;  // r8
    unsigned long long v114;  // r9
    unsigned long long v115;  // rax
    int v116;  // xmm0
    int v117;  // xmm0
    int v118;  // xmm0
    int v119;  // xmm0
    int v120;  // xmm1
    int v121;  // xmm2
    int v122;  // xmm3
    unsigned long long v123;  // rdx
    unsigned long long v124;  // rcx
    int v126;  // xmm0
    uint128_t *v127;  // r15
    uint128_t *v128;  // rax
    uint128_t *v129;  // rcx
    int v130;  // xmm0
    int v131;  // xmm1
    int v132;  // xmm2
    unsigned long long v133[2];  // rdx
    unsigned long long v134[2];  // rax
    unsigned long long v135[2];  // rdx
    unsigned long long v136[2];  // rcx
    unsigned long long v137;  // rsi
    uint128_t *v138;  // rcx
    uint128_t *v139;  // rbx
    struct_0 *v140;  // r14
    uint128_t *v141;  // rbx

    v70 = (*((long long *)((char *)&a1[1] + 8)) - *((long long *)((char *)&a1[0] + 8))) / 48;
    v71 = a2[14];
    if (v70 <= v71)
    {
        return uu_sort::merge::merge_without_limit::h2cb0e3b793b4f50f(a0, a1, a2);
    }
    else if (!v71)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else
    {
        v55 = 0;
        v73 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)&v54) = 0;
        v56 = 8;
        v57 = 0;
        v58 = 9223372036854775809;
        v74 = a1[0];
        v76 = v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
        v77 = a1[1];
        v79 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
        v80 = a1[2];
        v82 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
        v59 = v74;
        v60 = v77;
        v61 = v80;
        v62 = v71;
        *((int128_t *)&v63) = 0;
        *((int128_t *)&v64) = 0;
        v65 = 0;
        v66 = -1;
        v67 = 0;
        v68 = 0;
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v83 = a2;
        v84 = (vvar_639 == 0x8000000000000000 ? v83[7] : 0);
        v3 = v84;
        v16 = v83[8];
        v4 = 9223372036854775810;
        do
        {
            v71 = v71;
            v70 -= v71;
            if (v70 < v71)
                v70 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h60f5db8e799d5a81();
            if (v5 == v4)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v87 = v13;
            v27 = v87;
            v88 = v12;
            v25 = v88;
            v89 = *((int128_t *)&v5);
            v90 = (int128_t)v7;
            v91 = (int128_t)v9;
            v92 = v11;
            v23 = v92;
            v21 = v91;
            v19 = v90;
            v17 = v89;
            uu_sort::merge::merge_without_limit::h467ad4cb0e74eb03(&v35, &v17, v83);
            v93 = *((long long *)&v35);
            v94 = *((long long *)&v36);
            v95 = *((long long *)&v37);
            if (v43 == 3)
            {
LABEL_4d7a58:
                v133 = a0;
                v133[1] = v94;
                v133[1] = v95;
                v133[0] = 3;
                goto LABEL_4d7ac8;
            }
            v50 = *((long long *)&v42);
            v96 = *((int128_t *)&v38);
            v97 = *((int128_t *)&v39);
            v98 = *((int128_t *)&v40);
            v99 = *((int128_t *)&v41);
            v49 = v99;
            v48 = v98;
            v47 = v97;
            v46 = v96;
            v43 = v93;
            v44 = v94;
            v45 = v95;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h1ae3bb5131807fb8(&v35, a3);
            v100 = *((long long *)&v36);
            if (v52 == 0x8000000000000000)
            {
                v134 = a0;
                *((int128_t *)&v134[1]) = *((int128_t *)&v37);
                v134[0] = 3;
                goto LABEL_4d7a99;
            }
            v101 = *((int128_t *)&v37);
            v51 = *((long long *)&v35);
            v52 = v100;
            v53 = v101;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h7a4c64d2eb1340d6(&v5, &v51, v3, v16);
            if (v17 == 0x8000000000000000)
            {
                v135 = a0;
                v135[1] = v18;
                v135[1] = v19;
                v135[0] = 3;
LABEL_4d7a99:
                core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hced887e5b12fefe4(&v43);
                goto LABEL_4d7ac8;
            }
            v29 = *((long long *)&v15);
            v102 = (int128_t)v13;
            v28 = v102;
            v103 = (int128_t)(&v7)[8];
            v104 = (int128_t)(&v9)[8];
            v105 = (int128_t)(&v11)[8];
            v106 = (int128_t)(&v12)[8];
            v26 = v106;
            v24 = v105;
            v22 = v104;
            v20 = v103;
            v17 = v5;
            v18 = v6;
            v19 = v7;
            v107 = (int128_t)(&v49)[8];
            v13 = v107;
            v108 = (int128_t)(&v48)[8];
            v12 = v108;
            v109 = *((int128_t *)&v43);
            v110 = *((int128_t *)&v45);
            v111 = (int128_t)(&v46)[8];
            v112 = (int128_t)(&v47)[8];
            v11 = v112;
            v9 = v111;
            v7 = v110;
            v5 = v109;
            v115 = uu_sort::merge::FileMerger::write_all_to::h400cf63649f1baef(&v5, v83, &v22, v19, v113, v114, a0, 0, 8);
            if (v115)
            {
                v136 = a0;
                v136[1] = v115;
                v136[1] = v123;
                v136[0] = 3;
                ::0x4d0730::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::h253589c18e881551(&v17, v137, v123, v136, v113, v114, a0, 0, 8, v2, v3);
LABEL_4d7ac8:
                v139 = v2;
                if (v139)
                {
                    v140 = v1 + 2;
                    do
                    {
                        v141 = v139;
                        if (v140->field_0)
                            __rust_dealloc(v140->field_-8);
                        if (v140->field_-18)
                            __rust_dealloc(v140->field_-20);
                        v140 = &v140[1].field_-18;
                    } while (v141 != 1);
                }
                if (v0)
                {
                    __rust_dealloc(v1);
                    goto LABEL_4d7bc7__0;
                }
            }
            v116 = (int128_t)(&v28)[8];
            v14 = v116;
            v117 = (int128_t)(&v26)[8];
            v13 = v117;
            v118 = (int128_t)(&v24)[8];
            v12 = v118;
            v119 = *((int128_t *)&v17);
            v120 = *((int128_t *)&v19);
            v121 = (int128_t)(&v20)[8];
            v122 = (int128_t)(&v22)[8];
            v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122;
            v11 = v122;
            v9 = v121;
            v7 = v120;
            v5 = v119;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h7d160d84c805b844(&v35, &v5, v123, v124, v113, v114);
            v94 = *((long long *)&v36);
            v95 = *((long long *)&v37);
            if (v30 == 0x8000000000000000)
                goto LABEL_4d7a58;
            v34 = *((long long *)&v39);
            v126 = *((int128_t *)&v38);
            v33 = v126;
            v30 = *((long long *)&v35);
            v31 = v94;
            v32 = v95;
            v127 = v2;
            if (v127 == v0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h13b4ee81eb55afe5(&v0);
            v128 = v1;
            v129 = v127 * 48;
            v130 = *((int128_t *)&v30);
            v73 = ...;
            v131 = *((int128_t *)&v32);
            v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v131;
            v132 = (int128_t)(&v33)[8];
            v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v132;
            *((void*)(v128 + v129 + 32)) = v132;
            *((void*)(v128 + v129 + 16)) = v131;
            *((void*)(v128 + v129)) = v130;
            v2 = (char *)v127 + 1;
            v83 = a2;
        } while (v85 > v71);
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h60f5db8e799d5a81(&v5, &v54);
        if (v5 != v4)
        {
            core::ptr::drop_in_place$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::habbc7027f71c902f(&v5);
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        }
        v138 = v1;
        v5 = v138;
        v6 = v138;
        v7 = v0;
        v8 = 0x30 * v2 + (char *)v138;
        v9 = 1;
        v10 = &g_593308;
        uu_sort::merge::merge_with_file_limit::h0cab999079376d70(a0, &v5, v83, a3, v113, v114);
        return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h93d29d192574eca7(&v54);
LABEL_4d7bc7__0:
        return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h93d29d192574eca7(&v54);
    }
}
