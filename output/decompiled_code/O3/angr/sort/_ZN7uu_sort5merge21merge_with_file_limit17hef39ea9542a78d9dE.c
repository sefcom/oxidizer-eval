long long uu_sort::merge::merge_with_file_limit::hef39ea9542a78d9d(unsigned long long a0[2], uint128_t a1[2], unsigned long long a2[15], unsigned long long a3)
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
    unsigned long long v57;  // rcx
    void* v58;  // r12
    int v59;  // xmm0
    int v60;  // ymm0
    int v61;  // ymm0
    int v62;  // xmm1
    int v63;  // ymm1
    int v64;  // ymm1
    unsigned long long v66;  // r12
    int v68;  // ymm2
    int v69;  // ymm3
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm1
    int v74;  // xmm2
    int v75;  // xmm3
    unsigned long long v76;  // rcx
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rcx
    int v80;  // xmm0
    int v81;  // xmm1
    int v82;  // xmm2
    int v83;  // xmm3
    unsigned long long v84;  // rax
    int v85;  // xmm0
    unsigned long long v86;  // rdx
    unsigned long long v87;  // rax
    unsigned long long v88;  // rcx
    int v89;  // xmm0
    int v90;  // xmm0
    int v91;  // xmm1
    int v92;  // xmm2
    int v93;  // xmm3
    int v94;  // xmm0
    int v95;  // xmm0
    int v96;  // xmm0
    int v97;  // xmm1
    int v98;  // xmm2
    int v99;  // xmm3
    unsigned long long v100;  // rax
    int v101;  // xmm0
    int v102;  // xmm0
    int v103;  // xmm0
    int v104;  // xmm0
    int v105;  // xmm1
    int v106;  // xmm2
    int v107;  // xmm3
    unsigned long long v108;  // rdx
    int v109;  // xmm0
    unsigned long long v110;  // rax
    unsigned long long v111[2];  // r14
    unsigned long v112;  // rdx
    unsigned long long v113;  // rsi

    v56 = a2[14];
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hfcda204323a4f986(a1) <= v56)
    {
        *((uint128_t *)&v54) = a1[1];
        *((uint128_t *)&v53) = a1[0];
        uu_sort::merge::merge_without_limit::hb2be7cac609144fb(a0, &v53, a2, v57);
        return a0;
    }
    v58 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hfcda204323a4f986(a1);
    v59 = a1[0];
    v61 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
    v62 = a1[1];
    v64 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
    v3 = v62;
    v2 = v59;
    itertools::Itertools::chunks::hc6d4e3f793968532(&v53, &v2, v56);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if (v58)
    {
        v1 = v56;
        *((int *)&v0) = (a2[6] == 0x8000000000000000 ? 0 : a2[7]);
        v14 = a2[8];
        v15 = 9223372036854775810;
        v1 = v1;
        do
        {
            v58 = v66 - v1;
            if (v66 < v1)
                v58 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb1c6ce42287f9495(&v2, &v53);
            if ((long long)v2 == v15)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v70 = v8;
            v26 = v70;
            v71 = v7;
            v24 = v71;
            v72 = v2;
            v73 = v3;
            v74 = (int128_t)v4;
            v75 = v6;
            v22 = v75;
            v20 = v74;
            v18 = v73;
            v16 = v72;
            uu_sort::merge::merge_without_limit::hb92e2dc0321f2525(&v29, &v16, a2, v76);
            v77 = *((long long *)&v29);
            v78 = *((long long *)&v30);
            v79 = *((long long *)&v31);
            if (v37 == 3)
            {
                v111 = a0;
                v111[1] = v78;
                v111[1] = v79;
                v111[0] = 3;
                ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::ha5506eddb045e4e7(&v53);
                return a0;
            }
            v44 = *((long long *)&v36);
            v80 = *((int128_t *)&v32);
            v81 = *((int128_t *)&v33);
            v82 = *((int128_t *)&v34);
            v83 = *((int128_t *)&v35);
            v43 = v83;
            v42 = v82;
            v41 = v81;
            v40 = v80;
            v37 = v77;
            v38 = v78;
            v39 = v79;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h68c2347c8b817f75(&v29, a3, v37);
            v84 = *((long long *)&v30);
            if (v46 == 0x8000000000000000)
            {
                v111 = a0;
                *((int128_t *)&v111[1]) = *((int128_t *)&v31);
                goto LABEL_52b440;
            }
            else
            {
                v85 = *((int128_t *)&v31);
                v45 = *((long long *)&v29);
                v46 = v84;
                v47 = v85;
                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h4d1422a268b55000(&v2, &v45, v0, v14);
                v86 = (long long)v2;
                v87 = (long long)(&v2)[8];
                v88 = (long long)v3;
                if (v16 == 0x8000000000000000)
                {
                    v111 = a0;
                    v111[1] = v17;
                    v111[1] = v18;
LABEL_52b440:
                    v111[0] = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::h8fdc30bab70f8c96(&v37, v113, v16);
                    ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::ha5506eddb045e4e7(&v53);
                    return a0;
                }
            }
            v28 = (long long)(&v9)[8];
            v89 = (int128_t)(&v8)[8];
            v27 = v89;
            v90 = (int128_t)(&v3)[8];
            v91 = *((int128_t *)&(&v4)[8]);
            v92 = (int128_t)(&v6)[8];
            v93 = (int128_t)(&v7)[8];
            v25 = v93;
            v23 = v92;
            v21 = v91;
            v19 = v90;
            v16 = v86;
            v17 = v87;
            v18 = v88;
            v94 = (int128_t)(&v43)[8];
            v8 = v94;
            v95 = (int128_t)(&v42)[8];
            v7 = v95;
            v96 = *((int128_t *)&v37);
            v97 = *((int128_t *)&v39);
            v98 = (int128_t)(&v40)[8];
            v99 = (int128_t)(&v41)[8];
            v6 = v99;
            v4 = v98;
            v3 = v97;
            v2 = v96;
            ::0x533370::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::h06d18dc07bba8a65(&v16);
            v100 = uu_sort::merge::FileMerger::write_all_to::hf158219bdc55613c(&v2, a2);
            if (v100)
            {
                v111 = a0;
                v111[1] = v100;
                v111[1] = v112;
                v111[0] = 3;
                ::0x5262a0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::h86ea19ec98b08778(&v16);
                ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::ha5506eddb045e4e7(&v53);
                return a0;
            }
            v101 = (int128_t)(&v27)[8];
            v9 = v101;
            v102 = (int128_t)(&v25)[8];
            v8 = v102;
            v103 = (int128_t)(&v23)[8];
            v7 = v103;
            v104 = *((int128_t *)&v16);
            v105 = *((int128_t *)&v18);
            v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105;
            v106 = (int128_t)(&v19)[8];
            v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
            v107 = (int128_t)(&v21)[8];
            v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
            v6 = v107;
            v4 = v106;
            v3 = v105;
            v2 = v104;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hd6cc45de520be811(&v29, &v2);
            v108 = *((long long *)&v29);
            v78 = *((long long *)&v30);
            v79 = *((long long *)&v31);
            if (v48 == 0x8000000000000000)
            {
                vvar_730{reg 128} = a0;
                v111[1] = v78;
                v111[1] = v79;
                v111[0] = 3;
                ::0x526850::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::hec199b6afd8309ea(&v11);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::ha5506eddb045e4e7(&v53);
                return a0;
            }
            v52 = *((long long *)&v33);
            v109 = *((int128_t *)&v32);
            v61 = ...;
            v51 = v109;
            v48 = v108;
            v49 = v78;
            v50 = v79;
            ::0x527080::alloc::vec::Vec$LT$T$C$A$GT$::push::h0e493563ce1e9ab0(&v11, &v48, v48);
            v110 = v1;
        } while (v58 > v110);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb1c6ce42287f9495(&v2, &v53);
    if ((long long)v2 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9478f8fe0035c6e0(&v2);
        ::0x527900::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0d150d7ede25d01c(&v16, &v11);
        *((int128_t *)&v3) = *((int128_t *)&v18);
        *((int128_t *)&v2) = *((int128_t *)&v16);
        v4 = alloc::boxed::Box$LT$T$GT$::new::h31da12cf5882e724();
        v5 = &g_5ff870;
        uu_sort::merge::merge_with_file_limit::hdc1a68bc2fdffcbc(a0, &v2, a2, a3);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::ha5506eddb045e4e7(&v53);
        return a0;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9478f8fe0035c6e0(&v2);
    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
}
