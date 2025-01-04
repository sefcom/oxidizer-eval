long long uu_sort::merge::merge_without_limit::h9b5b2c5845db30df(struct_0 *a0, unsigned long long a1[4], unsigned long long a2, unsigned long a3)
{
    int v0;  // [bp-0x290], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x288]
    int v2;  // [sp-0x270]
    unsigned long v3;  // [sp-0x260], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x258]
    void* v5;  // [sp-0x250]
    int v6;  // [sp-0x248]
    int v7;  // [sp-0x238]
    void* v8;  // [bp-0x220], Other Possible Types: char
    unsigned long long v9;  // [sp-0x218]
    void* v10;  // [sp-0x210]
    char v11;  // [bp-0x1f8]
    char v12;  // [bp-0x1f0]
    char v13;  // [bp-0x1e0]
    unsigned long v14;  // [sp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x1c8]
    void* v16;  // [sp-0x1c0]
    unsigned long long v17[4];  // [sp-0x1b8]
    int v18;  // [sp-0x1b0]
    int v19;  // [bp-0x1a0], Other Possible Types: char, unsigned long, unsigned long long
    int v20;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    int v21;  // [bp-0x190], Other Possible Types: char, unsigned long, unsigned long long
    void* v22;  // [sp-0x188], Other Possible Types: int, unsigned long long
    unsigned long long v23;  // [sp-0x180]
    int v24;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v25;  // [sp-0x170]
    int v26;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v27;  // [sp-0x160]
    int v28;  // [sp-0x158]
    int v29;  // [sp-0x148]
    int v30;  // [sp-0x138]
    unsigned long long v31;  // [sp-0x128]
    int v32;  // [bp-0xd8], Other Possible Types: void*, char
    char v33;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v34;  // [bp-0xb8], Other Possible Types: char
    char v35;  // [bp-0xa8]
    char v36;  // [bp-0x98]
    char v37;  // [bp-0x88]
    char v38;  // [bp-0x78]
    char v39;  // [bp-0x68]
    unsigned long long v41[4];  // r15
    int v42;  // xmm0
    int v43;  // ymm0
    int v44;  // ymm0
    int v45;  // xmm1
    int v46;  // ymm1
    int v47;  // ymm1
    unsigned long long v48;  // rbx
    unsigned long long v49;  // r14
    int v50;  // ymm2
    int v51;  // ymm3
    unsigned long long v52;  // r12
    int v53;  // xmm0
    int v54;  // xmm1
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rcx
    int v57;  // xmm0
    unsigned long long v58;  // rax
    int v59;  // xmm0
    unsigned long long v60;  // rcx
    int v61;  // xmm1
    int v62;  // xmm0
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    int v68;  // xmm3
    struct_0 *v69;  // rax
    unsigned long long v70;  // rsi
    unsigned long long v71;  // r14
    void* v72;  // rbp
    unsigned long long v73;  // rbp
    unsigned long long v74;  // r13
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm3
    int v82;  // xmm0
    int v83;  // xmm0
    int v84;  // ymm0
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    unsigned long long v87;  // rsi
    unsigned long long v88;  // rbp
    unsigned long long v89;  // rax
    unsigned long long v90;  // rsi
    int v91;  // xmm0
    unsigned long long v92;  // rsi
    struct_0 *v93;  // rcx
    int v94;  // xmm2

    v41 = a1;
    v17[0] = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v19, a1, a2);
    v42 = *((int128_t *)&v19);
    v44 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
    v45 = *((int128_t *)&v21);
    v47 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v2 = v42;
    v18 = v45;
    v48 = v41[1];
    v49 = v41[3];
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::ha80458126dc4c588(&v32, v48, v49);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h74116286720960df(&v19, *((long long *)&v32), 0);
    if (v19)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v3 = v20;
    v4 = v21;
    v5 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::ha80458126dc4c588(&v32, v48, v49);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v19, *((long long *)&v32), 0);
    if (v19)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v14 = v20;
    v15 = v21;
    v16 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h3afadf4656df7c4c(&v8, v41);
    while (true)
    {
        v21 = v21;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf563b039e4ebe304(&v11, &v8);
        if (*((long long *)&v12) == 9223372036854775809)
            break;
        v52 = *((long long *)&v11);
        v53 = *((int128_t *)&v12);
        v54 = *((int128_t *)&v13);
        v7 = v54;
        v6 = v53;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v19, 2, v55, v56);
        v57 = *((int128_t *)&v19);
        v0 = v57;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v14, v21, v22);
        v58 = (long long)v6;
        v59 = (int128_t)(&v6)[8];
        if (v21 == 0x8000000000000000)
        {
            v69 = a0;
            *((void*)&(&v69->field_0)[1]) = v59;
            v69->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0, v70, v55);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h1e6f2c020833c916(&v8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v14, v70, v55);
            ::0x526030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainTmpMergeInput$GT$$GT$$GT$$GT$::h12eb38ced1d482d7(&v3, v70, v55);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v18, v70, v55);
            v85 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2, v70, v55);
            return v85;
        }
        v60 = (long long)(&v7)[8];
        v61 = (int128_t)v0;
        v19 = v61;
        v21 = v58;
        v22 = v59;
        v24 = v60;
        v25 = 0;
        v26 = 1;
        v27 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h63a3347568e06c06(&v3, &v19, v55);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v32, 0x2000);
        v19 = v52;
        v31 = *((long long *)&v39);
        v62 = *((int128_t *)&v38);
        v30 = v62;
        v63 = *((int128_t *)&v37);
        v29 = v63;
        v64 = *((int128_t *)&v36);
        v28 = v64;
        v65 = *((int128_t *)&v32);
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v66 = *((int128_t *)&v33);
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
        v67 = *((int128_t *)&v34);
        v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v68 = *((int128_t *)&v35);
        v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
        v26 = v68;
        v24 = v67;
        v22 = v66;
        v20 = v65;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v32, &v2, &v19, v56);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v32, &g_6003f0);
        v21 = v21;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h1e6f2c020833c916(&v8);
    v71 = v5;
    if (v71)
    {
        v72 = 0;
        do
        {
            v73 = v72;
            v74 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v73);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v32, 0x2000);
            v19 = v73;
            v31 = *((long long *)&v39);
            v75 = *((int128_t *)&v38);
            v30 = v75;
            v76 = *((int128_t *)&v37);
            v29 = v76;
            v77 = *((int128_t *)&v36);
            v28 = v77;
            v78 = *((int128_t *)&v32);
            v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v79 = *((int128_t *)&v33);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            v80 = *((int128_t *)&v34);
            v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v81 = *((int128_t *)&v35);
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v26 = v81;
            v24 = v80;
            v22 = v79;
            v20 = v78;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v32, &v2, &v19, v56);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v32, &g_6003d8);
            v72 = v74;
        } while (v74 < v71);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v32, a2);
    v82 = v18;
    v19 = v82;
    v83 = *((int128_t *)&v3);
    v84 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
    v21 = v83;
    v23 = v5;
    memcpy(&v24, &v32, 160);
    v33 = 0x8000000000000000;
    v32 = 0;
    std::thread::Builder::spawn_unchecked::he373d436ca78f87c(&v11, &v32, &v19);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v6, &v11);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v32, &v14);
    v34 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v11, &v32, v55);
    v86 = *((long long *)&v12);
    if (v86 != 3)
    {
        do
        {
            v88 = *((long long *)&v11);
            v0 = v86;
            v1 = *((long long *)&(&v12)[8]);
            v89 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v87, v55);
            if (!v89)
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0, v90, v55);
            }
            else
            {
                v19 = 1;
                v20 = 1;
                v21 = v89;
                v91 = *((int128_t *)&v0);
                v84 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                *((double *)&v21) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v19);
                v22 = 0;
                v19 = v91;
                v23 = v88;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v8, &v19, v55);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v11, &v32, v55), v86 = *((long long *)&v12), v86 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v32, v92, v55);
    v33 = v10;
    *((int128_t *)&v32) = *((int128_t *)&v8);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v19, &v32, a2, 1);
    v93 = a0;
    *((void*)&v93->field_20) = v6;
    v85 = (long long)v7;
    *((unsigned long long *)&v93->field_30) = v85;
    v94 = (int128_t)v21;
    v93->field_8 = (int128_t)v19;
    *((void*)&v93->padding_18[0]) = v94;
    *((void*)&v93->field_0) = v2;
    *((long long *)((char *)&v93->field_30 + 8)) = 0;
    return v85;
}
