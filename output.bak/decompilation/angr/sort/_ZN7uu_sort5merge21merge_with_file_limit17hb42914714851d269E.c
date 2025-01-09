long long uu_sort::merge::merge_with_file_limit::hb42914714851d269(unsigned long long a0[2], uint128_t a1[3], unsigned long long a2[15], unsigned long long a3)
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
    unsigned long v48;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v49;  // [sp-0x150]
    unsigned long long v50;  // [sp-0x148]
    int v51;  // [sp-0x140]
    unsigned long long v52;  // [sp-0x130]
    int v53;  // [sp-0x128]
    int v54;  // [sp-0x118]
    int v55;  // [sp-0x108]
    unsigned long long v57;  // r13
    unsigned long long v58;  // rax
    void* v59;  // r12
    int v60;  // xmm0
    int v61;  // ymm0
    int v62;  // ymm0
    int v63;  // xmm1
    int v64;  // ymm1
    int v65;  // ymm1
    int v66;  // xmm2
    int v67;  // ymm2
    int v68;  // ymm2
    unsigned long long v70;  // r12
    int v72;  // ymm3
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    int v78;  // xmm3
    unsigned long long v79;  // rdx
    unsigned long long v80;  // rax
    unsigned long long v81;  // rcx
    int v82;  // xmm0
    int v83;  // xmm1
    int v84;  // xmm2
    int v85;  // xmm3
    unsigned long long v86;  // rax
    int v87;  // xmm0
    unsigned long long v88;  // rdx
    unsigned long long v89;  // rax
    unsigned long long v90;  // rcx
    int v91;  // xmm0
    int v92;  // xmm0
    int v93;  // xmm1
    int v94;  // xmm2
    int v95;  // xmm3
    int v96;  // xmm0
    int v97;  // xmm0
    int v98;  // xmm0
    int v99;  // xmm1
    int v100;  // xmm2
    int v101;  // xmm3
    unsigned long long v102;  // rax
    int v103;  // xmm0
    int v104;  // xmm0
    int v105;  // xmm0
    int v106;  // xmm0
    int v107;  // xmm1
    int v108;  // xmm2
    int v109;  // xmm3
    unsigned long long v110;  // rdx
    int v111;  // xmm0
    unsigned long long v112;  // rax
    unsigned long long v113[2];  // rdx
    unsigned long long v114[2];  // rax
    unsigned long long v115[2];  // rdx
    unsigned long long v116[2];  // rcx
    unsigned long v117;  // rdx

    v57 = a2[14];
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(a1) <= v57)
    {
        *((uint128_t *)&v55) = a1[2];
        *((uint128_t *)&v54) = a1[1];
        *((uint128_t *)&v53) = a1[0];
        v58 = uu_sort::merge::merge_without_limit::h3f51658ed9f64253(a0, &v53, a2);
        return v58;
    }
    v59 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(a1);
    v60 = a1[0];
    v62 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
    v63 = a1[1];
    v65 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
    v66 = a1[2];
    v68 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
    v4 = v66;
    v3 = v63;
    v2 = v60;
    itertools::Itertools::chunks::h750e5a5d4e71cbe4(&v53, &v2, v57);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if (v59)
    {
        v1 = v57;
        *((int *)&v0) = (a2[6] == 0x8000000000000000 ? 0 : a2[7]);
        v14 = a2[8];
        v15 = 9223372036854775810;
        v1 = v1;
        do
        {
            v59 = v70 - v1;
            if (v70 < v1)
                v59 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&v2, &v53);
            if ((long long)v2 == v15)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v73 = v8;
            v26 = v73;
            v74 = v7;
            v24 = v74;
            v75 = v2;
            v76 = v3;
            v77 = (int128_t)v4;
            v78 = v6;
            v22 = v78;
            v20 = v77;
            v18 = v76;
            v16 = v75;
            uu_sort::merge::merge_without_limit::h90f0af993e6589a0(&v29, &v16, a2);
            v79 = *((long long *)&v29);
            v80 = *((long long *)&v30);
            v81 = *((long long *)&v31);
            if (v37 == 3)
            {
                v113 = a0;
                v113[1] = v80;
                v113[1] = v81;
                v113[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v53);
                return v58;
            }
            v44 = *((long long *)&v36);
            v82 = *((int128_t *)&v32);
            v83 = *((int128_t *)&v33);
            v84 = *((int128_t *)&v34);
            v85 = *((int128_t *)&v35);
            v43 = v85;
            v42 = v84;
            v41 = v83;
            v40 = v82;
            v37 = v79;
            v38 = v80;
            v39 = v81;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v29, a3);
            v86 = *((long long *)&v30);
            if (v46 == 0x8000000000000000)
            {
                v114 = a0;
                *((int128_t *)&v114[1]) = *((int128_t *)&v31);
                v114[0] = 3;
                goto LABEL_52b2cd;
            }
            else
            {
                v87 = *((int128_t *)&v31);
                v45 = *((long long *)&v29);
                v46 = v86;
                v47 = v87;
                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&v2, &v45, v0, v14);
                v88 = (long long)v2;
                v89 = (long long)(&v2)[8];
                v90 = (long long)v3;
                if (v16 == 0x8000000000000000)
                {
                    v115 = a0;
                    v115[1] = v17;
                    v115[1] = v18;
                    v115[0] = 3;
LABEL_52b2cd:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v37);
                    ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v53);
                    return v58;
                }
            }
            v28 = (long long)(&v9)[8];
            v91 = (int128_t)v8;
            v27 = v91;
            v92 = (int128_t)(&v3)[8];
            v93 = (int128_t)(&v4)[8];
            v94 = (int128_t)(&v6)[8];
            v95 = (int128_t)(&v7)[8];
            v25 = v95;
            v23 = v94;
            v21 = v93;
            v19 = v92;
            v16 = v88;
            v17 = v89;
            v18 = v90;
            v96 = (int128_t)(&v43)[8];
            v8 = v96;
            v97 = (int128_t)(&v42)[8];
            v7 = v97;
            v98 = *((int128_t *)&v37);
            v99 = *((int128_t *)&v39);
            v100 = (int128_t)(&v40)[8];
            v101 = (int128_t)(&v41)[8];
            v6 = v101;
            v4 = v100;
            v3 = v99;
            v2 = v98;
            v102 = uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&v2, a2, ::0x534300::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hf7ea0c81126ae9cf(&v16));
            if (v102)
            {
                v116 = a0;
                v116[1] = v102;
                v116[1] = v117;
                v116[0] = 3;
                ::0x527230::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&v16);
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v53);
                return v58;
            }
            v103 = (int128_t)(&v27)[8];
            v9 = v103;
            v104 = (int128_t)(&v25)[8];
            v8 = v104;
            v105 = (int128_t)(&v23)[8];
            v7 = v105;
            v106 = *((int128_t *)&v16);
            v107 = *((int128_t *)&v18);
            v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
            v108 = (int128_t)(&v19)[8];
            v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108;
            v109 = (int128_t)(&v21)[8];
            v72 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
            v6 = v109;
            v4 = v108;
            v3 = v107;
            v2 = v106;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&v29, &v2);
            v110 = *((long long *)&v29);
            v80 = *((long long *)&v30);
            v81 = *((long long *)&v31);
            if (v48 == 0x8000000000000000)
            {
                vvar_732{reg 32} = a0;
                v113[1] = v80;
                v113[1] = v81;
                v113[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v53);
                return v58;
            }
            v52 = *((long long *)&v33);
            v111 = *((int128_t *)&v32);
            v62 = ...;
            v51 = v111;
            v48 = v110;
            v49 = v80;
            v50 = v81;
            ::0x528080::alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&v11, &v48);
            v112 = v1;
        } while (v59 > v112);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&v2, &v53);
    if ((long long)v2 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&v2);
        ::0x5288c0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&v16, &v11);
        *((int128_t *)&v3) = *((int128_t *)&v18);
        *((int128_t *)&v2) = *((int128_t *)&v16);
        v4 = alloc::boxed::Box$LT$T$GT$::new::ha32bffbf5181790f();
        v5 = &g_600320;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(a0, &v2, a2, a3);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v53);
        return v58;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&v2);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
