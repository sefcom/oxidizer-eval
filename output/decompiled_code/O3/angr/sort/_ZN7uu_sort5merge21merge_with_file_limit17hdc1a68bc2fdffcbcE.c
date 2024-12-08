long long uu_sort::merge::merge_with_file_limit::hdc1a68bc2fdffcbc(unsigned long long a0[2], uint128_t a1[3], unsigned long long a2[15], unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x360]
    unsigned long long v1;  // [sp-0x358]
    int v2;  // [sp-0x348]
    int v3;  // [sp-0x338]
    int v4;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x320]
    int v6;  // [sp-0x318]
    int v7;  // [sp-0x308]
    int v8;  // [sp-0x2f8]
    int v9;  // [sp-0x2e8]
    void* v11;  // [sp-0x2d0]
    unsigned long long v12;  // [sp-0x2c8]
    void* v13;  // [sp-0x2c0]
    unsigned long long v14;  // [sp-0x2b8]
    unsigned long long v15;  // [sp-0x2b0]
    int v16;  // [bp-0x2a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [sp-0x2a0]
    int v18;  // [bp-0x298], Other Possible Types: unsigned long, unsigned long long
    int v19;  // [bp-0x290]
    int v20;  // [bp-0x288]
    int v21;  // [bp-0x280]
    int v22;  // [bp-0x278]
    int v23;  // [bp-0x270]
    int v24;  // [bp-0x268]
    int v25;  // [bp-0x260]
    int v26;  // [bp-0x258]
    int v27;  // [sp-0x250]
    unsigned long long v28;  // [sp-0x240]
    char v29;  // [bp-0x238]
    char v30;  // [bp-0x230]
    char v31;  // [bp-0x228]
    char v32;  // [bp-0x220]
    char v33;  // [bp-0x210]
    char v34;  // [bp-0x200]
    char v35;  // [bp-0x1f0]
    char v36;  // [bp-0x1e0]
    unsigned long v37;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v38;  // [sp-0x1d0]
    unsigned long v39;  // [sp-0x1c8], Other Possible Types: unsigned long long
    int v40;  // [sp-0x1c0]
    int v41;  // [sp-0x1b0]
    int v42;  // [sp-0x1a0]
    int v43;  // [sp-0x190]
    unsigned long long v44;  // [sp-0x180]
    unsigned long long v45;  // [sp-0x178]
    unsigned long long v46;  // [sp-0x170]
    int v47;  // [sp-0x168]
    unsigned long long v48;  // [sp-0x158]
    unsigned long long v49;  // [sp-0x150]
    unsigned long long v50;  // [sp-0x148]
    int v51;  // [sp-0x140]
    unsigned long long v52;  // [sp-0x130]
    int v53;  // [sp-0x128]
    int v54;  // [sp-0x118]
    int v55;  // [sp-0x108]
    unsigned long long v57;  // r13
    unsigned long long v58;  // rcx
    unsigned long long v59;  // rax
    void* v60;  // r12
    int v61;  // xmm0
    int v62;  // ymm0
    int v63;  // ymm0
    int v64;  // xmm1
    int v65;  // ymm1
    int v66;  // ymm1
    int v67;  // xmm2
    int v68;  // ymm2
    int v69;  // ymm2
    unsigned long long v71;  // r12
    int v73;  // ymm3
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm2
    int v79;  // xmm3
    unsigned long long v80;  // rcx
    unsigned long long v81;  // rdx
    unsigned long long v82;  // rax
    unsigned long long v83;  // rcx
    int v84;  // xmm0
    int v85;  // xmm1
    int v86;  // xmm2
    int v87;  // xmm3
    unsigned long long v88;  // rax
    int v89;  // xmm0
    unsigned long long v90;  // rdx
    unsigned long long v91;  // rax
    unsigned long long v92;  // rcx
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // xmm1
    int v96;  // xmm2
    int v97;  // xmm3
    int v98;  // xmm0
    int v99;  // xmm0
    int v100;  // xmm0
    int v101;  // xmm1
    int v102;  // xmm2
    int v103;  // xmm3
    unsigned long long v104;  // rax
    int v105;  // xmm0
    int v106;  // xmm0
    int v107;  // xmm0
    int v108;  // xmm0
    int v109;  // xmm1
    int v110;  // xmm2
    int v111;  // xmm3
    unsigned long long v112;  // rdx
    int v113;  // xmm0
    unsigned long long v114;  // rax
    unsigned long long v115[2];  // rdx
    unsigned long long v116[2];  // rax
    unsigned long long v117[2];  // rdx
    unsigned long long v118[2];  // rcx
    unsigned long v119;  // rdx
    unsigned long long v120;  // rsi

    v57 = a2[14];
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h3c01d08773fb40f6(a1) <= v57)
    {
        *((uint128_t *)&v55) = a1[2];
        *((uint128_t *)&v54) = a1[1];
        *((uint128_t *)&v53) = a1[0];
        v59 = uu_sort::merge::merge_without_limit::h47cdd2e8dfe16873(a0, &v53, a2, v58);
        return v59;
    }
    v60 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h3c01d08773fb40f6(a1);
    v61 = a1[0];
    v63 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
    v64 = a1[1];
    v66 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
    v67 = a1[2];
    v69 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
    v4 = v67;
    v3 = v64;
    v2 = v61;
    itertools::Itertools::chunks::h2b02a17812b99651(&v53, &v2, v57);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if (v60)
    {
        v1 = v57;
        *((int *)&v0) = (a2[6] == 0x8000000000000000 ? 0 : a2[7]);
        v14 = a2[8];
        v15 = 9223372036854775810;
        v1 = v1;
        do
        {
            v60 = v71 - v1;
            if (v71 < v1)
                v60 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1f594d890aba611f(&v2, &v53);
            if ((long long)v2 == v15)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v74 = v8;
            v26 = v74;
            v75 = v7;
            v24 = v75;
            v76 = v2;
            v77 = v3;
            v78 = (int128_t)v4;
            v79 = v6;
            v22 = v79;
            v20 = v78;
            v18 = v77;
            v16 = v76;
            uu_sort::merge::merge_without_limit::h231ef4b94fa4c24d(&v29, &v16, a2, v80);
            v81 = *((long long *)&v29);
            v82 = *((long long *)&v30);
            v83 = *((long long *)&v31);
            if (v37 == 3)
            {
                v115 = a0;
                v115[1] = v82;
                v115[1] = v83;
                v115[0] = 3;
                ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                vvar_726{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h503fc2f083cb3985(&v53);
                return v59;
            }
            v44 = *((long long *)&v36);
            v84 = *((int128_t *)&v32);
            v85 = *((int128_t *)&v33);
            v86 = *((int128_t *)&v34);
            v87 = *((int128_t *)&v35);
            v43 = v87;
            v42 = v86;
            v41 = v85;
            v40 = v84;
            v37 = v81;
            v38 = v82;
            v39 = v83;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h68c2347c8b817f75(&v29, a3, v37);
            v88 = *((long long *)&v30);
            if (v46 == 0x8000000000000000)
            {
                v116 = a0;
                *((int128_t *)&v116[1]) = *((int128_t *)&v31);
                v116[0] = 3;
                goto LABEL_52aded;
            }
            else
            {
                v89 = *((int128_t *)&v31);
                v45 = *((long long *)&v29);
                v46 = v88;
                v47 = v89;
                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h4d1422a268b55000(&v2, &v45, v0, v14);
                v90 = (long long)v2;
                v91 = (long long)(&v2)[8];
                v92 = (long long)v3;
                if (v16 == 0x8000000000000000)
                {
                    v117 = a0;
                    v117[1] = v17;
                    v117[1] = v18;
                    v117[0] = 3;
LABEL_52aded:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::h8fdc30bab70f8c96(&v37, v120, v117);
                    ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                    vvar_721{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h503fc2f083cb3985(&v53);
                    return v59;
                }
            }
            v28 = (long long)(&v9)[8];
            v93 = (int128_t)(&v8)[8];
            v27 = v93;
            v94 = (int128_t)(&v3)[8];
            v95 = (int128_t)(&v4)[8];
            v96 = (int128_t)(&v6)[8];
            v97 = (int128_t)(&v7)[8];
            v25 = v97;
            v23 = v96;
            v21 = v95;
            v19 = v94;
            v16 = v90;
            v17 = v91;
            v18 = v92;
            v98 = (int128_t)(&v43)[8];
            v8 = v98;
            v99 = (int128_t)(&v42)[8];
            v7 = v99;
            v100 = *((int128_t *)&v37);
            v101 = *((int128_t *)&v39);
            v102 = (int128_t)(&v40)[8];
            v103 = (int128_t)(&v41)[8];
            v6 = v103;
            v4 = v102;
            v3 = v101;
            v2 = v100;
            ::0x533370::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::h06d18dc07bba8a65(&v16);
            v104 = uu_sort::merge::FileMerger::write_all_to::hf158219bdc55613c(&v2, a2);
            if (v104)
            {
                v118 = a0;
                v118[1] = v104;
                v118[1] = v119;
                v118[0] = 3;
                ::0x5262a0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::h86ea19ec98b08778(&v16);
                ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                vvar_716{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h503fc2f083cb3985(&v53);
                return v59;
            }
            v105 = (int128_t)(&v27)[8];
            v9 = v105;
            v106 = (int128_t)(&v25)[8];
            v8 = v106;
            v107 = (int128_t)(&v23)[8];
            v7 = v107;
            v108 = *((int128_t *)&v16);
            v109 = *((int128_t *)&v18);
            v66 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
            v110 = (int128_t)(&v19)[8];
            v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
            v111 = (int128_t)(&v21)[8];
            v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
            v6 = v111;
            v4 = v110;
            v3 = v109;
            v2 = v108;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hd6cc45de520be811(&v29, &v2);
            v112 = *((long long *)&v29);
            v82 = *((long long *)&v30);
            v83 = *((long long *)&v31);
            if (v48 == 0x8000000000000000)
            {
                vvar_732{reg 32} = a0;
                v115[1] = v82;
                v115[1] = v83;
                v115[0] = 3;
                ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                vvar_735{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h503fc2f083cb3985(&v53);
                return v59;
            }
            v52 = *((long long *)&v33);
            v113 = *((int128_t *)&v32);
            v63 = ...;
            v51 = v113;
            v48 = v112;
            v49 = v82;
            v50 = v83;
            ::0x527080::alloc::vec::Vec$LT$T$C$A$GT$::push::h0e493563ce1e9ab0(&v11, &v48, v48);
            v114 = v1;
        } while (v60 > v114);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1f594d890aba611f(&v2, &v53);
    if ((long long)v2 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h4eadc1e8d6ae1cd2(&v2);
        ::0x527900::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0d150d7ede25d01c(&v16, &v11);
        *((int128_t *)&v3) = *((int128_t *)&v18);
        *((int128_t *)&v2) = *((int128_t *)&v16);
        v4 = alloc::boxed::Box$LT$T$GT$::new::h3ecf72a1ea9f8994();
        v5 = &g_5ff848;
        uu_sort::merge::merge_with_file_limit::hdc1a68bc2fdffcbc(a0, &v2, a2, a3);
        vvar_712{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h503fc2f083cb3985(&v53);
        return v59;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h4eadc1e8d6ae1cd2(&v2);
    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
}
