long long uu_sort::merge::merge_without_limit::h9b5b2c5845db30df(struct_0 *a0, unsigned long long a1[4], unsigned long long a2)
{
    int v0;  // [bp-0x290], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x288]
    int v2;  // [sp-0x270]
    unsigned long v3;  // [sp-0x260]
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
    unsigned long v14;  // [sp-0x1d0]
    unsigned long long v15;  // [sp-0x1c8]
    void* v16;  // [sp-0x1c0]
    unsigned long long v17[4];  // [sp-0x1b8]
    int v18;  // [sp-0x1b0]
    int v19;  // [bp-0x1a0]
    int v20;  // [sp-0x1a0], Other Possible Types: unsigned long long, unsigned long
    int v21;  // [bp-0x1a0], Other Possible Types: char, unsigned long
    int v22;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    char v23;  // [sp-0x190], Other Possible Types: unsigned long, unsigned long long
    void* v24;  // [sp-0x190], Other Possible Types: int, unsigned long long
    int v25;  // [sp-0x188], Other Possible Types: unsigned long
    unsigned long long v26;  // [sp-0x180]
    unsigned long v27;  // [sp-0x178]
    int v28;  // [bp-0x178]
    void* v29;  // [sp-0x170]
    int v30;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x160]
    int v32;  // [sp-0x158]
    int v33;  // [sp-0x148]
    int v34;  // [sp-0x138]
    unsigned long long v35;  // [sp-0x128]
    int v36;  // [bp-0xd8], Other Possible Types: void*, char
    char v37;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v38;  // [bp-0xb8], Other Possible Types: char
    char v39;  // [bp-0xa8]
    char v40;  // [bp-0x98]
    char v41;  // [bp-0x88]
    char v42;  // [bp-0x78]
    char v43;  // [bp-0x68]
    int v45;  // xmm0
    int v46;  // ymm0
    int v47;  // ymm0
    int v48;  // xmm1
    int v49;  // ymm1
    int v50;  // ymm1
    unsigned long long v51;  // rbx
    unsigned long long v52;  // r14
    int v53;  // ymm2
    int v54;  // ymm3
    unsigned long long v55;  // r12
    int v56;  // xmm0
    int v57;  // xmm1
    unsigned long long v58;  // rcx
    int v59;  // xmm0
    unsigned long long v60;  // rax
    int v61;  // xmm0
    unsigned long long v62;  // rcx
    int v63;  // xmm1
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm2
    int v70;  // xmm3
    struct_0 *v71;  // rax
    unsigned long long v72;  // r14
    void* v73;  // rbp
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
    int v90;  // xmm0
    struct_0 *v91;  // rcx
    int v92;  // xmm2

    v17[0] = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v21);
    v45 = *((int128_t *)&v21);
    v47 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v48 = *((int128_t *)&v23);
    v50 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
    v2 = v45;
    v18 = v48;
    v51 = a1[1];
    v52 = a1[3];
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::ha80458126dc4c588(&v36, v51, v52);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h74116286720960df(&v21, *((long long *)&v36), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, v23); /* do not return */
    v3 = v22;
    v4 = v23;
    v5 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::ha80458126dc4c588(&v36, v51, v52);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v21, *((long long *)&v36), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v14, v23); /* do not return */
    v14 = v22;
    v15 = v23;
    v16 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h3afadf4656df7c4c(&v8, a1);
    while (true)
    {
        v23 = v23;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf563b039e4ebe304(&v11, &v8);
        if (*((long long *)&v12) == 9223372036854775809)
            break;
        v55 = *((long long *)&v11);
        v56 = *((int128_t *)&v12);
        v57 = *((int128_t *)&v13);
        v7 = v57;
        v6 = v56;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v21, 2, a2, v58);
        v59 = *((int128_t *)&v21);
        v0 = v59;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v14, v23, v25);
        v60 = (long long)v6;
        v61 = (int128_t)(&v6)[8];
        if (v23 == 0x8000000000000000)
        {
            v71 = a0;
            *((void*)&(&v71->field_0)[1]) = v61;
            v71->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h1e6f2c020833c916(&v8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v14);
            ::0x526030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainTmpMergeInput$GT$$GT$$GT$$GT$::h12eb38ced1d482d7(&v3);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v18);
            v85 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2);
            return v85;
        }
        v62 = (long long)(&v7)[8];
        v63 = (int128_t)v0;
        v20 = v63;
        v23 = v60;
        v25 = v61;
        v27 = v62;
        v29 = 0;
        v30 = 1;
        v31 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h63a3347568e06c06(&v3, &v21);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v36, 0x2000);
        v21 = v55;
        v35 = *((long long *)&v43);
        v64 = *((int128_t *)&v42);
        v34 = v64;
        v65 = *((int128_t *)&v41);
        v33 = v65;
        v66 = *((int128_t *)&v40);
        v32 = v66;
        v67 = *((int128_t *)&v36);
        v47 = ((((((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v68 = *((int128_t *)&v37);
        v50 = ((v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
        v69 = *((int128_t *)&v38);
        v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
        v70 = *((int128_t *)&v39);
        v54 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
        v30 = v70;
        v28 = v69;
        v25 = v68;
        v21 = v67;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v36, &v2, &v21, v58);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v36, &g_6003f0);
        v23 = v23;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h1e6f2c020833c916(&v8);
    v72 = v5;
    if (v72)
    {
        v73 = 0;
        do
        {
            v74 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v73);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v36, 0x2000);
            v20 = v73;
            v35 = *((long long *)&v43);
            v75 = *((int128_t *)&v42);
            v34 = v75;
            v76 = *((int128_t *)&v41);
            v33 = v76;
            v77 = *((int128_t *)&v40);
            v32 = v77;
            v78 = *((int128_t *)&v36);
            v47 = (((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v79 = *((int128_t *)&v37);
            v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            v80 = *((int128_t *)&v38);
            v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v81 = *((int128_t *)&v39);
            v54 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v30 = v81;
            v28 = v80;
            v25 = v79;
            v22 = v78;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v36, &v2, &v21, v58);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v36, &g_6003d8);
            v73 = v74;
        } while (v74 < v72);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v36, a2);
    v82 = v18;
    v19 = v82;
    v83 = *((int128_t *)&v3);
    v84 = (v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
    v24 = v83;
    v26 = v5;
    memcpy(&v28, &v36, 160);
    v37 = 0x8000000000000000;
    v36 = 0;
    std::thread::Builder::spawn_unchecked::he373d436ca78f87c(&v11, &v36, &v21);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v6, &v11);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v36, &v14);
    v38 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v11, &v36);
    v86 = *((long long *)&v12);
    if (v86 != 3)
    {
        do
        {
            v88 = *((long long *)&v11);
            v0 = v86;
            v1 = *((long long *)&(&v12)[8]);
            v89 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v87, a2);
            if (v89)
            {
                v20 = 1;
                v22 = 1;
                v23 = v89;
                v90 = *((int128_t *)&v0);
                v84 = v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                *((double *)&v24) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v21);
                v24 = 0;
                v19 = v90;
                v26 = v88;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v8, &v21);
            }
            else
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v11, &v36), v86 = *((long long *)&v12), v86 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v36);
    v37 = v10;
    *((int128_t *)&v36) = *((int128_t *)&v8);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v21, &v36, a2, 1);
    v91 = a0;
    *((void*)&v91->field_20) = v6;
    v85 = (long long)v7;
    *((unsigned long long *)&v91->field_30) = v85;
    v92 = (int128_t)v24;
    v91->field_8 = (int128_t)v19;
    *((void*)&v91->padding_18[0]) = v92;
    *((void*)&v91->field_0) = v2;
    *((unsigned long long *)((char *)&v91->field_30 + 8)) = 0;
    return v85;
}
