long long uu_sort::merge::merge_without_limit::h2875c70cfc96a2e1(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    int v0;  // [bp-0x2a0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x298]
    int v2;  // [sp-0x280]
    unsigned long v3;  // [sp-0x270], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x268]
    void* v5;  // [sp-0x260]
    int v6;  // [sp-0x258]
    int v7;  // [sp-0x248]
    unsigned long v8;  // [sp-0x230], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x228]
    void* v10;  // [sp-0x220]
    void* v11;  // [bp-0x218], Other Possible Types: char, unsigned long
    unsigned long v12;  // [sp-0x210], Other Possible Types: unsigned long long
    void* v13;  // [sp-0x208]
    char v14;  // [bp-0x200]
    unsigned long long v15;  // [sp-0x1f0]
    int v16;  // [sp-0x1e8]
    char v17;  // [bp-0x1d8]
    char v18;  // [bp-0x1d0]
    char v19;  // [bp-0x1c8]
    int v20;  // [bp-0x1a0], Other Possible Types: char, unsigned long, unsigned long long
    int v21;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    int v22;  // [bp-0x190], Other Possible Types: char, unsigned long, unsigned long long
    void* v23;  // [sp-0x188], Other Possible Types: int, unsigned long long
    unsigned long long v24;  // [sp-0x180]
    int v25;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v26;  // [sp-0x170]
    int v27;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v28;  // [sp-0x160]
    int v29;  // [sp-0x158]
    int v30;  // [sp-0x148]
    int v31;  // [sp-0x138]
    unsigned long long v32;  // [sp-0x128]
    int v33;  // [bp-0xd8], Other Possible Types: void*, char
    char v34;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v35;  // [bp-0xb8], Other Possible Types: char
    char v36;  // [bp-0xa8]
    char v37;  // [bp-0x98]
    char v38;  // [bp-0x88]
    char v39;  // [bp-0x78]
    char v40;  // [bp-0x68]
    int v42;  // xmm0
    int v43;  // ymm0
    int v44;  // ymm0
    int v45;  // xmm1
    int v46;  // ymm1
    int v47;  // ymm1
    int v48;  // ymm2
    int v49;  // ymm3
    int v50;  // xmm0
    int v51;  // xmm1
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rcx
    int v54;  // xmm0
    unsigned long long v55;  // rax
    int v56;  // xmm0
    unsigned long long v57;  // rcx
    int v58;  // xmm1
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm3
    struct_0 *v66;  // rax
    unsigned long long v67;  // rsi
    unsigned long long v68;  // r14
    void* v69;  // rbp
    unsigned long long v70;  // rbp
    unsigned long long v71;  // r13
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    int v78;  // xmm3
    int v79;  // xmm0
    int v80;  // xmm0
    int v81;  // ymm0
    unsigned long long v82;  // rax
    unsigned long long v83;  // rax
    unsigned long long v84;  // rsi
    unsigned long long v85;  // rbp
    unsigned long long v86;  // rax
    unsigned long long v87;  // rsi
    int v88;  // xmm0
    unsigned long long v89;  // rsi
    struct_0 *v90;  // rcx
    int v91;  // xmm2

    v15 = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v20, a1, a2);
    v42 = *((int128_t *)&v20);
    v44 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
    v45 = *((int128_t *)&v22);
    v47 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v2 = v42;
    v16 = v45;
    core::iter::traits::iterator::Iterator::size_hint::h382e76ab57e08611(&v33);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h74116286720960df(&v20, *((long long *)&v33), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v3 = v21;
    v4 = v22;
    v5 = 0;
    core::iter::traits::iterator::Iterator::size_hint::h382e76ab57e08611(&v33);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v20, *((long long *)&v33), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v8 = v21;
    v9 = v22;
    v10 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h33ecfbf829d0117b(&v17, a1);
    while (true)
    {
        v22 = v22;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e11dfbe4d9e6b99(&v11, &v17);
        if (v12 == 9223372036854775809)
            break;
        v50 = *((int128_t *)&v12);
        v51 = *((int128_t *)&v14);
        v7 = v51;
        v6 = v50;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v20, 2, v52, v53);
        v54 = *((int128_t *)&v20);
        v0 = v54;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v8, v22, v23);
        v55 = (long long)v6;
        v56 = (int128_t)(&v6)[8];
        if (v22 == 0x8000000000000000)
        {
            v66 = a0;
            *((void*)&(&v66->field_0)[1]) = v56;
            v66->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0, v67, v52);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h7ffbec02c5aebf8a(&v17);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v8, v67, v52);
            ::0x526030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainTmpMergeInput$GT$$GT$$GT$$GT$::h12eb38ced1d482d7(&v3, v67, v52);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v16, v67, v52);
            v82 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2, v67, v52);
            return v82;
        }
        v57 = (long long)(&v7)[8];
        v58 = (int128_t)v0;
        v20 = v58;
        v22 = v55;
        v23 = v56;
        v25 = v57;
        v26 = 0;
        v27 = 1;
        v28 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h63a3347568e06c06(&v3, &v20, v52);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v33, 0x2000);
        v20 = v11;
        v32 = *((long long *)&v40);
        v59 = *((int128_t *)&v39);
        v31 = v59;
        v60 = *((int128_t *)&v38);
        v30 = v60;
        v61 = *((int128_t *)&v37);
        v29 = v61;
        v62 = *((int128_t *)&v33);
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v63 = *((int128_t *)&v34);
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        v64 = *((int128_t *)&v35);
        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v65 = *((int128_t *)&v36);
        v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v27 = v65;
        v25 = v64;
        v23 = v63;
        v21 = v62;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v33, &v2, &v20, v53);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v33, &g_6003f0);
        v22 = v22;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h7ffbec02c5aebf8a(&v17);
    v68 = v5;
    if (v68)
    {
        v69 = 0;
        do
        {
            v70 = v69;
            v71 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v70);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v33, 0x2000);
            v20 = v70;
            v32 = *((long long *)&v40);
            v72 = *((int128_t *)&v39);
            v31 = v72;
            v73 = *((int128_t *)&v38);
            v30 = v73;
            v74 = *((int128_t *)&v37);
            v29 = v74;
            v75 = *((int128_t *)&v33);
            v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            v76 = *((int128_t *)&v34);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v77 = *((int128_t *)&v35);
            v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
            v78 = *((int128_t *)&v36);
            v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v27 = v78;
            v25 = v77;
            v23 = v76;
            v21 = v75;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v33, &v2, &v20, v53);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v33, &g_6003d8);
            v69 = v71;
        } while (v71 < v68);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v33, a2);
    v79 = v16;
    v20 = v79;
    v80 = *((int128_t *)&v3);
    v81 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
    v22 = v80;
    v24 = v5;
    memcpy(&v25, &v33, 160);
    v34 = 0x8000000000000000;
    v33 = 0;
    std::thread::Builder::spawn_unchecked::h7eecef00a24bb111(&v17, &v33, &v20);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v6, &v17);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v33, &v8);
    v35 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v17, &v33, v52);
    v83 = *((long long *)&v18);
    if (v83 != 3)
    {
        do
        {
            v85 = *((long long *)&v17);
            v0 = v83;
            v1 = *((long long *)&v19);
            v86 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v84, v52);
            if (!v86)
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0, v87, v52);
            }
            else
            {
                v20 = 1;
                v21 = 1;
                v22 = v86;
                v88 = *((int128_t *)&v0);
                v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                *((double *)&v22) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v20);
                v23 = 0;
                v20 = v88;
                v24 = v85;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v11, &v20, v52);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v17, &v33, v52), v83 = *((long long *)&v18), v83 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v33, v89, v52);
    v34 = v13;
    *((int128_t *)&v33) = *((int128_t *)&v11);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v20, &v33, a2, 1);
    v90 = a0;
    *((void*)&v90->field_20) = v6;
    v82 = (long long)v7;
    *((unsigned long long *)&v90->field_30) = v82;
    v91 = (int128_t)v22;
    v90->field_8 = (int128_t)v20;
    *((void*)&v90->padding_18[0]) = v91;
    *((void*)&v90->field_0) = v2;
    *((long long *)((char *)&v90->field_30 + 8)) = 0;
    return v82;
}
