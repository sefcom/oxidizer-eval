long long uu_sort::merge::merge_with_file_limit::h9238ca36de3d8682(unsigned long long a0[2], uint128_t a1[2], unsigned long long a2[15], unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x350]
    unsigned long long v1;  // [sp-0x348]
    int v2;  // [sp-0x338]
    int v3;  // [sp-0x328]
    int v4;  // [bp-0x318], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [sp-0x310]
    int v6;  // [sp-0x308]
    int v7;  // [sp-0x2f8]
    int v8;  // [sp-0x2e8]
    int v9;  // [sp-0x2d8]
    char v10;  // [bp-0x2d0]
    void* v11;  // [sp-0x2c0]
    unsigned long long v12;  // [sp-0x2b8]
    void* v13;  // [sp-0x2b0]
    unsigned long long v14;  // [sp-0x2a8]
    unsigned long long v15;  // [sp-0x2a0]
    int v16;  // [bp-0x298], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [sp-0x290]
    int v18;  // [bp-0x288], Other Possible Types: unsigned long, unsigned long long
    int v19;  // [bp-0x280]
    int v20;  // [bp-0x278]
    int v21;  // [bp-0x270]
    int v22;  // [bp-0x268]
    int v23;  // [bp-0x260]
    int v24;  // [bp-0x258]
    int v25;  // [bp-0x250]
    int v26;  // [bp-0x248]
    int v27;  // [sp-0x240]
    unsigned long long v28;  // [sp-0x230]
    char v29;  // [bp-0x228]
    char v30;  // [bp-0x220]
    char v31;  // [bp-0x218]
    char v32;  // [bp-0x210]
    char v33;  // [bp-0x200]
    char v34;  // [bp-0x1f0]
    char v35;  // [bp-0x1e0]
    char v36;  // [bp-0x1d0]
    unsigned long v37;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v38;  // [sp-0x1c0]
    unsigned long v39;  // [sp-0x1b8], Other Possible Types: unsigned long long
    int v40;  // [sp-0x1b0]
    int v41;  // [sp-0x1a0]
    int v42;  // [sp-0x190]
    int v43;  // [sp-0x180]
    unsigned long long v44;  // [sp-0x170]
    unsigned long long v45;  // [sp-0x168]
    unsigned long long v46;  // [sp-0x160]
    int v47;  // [sp-0x158]
    unsigned long v48;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v49;  // [sp-0x140]
    unsigned long long v50;  // [sp-0x138]
    int v51;  // [sp-0x130]
    unsigned long long v52;  // [sp-0x120]
    int v53;  // [sp-0x118]
    int v54;  // [sp-0x108]
    unsigned long long v56;  // r13
    void* v57;  // r12
    int v58;  // xmm0
    int v59;  // ymm0
    int v60;  // ymm0
    int v61;  // xmm1
    int v62;  // ymm1
    int v63;  // ymm1
    unsigned long long v65;  // r12
    int v67;  // ymm2
    int v68;  // ymm3
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    int v74;  // xmm3
    unsigned long long v75;  // rdx
    unsigned long long v76;  // rax
    unsigned long long v77;  // rcx
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm3
    unsigned long long v82;  // rax
    int v83;  // xmm0
    unsigned long long v84;  // rdx
    unsigned long long v85;  // rax
    unsigned long long v86;  // rcx
    int v87;  // xmm0
    int v88;  // xmm0
    int v89;  // xmm1
    int v90;  // xmm2
    int v91;  // xmm3
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // xmm1
    int v96;  // xmm2
    int v97;  // xmm3
    unsigned long long v98;  // rax
    int v99;  // xmm0
    int v100;  // xmm0
    int v101;  // xmm0
    int v102;  // xmm0
    int v103;  // xmm1
    int v104;  // xmm2
    int v105;  // xmm3
    unsigned long long v106;  // rdx
    int v107;  // xmm0
    unsigned long long v108;  // rax
    unsigned long long v109[2];  // r14
    unsigned long v110;  // rdx

    v56 = a2[14];
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(a1) <= v56)
    {
        *((uint128_t *)&v54) = a1[1];
        *((uint128_t *)&v53) = a1[0];
        uu_sort::merge::merge_without_limit::h8c704bfae6c82ba5(a0, &v53, a2);
        return a0;
    }
    v57 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(a1);
    v58 = a1[0];
    v60 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
    v61 = a1[1];
    v63 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
    v3 = v61;
    v2 = v58;
    itertools::Itertools::chunks::h6f22875c8c7cd227(&v53, &v2, v56);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if (v57)
    {
        v1 = v56;
        *((int *)&v0) = (a2[6] == 0x8000000000000000 ? 0 : a2[7]);
        v14 = a2[8];
        v15 = 9223372036854775810;
        v1 = v1;
        do
        {
            v57 = v65 - v1;
            if (v65 < v1)
                v57 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&v2, &v53);
            if ((long long)v2 == v15)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v69 = v8;
            v26 = v69;
            v70 = v7;
            v24 = v70;
            v71 = v2;
            v72 = v3;
            v73 = *((int128_t *)&v4);
            v74 = v6;
            v22 = v74;
            v20 = v73;
            v18 = v72;
            v16 = v71;
            uu_sort::merge::merge_without_limit::hb625e29ae468ce09(&v29, &v16, a2);
            v75 = *((long long *)&v29);
            v76 = *((long long *)&v30);
            v77 = *((long long *)&v31);
            if (v37 == 3)
            {
                v109 = a0;
                v109[1] = v76;
                v109[1] = v77;
                v109[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v53);
                return a0;
            }
            v44 = *((long long *)&v36);
            v78 = *((int128_t *)&v32);
            v79 = *((int128_t *)&v33);
            v80 = *((int128_t *)&v34);
            v81 = *((int128_t *)&v35);
            v43 = v81;
            v42 = v80;
            v41 = v79;
            v40 = v78;
            v37 = v75;
            v38 = v76;
            v39 = v77;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v29, a3);
            v82 = *((long long *)&v30);
            if (v46 == 0x8000000000000000)
            {
                v109 = a0;
                *((int128_t *)&v109[1]) = *((int128_t *)&v31);
                goto LABEL_52ac40;
            }
            else
            {
                v83 = *((int128_t *)&v31);
                v45 = *((long long *)&v29);
                v46 = v82;
                v47 = v83;
                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&v2, &v45, v0, v14);
                v84 = (long long)v2;
                v85 = (long long)(&v2)[8];
                v86 = (long long)v3;
                if (v16 == 0x8000000000000000)
                {
                    v109 = a0;
                    v109[1] = v17;
                    v109[1] = v18;
LABEL_52ac40:
                    v109[0] = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v37);
                    ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v53);
                    return a0;
                }
            }
            v28 = *((long long *)&v10);
            v87 = (int128_t)v8;
            v27 = v87;
            v88 = (int128_t)(&v3)[8];
            v89 = *((int128_t *)&(&v4)[8]);
            v90 = (int128_t)(&v6)[8];
            v91 = (int128_t)(&v7)[8];
            v25 = v91;
            v23 = v90;
            v21 = v89;
            v19 = v88;
            v16 = v84;
            v17 = v85;
            v18 = v86;
            v92 = (int128_t)(&v43)[8];
            v8 = v92;
            v93 = (int128_t)(&v42)[8];
            v7 = v93;
            v94 = *((int128_t *)&v37);
            v95 = *((int128_t *)&v39);
            v96 = (int128_t)(&v40)[8];
            v97 = (int128_t)(&v41)[8];
            v6 = v97;
            v4 = v96;
            v3 = v95;
            v2 = v94;
            v98 = uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&v2, a2, ::0x534300::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hf7ea0c81126ae9cf(&v16));
            if (v98)
            {
                v109 = a0;
                v109[1] = v98;
                v109[1] = v110;
                v109[0] = 3;
                ::0x527230::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&v16);
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v53);
                return a0;
            }
            v99 = (int128_t)(&v27)[8];
            v9 = v99;
            v100 = (int128_t)(&v25)[8];
            v8 = v100;
            v101 = (int128_t)(&v23)[8];
            v7 = v101;
            v102 = *((int128_t *)&v16);
            v103 = *((int128_t *)&v18);
            v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
            v104 = (int128_t)(&v19)[8];
            v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
            v105 = (int128_t)(&v21)[8];
            v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105;
            v6 = v105;
            v4 = v104;
            v3 = v103;
            v2 = v102;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&v29, &v2);
            v106 = *((long long *)&v29);
            v76 = *((long long *)&v30);
            v77 = *((long long *)&v31);
            if (v48 == 0x8000000000000000)
            {
                vvar_730{reg 128} = a0;
                v109[1] = v76;
                v109[1] = v77;
                v109[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v53);
                return a0;
            }
            v52 = *((long long *)&v33);
            v107 = *((int128_t *)&v32);
            v60 = ...;
            v51 = v107;
            v48 = v106;
            v49 = v76;
            v50 = v77;
            ::0x528080::alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&v11, &v48);
            v108 = v1;
        } while (v57 > v108);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&v2, &v53);
    if ((long long)v2 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&v2);
        ::0x5288c0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&v16, &v11);
        *((int128_t *)&v3) = *((int128_t *)&v18);
        *((int128_t *)&v2) = *((int128_t *)&v16);
        v4 = alloc::boxed::Box$LT$T$GT$::new::h42824d1ebc8aa3aa();
        v5 = &g_6002f8;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(a0, &v2, a2, a3);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&v53);
        return a0;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&v2);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
