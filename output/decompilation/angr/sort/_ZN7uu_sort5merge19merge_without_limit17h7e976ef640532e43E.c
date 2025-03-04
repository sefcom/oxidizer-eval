long long uu_sort::merge::merge_without_limit::h7e976ef640532e43(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x280], Other Possible Types: char, unsigned long
    unsigned long v1;  // [sp-0x278], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x270], Other Possible Types: unsigned long
    char v3;  // [bp-0x268]
    int v4;  // [sp-0x250]
    unsigned long v5;  // [sp-0x240]
    unsigned long long v6;  // [sp-0x238]
    void* v7;  // [sp-0x230]
    int v8;  // [sp-0x228]
    char v9;  // [bp-0x218]
    unsigned long v10;  // [sp-0x210]
    unsigned long long v11;  // [sp-0x208]
    unsigned long v12;  // [sp-0x200]
    unsigned long long v13;  // [sp-0x1f8]
    void* v14;  // [sp-0x1f0]
    char v15;  // [bp-0x1e8]
    char v16;  // [bp-0x1e0]
    char v17;  // [bp-0x1d8]
    unsigned long long v18;  // [sp-0x1b8]
    int v19;  // [sp-0x1b0]
    int v20;  // [sp-0x1a0]
    int v21;  // [sp-0x1a0], Other Possible Types: unsigned long long, unsigned long
    int v22;  // [bp-0x1a0], Other Possible Types: char, unsigned long
    int v23;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    void* v24;  // [sp-0x190], Other Possible Types: char, unsigned long, unsigned long long
    void* v25;  // [sp-0x190], Other Possible Types: int, unsigned long long
    int v26;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v27;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long v28;  // [sp-0x178]
    int v29;  // [bp-0x178]
    unsigned long long v30;  // [sp-0x170]
    int v31;  // [sp-0x168]
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
    int v51;  // ymm2
    int v52;  // ymm3
    unsigned long long v53;  // rbx
    unsigned long long v54;  // r13
    unsigned long long v55;  // rbp
    unsigned long long v56;  // rcx
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm3
    struct_0 *v66;  // rax
    unsigned long long v67;  // r14
    void* v68;  // rbp
    unsigned long long v69;  // r13
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm1
    int v75;  // xmm2
    int v76;  // xmm3
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // ymm0
    unsigned long long v80;  // rax
    unsigned long long v81;  // rax
    unsigned long long v82;  // rsi
    unsigned long long v83;  // rbp
    unsigned long long v84;  // rax
    int v85;  // xmm0
    struct_0 *v86;  // rcx
    int v87;  // xmm2

    v18 = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v22);
    v45 = *((int128_t *)&v22);
    v47 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v48 = *((int128_t *)&v24);
    v50 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
    v4 = v45;
    v19 = v48;
    core::iter::traits::iterator::Iterator::size_hint::h696b96077833da96(&v36);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h518af1d201706e3d(&v22, *((long long *)&v36), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, v24); /* do not return */
    v5 = v23;
    v6 = v24;
    v7 = 0;
    core::iter::traits::iterator::Iterator::size_hint::h696b96077833da96(&v36);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v22, *((long long *)&v36), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v12, v24); /* do not return */
    v12 = v23;
    v13 = v24;
    v14 = 0;
    core::iter::traits::iterator::Iterator::enumerate::hf7aa1a58076079fe(&v15, a1);
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf953a0acfae760b(&v0, &v15);
        v53 = v1;
        if (v53 == 2)
            break;
        v54 = v2;
        v55 = *((long long *)&v3);
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v22, 2, a2, v56);
        v57 = *((int128_t *)&v22);
        v8 = v57;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v12, v24, v26);
        if (v53)
        {
            v66 = a0;
            *((unsigned long long *)&v66->padding_8[0]) = v54;
            v66->field_10 = v55;
            v66->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v8);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h934af70cdb3bb56e(&v15);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v12);
            ::0x5263c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h7da5697cc958b506(&v5);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v19);
            v80 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v4);
            return v80;
        }
        v58 = v8;
        v21 = v58;
        v24 = 0;
        v26 = 1;
        v27 = 0;
        v28 = v54;
        v30 = v55;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0518107e2aaed03f(&v5, &v22);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v36, 0x2000);
        v22 = v0;
        v35 = *((long long *)&v43);
        v59 = *((int128_t *)&v42);
        v34 = v59;
        v60 = *((int128_t *)&v41);
        v33 = v60;
        v61 = *((int128_t *)&v40);
        v32 = v61;
        v62 = *((int128_t *)&v36);
        v47 = (((((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v63 = *((int128_t *)&v37);
        v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        v64 = *((int128_t *)&v38);
        v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v65 = *((int128_t *)&v39);
        v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v31 = v65;
        v29 = v64;
        v26 = v63;
        v22 = v62;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v36, &v4, &v22, v56);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v36, &g_6003f0);
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h934af70cdb3bb56e(&v15);
    v67 = v7;
    if (v67)
    {
        v68 = 0;
        do
        {
            v69 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v68);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v36, 0x2000);
            v21 = v68;
            v35 = *((long long *)&v43);
            v70 = *((int128_t *)&v42);
            v34 = v70;
            v71 = *((int128_t *)&v41);
            v33 = v71;
            v72 = *((int128_t *)&v40);
            v32 = v72;
            v73 = *((int128_t *)&v36);
            v47 = (((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v74 = *((int128_t *)&v37);
            v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
            v75 = *((int128_t *)&v38);
            v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            v76 = *((int128_t *)&v39);
            v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v31 = v76;
            v29 = v75;
            v26 = v74;
            v23 = v73;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v36, &v4, &v22, v56);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v36, &g_6003d8);
            v68 = v69;
        } while (v69 < v67);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v36, a2);
    v77 = v19;
    v20 = v77;
    v78 = *((int128_t *)&v5);
    v79 = (v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
    v25 = v78;
    v27 = v7;
    memcpy(&v29, &v36, 160);
    v37 = 0x8000000000000000;
    v36 = 0;
    std::thread::Builder::spawn_unchecked::h3b01fcfabb9c426f(&v15, &v36, &v22);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v8, &v15);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v36, &v12);
    v38 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v15, &v36);
    v81 = *((long long *)&v16);
    if (v81 != 3)
    {
        do
        {
            v83 = *((long long *)&v15);
            v10 = v81;
            v11 = *((long long *)&v17);
            v84 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v10, v82, a2);
            if (v84)
            {
                v21 = 1;
                v23 = 1;
                v24 = v84;
                v85 = *((int128_t *)&v10);
                v79 = v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                *((double *)&v25) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v22);
                v25 = 0;
                v20 = v85;
                v27 = v83;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v0, &v22);
            }
            else
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v10);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v15, &v36), v81 = *((long long *)&v16), v81 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v36);
    v37 = v2;
    *((int128_t *)&v36) = *((int128_t *)&v0);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v22, &v36, a2, 1);
    v86 = a0;
    *((void*)&v86->field_30) = v8;
    v80 = *((long long *)&v9);
    v86->field_40 = v80;
    v87 = (int128_t)v25;
    *((int128_t *)&v86->field_10) = (int128_t)v20;
    *((void*)&v86->field_20) = v87;
    *((void*)&v86->field_0) = v4;
    v86->field_48 = 0;
    return v80;
}
