long long uu_sort::merge::merge_with_file_limit::h9238ca36de3d8682(unsigned long long a0[2], uint128_t a1[2], unsigned long long a2[15], unsigned long long a3)
{
    unsigned long long v0[2];  // [sp-0x360]
    unsigned long long v1;  // [sp-0x350]
    unsigned long long v2;  // [sp-0x348]
    int v3;  // [sp-0x338]
    int v4;  // [sp-0x328]
    int v5;  // [bp-0x318], Other Possible Types: char, unsigned long long
    unsigned long long v6;  // [sp-0x310]
    int v7;  // [sp-0x308]
    int v8;  // [sp-0x2f8]
    int v9;  // [sp-0x2e8]
    int v10;  // [sp-0x2d8]
    void* v12;  // [sp-0x2c0]
    unsigned long long v13;  // [sp-0x2b8]
    void* v14;  // [sp-0x2b0]
    unsigned long long v15;  // [sp-0x2a8]
    unsigned long long v16;  // [sp-0x2a0]
    int v17;  // [bp-0x298], Other Possible Types: unsigned long
    unsigned long long v18;  // [sp-0x290]
    int v19;  // [bp-0x288], Other Possible Types: unsigned long
    int v20;  // [bp-0x280]
    int v21;  // [bp-0x278]
    int v22;  // [bp-0x270]
    int v23;  // [bp-0x268]
    int v24;  // [bp-0x260]
    int v25;  // [bp-0x258]
    int v26;  // [bp-0x250]
    int v27;  // [bp-0x248]
    int v28;  // [sp-0x240]
    unsigned long long v29;  // [sp-0x230]
    char v30;  // [bp-0x228]
    char v31;  // [bp-0x220]
    char v32;  // [bp-0x218]
    char v33;  // [bp-0x210]
    char v34;  // [bp-0x200]
    char v35;  // [bp-0x1f0]
    char v36;  // [bp-0x1e0]
    char v37;  // [bp-0x1d0]
    unsigned long v38;  // [sp-0x1c8]
    unsigned long long v39;  // [sp-0x1c0]
    unsigned long v40;  // [sp-0x1b8]
    int v41;  // [sp-0x1b0]
    int v42;  // [sp-0x1a0]
    int v43;  // [sp-0x190]
    int v44;  // [sp-0x180]
    unsigned long long v45;  // [sp-0x170]
    unsigned long long v46;  // [sp-0x168]
    unsigned long long v47;  // [sp-0x160]
    int v48;  // [sp-0x158]
    unsigned long v49;  // [sp-0x148]
    unsigned long long v50;  // [sp-0x140]
    unsigned long long v51;  // [sp-0x138]
    int v52;  // [sp-0x130]
    unsigned long long v53;  // [sp-0x120]
    int v54;  // [sp-0x118]
    int v55;  // [sp-0x108]
    unsigned long long v57[2];  // r14
    unsigned long long v58;  // r13
    unsigned long long v59;  // r12
    int v60;  // xmm0
    int v61;  // ymm0
    int v62;  // ymm0
    int v63;  // xmm1
    int v64;  // ymm1
    int v65;  // ymm1
    void* v67;  // r13
    unsigned long long v68;  // rax
    int v70;  // ymm2
    int v71;  // ymm3
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm1
    int v76;  // xmm2
    int v77;  // xmm3
    unsigned long long v78;  // rdx
    unsigned long long v79;  // rax
    unsigned long long v80;  // rcx
    int v81;  // xmm0
    int v82;  // xmm1
    int v83;  // xmm2
    int v84;  // xmm3
    unsigned long long v85;  // rax
    int v86;  // xmm0
    unsigned long long v87;  // rdx
    unsigned long long v88;  // rax
    unsigned long long v89;  // rcx
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // xmm1
    int v93;  // xmm2
    int v94;  // xmm3
    int v95;  // xmm0
    int v96;  // xmm0
    int v97;  // xmm0
    int v98;  // xmm1
    int v99;  // xmm2
    int v100;  // xmm3
    unsigned long long v101;  // rax
    int v102;  // xmm0
    int v103;  // xmm0
    int v104;  // xmm0
    int v105;  // xmm0
    int v106;  // xmm1
    int v107;  // xmm2
    int v108;  // xmm3
    unsigned long long v109;  // rdx
    int v110;  // xmm0
    unsigned long v112;  // rdx

    v57 = a0;
    v58 = a2[14];
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(a1) <= v58)
    {
        *((uint128_t *)&v55) = a1[1];
        *((uint128_t *)&v54) = a1[0];
        uu_sort::merge::merge_without_limit::h8c704bfae6c82ba5(a0, &v54, a2);
        return v57;
    }
    v59 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(a1);
    v0[0] = a0;
    v60 = a1[0];
    v62 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
    v63 = a1[1];
    v65 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
    v4 = v63;
    v3 = v60;
    itertools::Itertools::chunks::h6f22875c8c7cd227(&v54, &v3, v58);
    v12 = 0;
    v13 = 8;
    v14 = 0;
    if (v59)
    {
        v2 = v58;
        *((int *)&v1) = (a2[6] == 0x8000000000000000 ? 0 : a2[7]);
        v15 = a2[8];
        v16 = 9223372036854775810;
        v67 = v59;
        v68 = v2;
        do
        {
            v67 -= v68;
            if (v67 < v68)
                v67 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&v3, &v54);
            if ((long long)v3 == v16)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v72 = v9;
            v27 = v72;
            v73 = v8;
            v25 = v73;
            v74 = v3;
            v75 = v4;
            v76 = *((int128_t *)&v5);
            v77 = v7;
            v23 = v77;
            v21 = v76;
            v19 = v75;
            v17 = v74;
            uu_sort::merge::merge_without_limit::hb625e29ae468ce09(&v30, &v17, a2);
            v78 = *((long long *)&v30);
            v79 = *((long long *)&v31);
            v80 = *((long long *)&v32);
            if (v38 == 3)
            {
                v57 = v0;
                v57[1] = v79;
                v57[1] = v80;
                v57[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v54);
                return v57;
            }
            v45 = *((long long *)&v37);
            v81 = *((int128_t *)&v33);
            v82 = *((int128_t *)&v34);
            v83 = *((int128_t *)&v35);
            v84 = *((int128_t *)&v36);
            v44 = v84;
            v43 = v83;
            v42 = v82;
            v41 = v81;
            v38 = v78;
            v39 = v79;
            v40 = v80;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v30, a3);
            v85 = *((long long *)&v31);
            if (v47 == 0x8000000000000000)
            {
                v57 = v0;
                *((int128_t *)&v57[1]) = *((int128_t *)&v32);
                goto LABEL_52ac40;
            }
            else
            {
                v86 = *((int128_t *)&v32);
                v46 = *((long long *)&v30);
                v47 = v85;
                v48 = v86;
                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&v3, &v46, v1, v15);
                v87 = (long long)v3;
                v88 = (long long)(&v3)[8];
                v89 = (long long)v4;
                if (v17 == 0x8000000000000000)
                {
                    v57 = v0;
                    v57[1] = v18;
                    v57[1] = v19;
LABEL_52ac40:
                    v57[0] = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v38);
                    ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v54);
                    return v57;
                }
            }
            v29 = (long long)(&v10)[8];
            v90 = (int128_t)(&v9)[8];
            v28 = v90;
            v91 = (int128_t)(&v4)[8];
            v92 = *((int128_t *)&(&v5)[8]);
            v93 = (int128_t)(&v7)[8];
            v94 = (int128_t)(&v8)[8];
            v26 = v94;
            v24 = v93;
            v22 = v92;
            v20 = v91;
            v17 = v87;
            v18 = v88;
            v19 = v89;
            v95 = (int128_t)(&v44)[8];
            v9 = v95;
            v96 = (int128_t)(&v43)[8];
            v8 = v96;
            v97 = *((int128_t *)&v38);
            v98 = *((int128_t *)&v40);
            v99 = (int128_t)(&v41)[8];
            v100 = (int128_t)(&v42)[8];
            v7 = v100;
            v5 = v99;
            v4 = v98;
            v3 = v97;
            v101 = uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&v3, a2, ::0x534300::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hf7ea0c81126ae9cf(&v17));
            if (v101)
            {
                v57 = v0;
                v57[1] = v101;
                v57[1] = v112;
                v57[0] = 3;
                ::0x527230::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&v17);
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v54);
                return v57;
            }
            v102 = (int128_t)(&v28)[8];
            v10 = v102;
            v103 = (int128_t)(&v26)[8];
            v9 = v103;
            v104 = (int128_t)(&v24)[8];
            v8 = v104;
            v105 = *((int128_t *)&v17);
            v106 = *((int128_t *)&v19);
            v65 = ((((v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
            v107 = (int128_t)(&v20)[8];
            v70 = ((((v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
            v108 = (int128_t)(&v22)[8];
            v71 = ((((v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108;
            v7 = v108;
            v5 = v107;
            v4 = v106;
            v3 = v105;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&v30, &v3);
            v109 = *((long long *)&v30);
            v79 = *((long long *)&v31);
            v80 = *((long long *)&v32);
            if (v49 == 0x8000000000000000)
            {
                vvar_723{reg 128} = v0;
                v57[1] = v79;
                v57[1] = v80;
                v57[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v54);
                return v57;
            }
            v53 = *((long long *)&v34);
            v110 = *((int128_t *)&v33);
            v62 = ...;
            v52 = v110;
            v49 = v109;
            v50 = v79;
            v51 = v80;
            ::0x528080::alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&v12, &v49);
            v68 = v2;
            v59 = v67;
        } while (v59 > v68);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&v3, &v54);
    if ((long long)v3 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&v3);
        ::0x5288c0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&v17, &v12);
        *((int128_t *)&v4) = *((int128_t *)&v19);
        *((int128_t *)&v3) = *((int128_t *)&v17);
        v5 = alloc::boxed::Box$LT$T$GT$::new::h42824d1ebc8aa3aa();
        v6 = &g_6002f8;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(v0, &v3, a2, a3);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v54);
        return v57;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&v3);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
