long long uu_sort::merge::merge_without_limit::h2875c70cfc96a2e1(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x2a0], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x298]
    int v2;  // [sp-0x280]
    unsigned long v3;  // [sp-0x270]
    unsigned long long v4;  // [sp-0x268]
    void* v5;  // [sp-0x260]
    int v6;  // [sp-0x258]
    int v7;  // [sp-0x248]
    unsigned long v8;  // [sp-0x230]
    unsigned long long v9;  // [sp-0x228]
    void* v10;  // [sp-0x220]
    void* v11;  // [bp-0x218], Other Possible Types: char, unsigned long
    char v12;  // [sp-0x210], Other Possible Types: unsigned long, unsigned long long
    void* v13;  // [sp-0x208]
    char v14;  // [bp-0x200]
    unsigned long long v15;  // [sp-0x1f0]
    int v16;  // [sp-0x1e8]
    char v17;  // [bp-0x1d8]
    char v18;  // [bp-0x1d0]
    char v19;  // [bp-0x1c8]
    int v20;  // [bp-0x1a0]
    int v21;  // [sp-0x1a0], Other Possible Types: unsigned long long, unsigned long
    int v22;  // [bp-0x1a0], Other Possible Types: char, unsigned long
    int v23;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    char v24;  // [sp-0x190], Other Possible Types: unsigned long, unsigned long long
    void* v25;  // [sp-0x190], Other Possible Types: int, unsigned long long
    int v26;  // [sp-0x188], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x180]
    unsigned long v28;  // [sp-0x178]
    int v29;  // [bp-0x178]
    void* v30;  // [sp-0x170]
    int v31;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v32;  // [sp-0x160]
    int v33;  // [sp-0x158]
    int v34;  // [sp-0x148]
    int v35;  // [sp-0x138]
    unsigned long long v36;  // [sp-0x128]
    int v37;  // [bp-0xd8], Other Possible Types: void*, char
    char v38;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v39;  // [bp-0xb8], Other Possible Types: char
    char v40;  // [bp-0xa8]
    char v41;  // [bp-0x98]
    char v42;  // [bp-0x88]
    char v43;  // [bp-0x78]
    char v44;  // [bp-0x68]
    int v46;  // xmm0
    int v47;  // ymm0
    int v48;  // ymm0
    int v49;  // xmm1
    int v50;  // ymm1
    int v51;  // ymm1
    int v52;  // ymm2
    int v53;  // ymm3
    int v54;  // xmm0
    int v55;  // xmm1
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
    unsigned long long v70;  // r14
    void* v71;  // rbp
    unsigned long long v72;  // r13
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm2
    int v79;  // xmm3
    int v80;  // xmm0
    int v81;  // xmm0
    int v82;  // ymm0
    unsigned long long v83;  // rax
    unsigned long long v84;  // rax
    unsigned long long v85;  // rsi
    unsigned long long v86;  // rbp
    unsigned long long v87;  // rax
    int v88;  // xmm0
    struct_0 *v89;  // rcx
    int v90;  // xmm2

    v15 = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v22);
    v46 = *((int128_t *)&v22);
    v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
    v49 = *((int128_t *)&v24);
    v51 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
    v2 = v46;
    v16 = v49;
    core::iter::traits::iterator::Iterator::size_hint::h382e76ab57e08611(&v37);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h74116286720960df(&v22, *((long long *)&v37), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, v24); /* do not return */
    v3 = v23;
    v4 = v24;
    v5 = 0;
    core::iter::traits::iterator::Iterator::size_hint::h382e76ab57e08611(&v37);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v22, *((long long *)&v37), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v8, v24); /* do not return */
    v8 = v23;
    v9 = v24;
    v10 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h33ecfbf829d0117b(&v17, a1);
    while (true)
    {
        v24 = v24;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e11dfbe4d9e6b99(&v11, &v17);
        if (v12 == 9223372036854775809)
            break;
        v54 = *((int128_t *)&v12);
        v55 = *((int128_t *)&v14);
        v7 = v55;
        v6 = v54;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v22, 2, a2, v56);
        v57 = *((int128_t *)&v22);
        v0 = v57;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v8, v24, v26);
        v58 = (long long)v6;
        v59 = (int128_t)(&v6)[8];
        if (v24 == 0x8000000000000000)
        {
            v69 = a0;
            *((void*)&(&v69->field_0)[1]) = v59;
            v69->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h7ffbec02c5aebf8a(&v17);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v8);
            ::0x526030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainTmpMergeInput$GT$$GT$$GT$$GT$::h12eb38ced1d482d7(&v3);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v16);
            v83 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2);
            return v83;
        }
        v60 = (long long)(&v7)[8];
        v61 = (int128_t)v0;
        v21 = v61;
        v24 = v58;
        v26 = v59;
        v28 = v60;
        v30 = 0;
        v31 = 1;
        v32 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h63a3347568e06c06(&v3, &v22);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v37, 0x2000);
        v22 = v11;
        v36 = *((long long *)&v44);
        v62 = *((int128_t *)&v43);
        v35 = v62;
        v63 = *((int128_t *)&v42);
        v34 = v63;
        v64 = *((int128_t *)&v41);
        v33 = v64;
        v65 = *((int128_t *)&v37);
        v48 = ((((((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v66 = *((int128_t *)&v38);
        v51 = ((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
        v67 = *((int128_t *)&v39);
        v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v68 = *((int128_t *)&v40);
        v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
        v31 = v68;
        v29 = v67;
        v26 = v66;
        v22 = v65;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v37, &v2, &v22, v56);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v37, &g_6003f0);
        v24 = v24;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h7ffbec02c5aebf8a(&v17);
    v70 = v5;
    if (v70)
    {
        v71 = 0;
        do
        {
            v72 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v71);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v37, 0x2000);
            v21 = v71;
            v36 = *((long long *)&v44);
            v73 = *((int128_t *)&v43);
            v35 = v73;
            v74 = *((int128_t *)&v42);
            v34 = v74;
            v75 = *((int128_t *)&v41);
            v33 = v75;
            v76 = *((int128_t *)&v37);
            v48 = (((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v77 = *((int128_t *)&v38);
            v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
            v78 = *((int128_t *)&v39);
            v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v79 = *((int128_t *)&v40);
            v53 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            v31 = v79;
            v29 = v78;
            v26 = v77;
            v23 = v76;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v37, &v2, &v22, v56);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v37, &g_6003d8);
            v71 = v72;
        } while (v72 < v70);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v37, a2);
    v80 = v16;
    v20 = v80;
    v81 = *((int128_t *)&v3);
    v82 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
    v25 = v81;
    v27 = v5;
    memcpy(&v29, &v37, 160);
    v38 = 0x8000000000000000;
    v37 = 0;
    std::thread::Builder::spawn_unchecked::h7eecef00a24bb111(&v17, &v37, &v22);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v6, &v17);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v37, &v8);
    v39 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v17, &v37);
    v84 = *((long long *)&v18);
    if (v84 != 3)
    {
        do
        {
            v86 = *((long long *)&v17);
            v0 = v84;
            v1 = *((long long *)&v19);
            v87 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v85, a2);
            if (!v87)
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0);
            }
            else
            {
                v21 = 1;
                v23 = 1;
                v24 = v87;
                v88 = *((int128_t *)&v0);
                v82 = v82 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                *((double *)&v25) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v22);
                v25 = 0;
                v20 = v88;
                v27 = v86;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v11, &v22);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v17, &v37), v84 = *((long long *)&v18), v84 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v37);
    v38 = v13;
    *((int128_t *)&v37) = *((int128_t *)&v11);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v22, &v37, a2, 1);
    v89 = a0;
    *((void*)&v89->field_20) = v6;
    v83 = (long long)v7;
    *((unsigned long long *)&v89->field_30) = v83;
    v90 = (int128_t)v25;
    v89->field_8 = (int128_t)v20;
    *((void*)&v89->padding_18[0]) = v90;
    *((void*)&v89->field_0) = v2;
    *((unsigned long long *)((char *)&v89->field_30 + 8)) = 0;
    return v83;
}
