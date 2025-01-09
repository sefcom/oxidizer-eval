long long uu_sort::merge::merge_without_limit::h2a479b2dd5111a80(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x260]
    char v1;  // [bp-0x258]
    char v2;  // [bp-0x250]
    char v3;  // [bp-0x248]
    int v4;  // [sp-0x230]
    unsigned long v5;  // [sp-0x220], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x218]
    void* v7;  // [sp-0x210]
    void* v8;  // [bp-0x208], Other Possible Types: char
    unsigned long long v9;  // [sp-0x200]
    void* v10;  // [sp-0x1f8]
    int v11;  // [sp-0x1f0]
    char v12;  // [bp-0x1e0]
    unsigned long v13;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x1d0]
    unsigned long v15;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x1c0]
    void* v17;  // [sp-0x1b8]
    int v18;  // [sp-0x1b0]
    int v19;  // [bp-0x1a0], Other Possible Types: char, unsigned long, unsigned long long
    int v20;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    void* v21;  // [bp-0x190], Other Possible Types: int, char, unsigned long, unsigned long long
    void* v22;  // [sp-0x188], Other Possible Types: int, unsigned long long
    void* v23;  // [sp-0x180], Other Possible Types: unsigned long long
    int v24;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x170]
    int v26;  // [sp-0x168]
    int v27;  // [sp-0x158]
    int v28;  // [sp-0x148]
    int v29;  // [sp-0x138]
    unsigned long long v30;  // [sp-0x128]
    int v31;  // [bp-0xd8], Other Possible Types: void*, char
    char v32;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v33;  // [bp-0xb8], Other Possible Types: char
    char v34;  // [bp-0xa8]
    char v35;  // [bp-0x98]
    char v36;  // [bp-0x88]
    char v37;  // [bp-0x78]
    char v38;  // [bp-0x68]
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // ymm0
    int v43;  // xmm1
    int v44;  // ymm1
    int v45;  // ymm1
    int v46;  // ymm2
    int v47;  // ymm3
    unsigned long long v48;  // rbp
    unsigned long long v49;  // r14
    unsigned long long v50;  // r12
    unsigned long long v51;  // r13
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rcx
    int v54;  // xmm0
    int v55;  // xmm0
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2
    int v62;  // xmm3
    unsigned long long v63;  // r14
    struct_0 *v64;  // rax
    void* v65;  // rbp
    unsigned long long v66;  // rbp
    unsigned long long v67;  // r13
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    int v74;  // xmm3
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // ymm0
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long v80;  // rsi
    unsigned long long v81;  // rbp
    unsigned long long v82;  // rax
    int v83;  // xmm0
    struct_0 *v84;  // rcx
    int v85;  // xmm2

    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v19);
    v40 = *((int128_t *)&v19);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
    v43 = *((int128_t *)&v21);
    v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
    v4 = v40;
    v18 = v43;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h4bc4ad31aabd6369(&v31, a1, a2);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h518af1d201706e3d(&v19, *((long long *)&v31), 0);
    if (v19)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, v21); /* do not return */
    v5 = v20;
    v6 = v21;
    v7 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h4bc4ad31aabd6369(&v31, a1, a2);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v19, *((long long *)&v31), 0);
    if (v19)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v15, v21); /* do not return */
    v15 = v20;
    v16 = v21;
    v17 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h6ac0e6a3d87da25f(&v8, a1, a2);
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h11156b527aa8346d(&v0, &v8);
        v48 = *((long long *)&v1);
        if (v48 == 2)
            break;
        v49 = *((long long *)&v0);
        v50 = *((long long *)&v2);
        v51 = *((long long *)&v3);
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v19, 2, v52, v53);
        v54 = *((int128_t *)&v19);
        v11 = v54;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v15, v21, v22);
        if (v48)
        {
            v64 = a0;
            *((unsigned long long *)&v64->padding_8[0]) = v50;
            v64->field_10 = v51;
            v64->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af();
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v15);
            ::0x5263c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h7da5697cc958b506(&v5);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425();
            v78 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066();
            return v78;
        }
        v55 = v11;
        v19 = v55;
        v21 = 0;
        v22 = 1;
        v23 = 0;
        v24 = v50;
        v25 = v51;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0518107e2aaed03f(&v5, &v19);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v31, 0x2000);
        v19 = v49;
        v30 = *((long long *)&v38);
        v56 = *((int128_t *)&v37);
        v29 = v56;
        v57 = *((int128_t *)&v36);
        v28 = v57;
        v58 = *((int128_t *)&v35);
        v27 = v58;
        v59 = *((int128_t *)&v31);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v60 = *((int128_t *)&v32);
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v61 = *((int128_t *)&v33);
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
        v62 = *((int128_t *)&v34);
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v26 = v62;
        v24 = v61;
        v22 = v60;
        v20 = v59;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v31, &v4, &v19, v53);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v31, &g_6003f0);
    }
    v63 = v7;
    if (v63)
    {
        v65 = 0;
        do
        {
            v66 = v65;
            v67 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v66);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v31, 0x2000);
            v19 = v66;
            v30 = *((long long *)&v38);
            v68 = *((int128_t *)&v37);
            v29 = v68;
            v69 = *((int128_t *)&v36);
            v28 = v69;
            v70 = *((int128_t *)&v35);
            v27 = v70;
            v71 = *((int128_t *)&v31);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
            v72 = *((int128_t *)&v32);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
            v73 = *((int128_t *)&v33);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v74 = *((int128_t *)&v34);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
            v26 = v74;
            v24 = v73;
            v22 = v72;
            v20 = v71;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v31, &v4, &v19, v53);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v31, &g_6003d8);
            v65 = v67;
        } while (v67 < v63);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v31, v53);
    v75 = v18;
    v19 = v75;
    v76 = *((int128_t *)&v5);
    v77 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
    v21 = v76;
    v23 = v7;
    memcpy(&v24, &v31, 160);
    v32 = 0x8000000000000000;
    v31 = 0;
    std::thread::Builder::spawn_unchecked::h37331e2a693fd9a0(&v0, &v31, &v19);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v11, &v0);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v31, &v15);
    v33 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v0, &v31);
    v79 = *((long long *)&v1);
    if (v79 != 3)
    {
        do
        {
            v81 = *((long long *)&v0);
            v13 = v79;
            v14 = *((long long *)&v2);
            v82 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v13, v80, v52);
            if (v82)
            {
                v19 = 1;
                v20 = 1;
                v21 = v82;
                v83 = *((int128_t *)&v13);
                v77 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                *((double *)&v21) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v19);
                v22 = 0;
                v19 = v83;
                v23 = v81;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v8, &v19);
            }
            else
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f();
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v0, &v31), v79 = *((long long *)&v1), v79 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c();
    v32 = v10;
    *((int128_t *)&v31) = *((int128_t *)&v8);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v19, &v31, v53, 1);
    v84 = a0;
    *((void*)&v84->field_30) = v11;
    v78 = *((long long *)&v12);
    v84->field_40 = v78;
    v85 = (int128_t)v21;
    *((int128_t *)&v84->field_10) = (int128_t)v19;
    *((void*)&v84->field_20) = v85;
    *((void*)&v84->field_0) = v4;
    v84->field_48 = 0;
    return v78;
}
