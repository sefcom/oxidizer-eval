long long uu_sort::merge::merge_with_file_limit::hb42914714851d269(unsigned long long a0[2], uint128_t a1[3], unsigned long long a2[15], unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x360]
    unsigned long long v1;  // [sp-0x358]
    int v2;  // [sp-0x348]
    int v3;  // [sp-0x338]
    int v4;  // [bp-0x328]
    int v5;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x320]
    int v7;  // [sp-0x318]
    int v8;  // [sp-0x308]
    int v9;  // [sp-0x2f8]
    int v10;  // [sp-0x2e8]
    void* v12;  // [sp-0x2d0]
    unsigned long long v13;  // [sp-0x2c8]
    void* v14;  // [sp-0x2c0]
    unsigned long long v15;  // [sp-0x2b8]
    unsigned long long v16;  // [sp-0x2b0]
    int v17;  // [bp-0x2a8], Other Possible Types: unsigned long
    unsigned long long v18;  // [sp-0x2a0]
    int v19;  // [bp-0x298], Other Possible Types: unsigned long
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
    char v30;  // [bp-0x238]
    char v31;  // [bp-0x230]
    char v32;  // [bp-0x228]
    char v33;  // [bp-0x220]
    char v34;  // [bp-0x210]
    char v35;  // [bp-0x200]
    char v36;  // [bp-0x1f0]
    char v37;  // [bp-0x1e0]
    unsigned long v38;  // [sp-0x1d8]
    unsigned long long v39;  // [sp-0x1d0]
    unsigned long v40;  // [sp-0x1c8]
    int v41;  // [sp-0x1c0]
    int v42;  // [sp-0x1b0]
    int v43;  // [sp-0x1a0]
    int v44;  // [sp-0x190]
    unsigned long long v45;  // [sp-0x180]
    unsigned long long v46;  // [sp-0x178]
    unsigned long long v47;  // [sp-0x170]
    int v48;  // [sp-0x168]
    unsigned long v49;  // [sp-0x158]
    unsigned long long v50;  // [sp-0x150]
    unsigned long long v51;  // [sp-0x148]
    int v52;  // [sp-0x140]
    unsigned long long v53;  // [sp-0x130]
    int v54;  // [sp-0x128]
    int v55;  // [sp-0x118]
    int v56;  // [sp-0x108]
    unsigned long long v58;  // r13
    unsigned long long v59;  // rax
    unsigned long long v60;  // r12
    int v61;  // xmm0
    int v62;  // ymm0
    int v63;  // ymm0
    int v64;  // xmm1
    int v65;  // ymm1
    int v66;  // ymm1
    int v67;  // xmm2
    int v68;  // ymm2
    int v69;  // ymm2
    void* v71;  // r13
    unsigned long long v72;  // rax
    int v74;  // ymm3
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2
    int v80;  // xmm3
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
    unsigned long long v115[2];  // rdx
    unsigned long long v116[2];  // rax
    unsigned long long v117[2];  // rdx
    unsigned long long v118[2];  // rcx
    unsigned long v119;  // rdx

    v58 = a2[14];
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(a1) <= v58)
    {
        *((uint128_t *)&v56) = a1[2];
        *((uint128_t *)&v55) = a1[1];
        *((uint128_t *)&v54) = a1[0];
        v59 = uu_sort::merge::merge_without_limit::h3f51658ed9f64253(a0, &v54, a2);
        return v59;
    }
    v60 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(a1);
    v61 = a1[0];
    v63 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
    v64 = a1[1];
    v66 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
    v67 = a1[2];
    v69 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
    v4 = v67;
    v3 = v64;
    v2 = v61;
    itertools::Itertools::chunks::h750e5a5d4e71cbe4(&v54, &v2, v58);
    v12 = 0;
    v13 = 8;
    v14 = 0;
    if (v60)
    {
        v1 = v58;
        *((int *)&v0) = (a2[6] == 0x8000000000000000 ? 0 : a2[7]);
        v15 = a2[8];
        v16 = 9223372036854775810;
        v71 = v60;
        v72 = v1;
        do
        {
            v71 -= v72;
            if (v71 < v72)
                v71 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&v2, &v54);
            if ((long long)v2 == v16)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v75 = v9;
            v27 = v75;
            v76 = v8;
            v25 = v76;
            v77 = v2;
            v78 = v3;
            v79 = (int128_t)v4;
            v80 = v7;
            v23 = v80;
            v21 = v79;
            v19 = v78;
            v17 = v77;
            uu_sort::merge::merge_without_limit::h90f0af993e6589a0(&v30, &v17, a2);
            v81 = *((long long *)&v30);
            v82 = *((long long *)&v31);
            v83 = *((long long *)&v32);
            if (v38 == 3)
            {
                v115 = a0;
                v115[1] = v82;
                v115[1] = v83;
                v115[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                vvar_719{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v54);
                return v59;
            }
            v45 = *((long long *)&v37);
            v84 = *((int128_t *)&v33);
            v85 = *((int128_t *)&v34);
            v86 = *((int128_t *)&v35);
            v87 = *((int128_t *)&v36);
            v44 = v87;
            v43 = v86;
            v42 = v85;
            v41 = v84;
            v38 = v81;
            v39 = v82;
            v40 = v83;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v30, a3);
            v88 = *((long long *)&v31);
            if (v47 == 0x8000000000000000)
            {
                v116 = a0;
                *((int128_t *)&v116[1]) = *((int128_t *)&v32);
                v116[0] = 3;
                goto LABEL_52b2cd;
            }
            else
            {
                v89 = *((int128_t *)&v32);
                v46 = *((long long *)&v30);
                v47 = v88;
                v48 = v89;
                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&v2, &v46, v0, v15);
                v90 = (long long)v2;
                v91 = (long long)(&v2)[8];
                v92 = (long long)v3;
                if (v17 == 0x8000000000000000)
                {
                    v117 = a0;
                    v117[1] = v18;
                    v117[1] = v19;
                    v117[0] = 3;
LABEL_52b2cd:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v38);
                    ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                    vvar_714{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v54);
                    return v59;
                }
            }
            v29 = (long long)(&v10)[8];
            v93 = (int128_t)v9;
            v28 = v93;
            v94 = (int128_t)(&v3)[8];
            v95 = (int128_t)(&v4)[8];
            v96 = (int128_t)(&v7)[8];
            v97 = (int128_t)(&v8)[8];
            v26 = v97;
            v24 = v96;
            v22 = v95;
            v20 = v94;
            v17 = v90;
            v18 = v91;
            v19 = v92;
            v98 = (int128_t)(&v44)[8];
            v9 = v98;
            v99 = (int128_t)(&v43)[8];
            v8 = v99;
            v100 = *((int128_t *)&v38);
            v101 = *((int128_t *)&v40);
            v102 = (int128_t)(&v41)[8];
            v103 = (int128_t)(&v42)[8];
            v7 = v103;
            v5 = v102;
            v3 = v101;
            v2 = v100;
            v104 = uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&v2, a2, ::0x534300::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hf7ea0c81126ae9cf(&v17));
            if (v104)
            {
                v118 = a0;
                v118[1] = v104;
                v118[1] = v119;
                v118[0] = 3;
                ::0x527230::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&v17);
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                vvar_709{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v54);
                return v59;
            }
            v105 = (int128_t)(&v28)[8];
            v10 = v105;
            v106 = (int128_t)(&v26)[8];
            v9 = v106;
            v107 = (int128_t)(&v24)[8];
            v8 = v107;
            v108 = *((int128_t *)&v17);
            v109 = *((int128_t *)&v19);
            v66 = ((((v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
            v110 = (int128_t)(&v20)[8];
            v69 = ((((v69 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
            v111 = (int128_t)(&v22)[8];
            v74 = ((((v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
            v7 = v111;
            v4 = v110;
            v3 = v109;
            v2 = v108;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&v30, &v2);
            v112 = *((long long *)&v30);
            v82 = *((long long *)&v31);
            v83 = *((long long *)&v32);
            if (v49 == 0x8000000000000000)
            {
                vvar_725{reg 32} = a0;
                v115[1] = v82;
                v115[1] = v83;
                v115[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                vvar_728{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v54);
                return v59;
            }
            v53 = *((long long *)&v34);
            v113 = *((int128_t *)&v33);
            v63 = ...;
            v52 = v113;
            v49 = v112;
            v50 = v82;
            v51 = v83;
            ::0x528080::alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&v12, &v49);
            v72 = v1;
            v60 = v71;
        } while (v60 > v72);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&v2, &v54);
    if ((long long)v2 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&v2);
        ::0x5288c0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&v17, &v12);
        *((int128_t *)&v3) = *((int128_t *)&v19);
        *((int128_t *)&v2) = *((int128_t *)&v17);
        v5 = alloc::boxed::Box$LT$T$GT$::new::ha32bffbf5181790f();
        v6 = &g_600320;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(a0, &v2, a2, a3);
        vvar_705{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&v54);
        return v59;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&v2);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
