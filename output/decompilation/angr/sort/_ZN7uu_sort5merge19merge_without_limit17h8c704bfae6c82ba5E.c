long long uu_sort::merge::merge_without_limit::h8c704bfae6c82ba5(struct_0 *a0, unsigned long long a1[4], unsigned long long a2)
{
    int v0;  // [sp-0x2f0], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x2e8]
    int v2;  // [sp-0x2d0]
    unsigned long v3;  // [sp-0x2c0]
    unsigned long long v4;  // [sp-0x2b8]
    void* v5;  // [sp-0x2b0]
    unsigned long v6;  // [sp-0x2a8]
    unsigned long long v7;  // [sp-0x2a0]
    void* v8;  // [sp-0x298]
    unsigned long long v9[4];  // [sp-0x290]
    unsigned long long v10;  // [sp-0x288]
    int v11;  // [sp-0x280]
    char v12;  // [bp-0x270]
    char v13;  // [bp-0x260]
    int v14;  // [bp-0x248], Other Possible Types: void*, char
    char v15;  // [sp-0x238], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x228], Other Possible Types: char
    char v17;  // [bp-0x218]
    char v18;  // [bp-0x208]
    char v19;  // [bp-0x1f8]
    char v20;  // [bp-0x1e8]
    char v21;  // [bp-0x1d8]
    int v22;  // [sp-0x1a0], Other Possible Types: unsigned long long, unsigned long
    int v23;  // [bp-0x1a0]
    int v24;  // [bp-0x1a0], Other Possible Types: char, unsigned long
    int v25;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    char v26;  // [sp-0x190], Other Possible Types: unsigned long, unsigned long long
    void* v27;  // [sp-0x190], Other Possible Types: int, unsigned long long
    int v28;  // [sp-0x188], Other Possible Types: unsigned long
    unsigned long long v29;  // [sp-0x180]
    int v30;  // [sp-0x178]
    int v31;  // [sp-0x178]
    int v32;  // [sp-0x168]
    int v33;  // [sp-0x158]
    int v34;  // [sp-0x148], Other Possible Types: unsigned long long
    void* v35;  // [sp-0x140]
    int v36;  // [sp-0x138], Other Possible Types: unsigned long long
    void* v37;  // [sp-0x130]
    unsigned long long v38;  // [sp-0x128]
    int v39;  // [sp-0xd8], Other Possible Types: void*, unsigned long
    unsigned long long v40;  // [sp-0xd0]
    int v41;  // [bp-0xc8], Other Possible Types: void*
    int v42;  // [sp-0xb8]
    int v43;  // [sp-0xa8]
    int v44;  // [sp-0x98]
    char v45;  // [bp-0x88]
    char v46;  // [bp-0x80]
    char v47;  // [bp-0x70]
    char v48;  // [bp-0x60]
    char v49;  // [bp-0x50]
    char v50;  // [bp-0x40]
    int v52;  // xmm0
    int v53;  // ymm0
    int v54;  // ymm0
    int v55;  // xmm1
    int v56;  // ymm1
    int v57;  // ymm1
    unsigned long long v58;  // rbx
    unsigned long long v59;  // r14
    int v60;  // ymm2
    int v61;  // ymm3
    unsigned long long v62;  // r12
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm3
    unsigned long long v68;  // rcx
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm2
    int v73;  // xmm3
    int v74;  // xmm1
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm3
    struct_0 *v82;  // rax
    unsigned long long v83;  // r14
    void* v84;  // rbp
    unsigned long long v85;  // r13
    int v86;  // xmm0
    int v87;  // xmm0
    int v88;  // xmm0
    int v89;  // xmm0
    int v90;  // xmm1
    int v91;  // xmm2
    int v92;  // xmm3
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // ymm0
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // rsi
    unsigned long long v99;  // rbp
    unsigned long long v100;  // rax
    int v101;  // xmm0
    struct_0 *v102;  // rcx
    int v103;  // xmm2

    v9[0] = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v24);
    v52 = *((int128_t *)&v24);
    v54 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v55 = *((int128_t *)&v26);
    v57 = v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
    v2 = v52;
    v11 = v55;
    v58 = a1[1];
    v59 = a1[3];
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hf1abf12206d60953(&v14, v58, v59);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&v24, *((long long *)&v14), 0);
    if (v22)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, v26); /* do not return */
    v3 = v25;
    v4 = v26;
    v5 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hf1abf12206d60953(&v14, v58, v59);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v24, *((long long *)&v14), 0);
    if (v22)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v6, v26); /* do not return */
    v6 = v25;
    v7 = v26;
    v8 = 0;
    core::iter::traits::iterator::Iterator::enumerate::hbb098ae072900dce(&v12, a1);
    v10 = 9223372036854775809;
    while (true)
    {
        v26 = v26;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78e7259025d50d0e(&v45, &v12);
        if (*((long long *)&v46) == v10)
            break;
        v62 = *((long long *)&v45);
        v63 = *((int128_t *)&v50);
        v44 = v63;
        v64 = *((int128_t *)&v46);
        v65 = *((int128_t *)&v47);
        v66 = *((int128_t *)&v48);
        v67 = *((int128_t *)&v49);
        v43 = v67;
        v42 = v66;
        v41 = v65;
        v39 = v64;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v24, 2, a2, v68);
        v69 = *((int128_t *)&v24);
        v0 = v69;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v6, v26, v28);
        v70 = (int128_t)(&v39)[8];
        if (v26 == 0x8000000000000000)
        {
            v82 = a0;
            *((void*)&(&v82->field_0)[1]) = v70;
            v82->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2d9b5f74f21be7ac(&v12);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v6);
            ::0x526090::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&v3);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v11);
            v96 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2);
            return v96;
        }
        v34 = (long long)(&v44)[8];
        v71 = (int128_t)(&v41)[8];
        v72 = (int128_t)(&v42)[8];
        v73 = (int128_t)(&v43)[8];
        v33 = v73;
        v32 = v72;
        v30 = v71;
        v74 = (int128_t)v0;
        v22 = v74;
        v26 = v39;
        v28 = v70;
        v35 = 0;
        v36 = 1;
        v37 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&v3, &v24);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v14, 0x2000);
        v24 = v62;
        v38 = *((long long *)&v21);
        v75 = *((int128_t *)&v20);
        v36 = v75;
        v76 = *((int128_t *)&v19);
        v34 = v76;
        v77 = *((int128_t *)&v18);
        v33 = v77;
        v78 = *((int128_t *)&v14);
        v54 = (((((((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
        v79 = *((int128_t *)&v15);
        v57 = (((v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
        v80 = *((int128_t *)&v16);
        v60 = ((v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
        v81 = *((int128_t *)&v17);
        v61 = ((v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
        v32 = v81;
        v31 = v80;
        v28 = v79;
        v24 = v78;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v14, &v2, &v24, v68);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v14, &g_6003f0);
        v26 = v26;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2d9b5f74f21be7ac(&v12);
    v83 = v5;
    if (v83)
    {
        v84 = 0;
        do
        {
            v85 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v84);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v14, 0x2000);
            v22 = v84;
            v38 = *((long long *)&v21);
            v86 = *((int128_t *)&v20);
            v36 = v86;
            v87 = *((int128_t *)&v19);
            v34 = v87;
            v88 = *((int128_t *)&v18);
            v33 = v88;
            v89 = *((int128_t *)&v14);
            v54 = (((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
            v90 = *((int128_t *)&v15);
            v57 = v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
            v91 = *((int128_t *)&v16);
            v60 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
            v92 = *((int128_t *)&v17);
            v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
            v32 = v92;
            v31 = v91;
            v28 = v90;
            v25 = v89;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v14, &v2, &v24, v68);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v14, &g_6003d8);
            v84 = v85;
        } while (v85 < v83);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v14, a2);
    v93 = v11;
    v23 = v93;
    v94 = *((int128_t *)&v3);
    v95 = (v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
    v27 = v94;
    v29 = v5;
    memcpy(&v31, &v14, 160);
    v15 = 0x8000000000000000;
    v14 = 0;
    std::thread::Builder::spawn_unchecked::hfc41e77c3832f4c7(&v45, &v14, &v24);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v12, &v45);
    v39 = 0;
    v40 = 8;
    v41 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v14, &v6);
    v16 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v45, &v14);
    v97 = *((long long *)&v46);
    if (v97 != 3)
    {
        do
        {
            v99 = *((long long *)&v45);
            v0 = v97;
            v1 = *((long long *)&(&v46)[8]);
            v100 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v98, a2);
            if (!v100)
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0);
            }
            else
            {
                v22 = 1;
                v25 = 1;
                v26 = v100;
                v101 = *((int128_t *)&v0);
                v95 = v95 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                *((double *)&v27) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v24);
                v27 = 0;
                v23 = v101;
                v29 = v99;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v39, &v24);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v45, &v14), v97 = *((long long *)&v46), v97 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v14);
    v15 = v41;
    *((int128_t *)&v14) = *((int128_t *)&v39);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v24, &v14, a2, 1);
    v102 = a0;
    v102->field_20 = *((int128_t *)&v12);
    v96 = *((long long *)&v13);
    *((unsigned long long *)&v102->field_30) = v96;
    v103 = (int128_t)v27;
    v102->field_8 = (int128_t)v23;
    *((void*)&v102->padding_18[0]) = v103;
    *((void*)&v102->field_0) = v2;
    *((unsigned long long *)((char *)&v102->field_30 + 8)) = 0;
    return v96;
}
