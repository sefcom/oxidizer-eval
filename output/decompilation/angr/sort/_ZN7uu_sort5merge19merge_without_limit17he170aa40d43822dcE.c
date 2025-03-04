long long uu_sort::merge::merge_without_limit::he170aa40d43822dc(struct_0 *a0, unsigned long long a1[4], unsigned long long a2)
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
    unsigned long long v15[4];  // [sp-0x1f0]
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
    unsigned long long v52;  // rbx
    unsigned long long v53;  // r14
    int v54;  // ymm2
    int v55;  // ymm3
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

    v15[0] = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v22);
    v46 = *((int128_t *)&v22);
    v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
    v49 = *((int128_t *)&v24);
    v51 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
    v2 = v46;
    v16 = v49;
    v52 = a1[1];
    v53 = a1[3];
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h5ef336eb97c031a0(&v37, v52, v53);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h74116286720960df(&v22, *((long long *)&v37), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, v24); /* do not return */
    v3 = v23;
    v4 = v24;
    v5 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h5ef336eb97c031a0(&v37, v52, v53);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v22, *((long long *)&v37), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v8, v24); /* do not return */
    v8 = v23;
    v9 = v24;
    v10 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h095566d266796bff(&v17, a1);
    while (true)
    {
        v24 = v24;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd4dea648c9ddcce(&v11, &v17);
        if (v12 == 9223372036854775809)
            break;
        v56 = *((int128_t *)&v12);
        v57 = *((int128_t *)&v14);
        v7 = v57;
        v6 = v56;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v22, 2, a2, v58);
        v59 = *((int128_t *)&v22);
        v0 = v59;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v8, v24, v26);
        v60 = (long long)v6;
        v61 = (int128_t)(&v6)[8];
        if (v24 == 0x8000000000000000)
        {
            v71 = a0;
            *((void*)&(&v71->field_0)[1]) = v61;
            v71->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h33e030708c0395d6(&v17);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v8);
            ::0x526030::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainTmpMergeInput$GT$$GT$$GT$$GT$::h12eb38ced1d482d7(&v3);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v16);
            v85 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2);
            return v85;
        }
        v62 = (long long)(&v7)[8];
        v63 = (int128_t)v0;
        v21 = v63;
        v24 = v60;
        v26 = v61;
        v28 = v62;
        v30 = 0;
        v31 = 1;
        v32 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h63a3347568e06c06(&v3, &v22);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v37, 0x2000);
        v22 = v11;
        v36 = *((long long *)&v44);
        v64 = *((int128_t *)&v43);
        v35 = v64;
        v65 = *((int128_t *)&v42);
        v34 = v65;
        v66 = *((int128_t *)&v41);
        v33 = v66;
        v67 = *((int128_t *)&v37);
        v48 = ((((((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v68 = *((int128_t *)&v38);
        v51 = ((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
        v69 = *((int128_t *)&v39);
        v54 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
        v70 = *((int128_t *)&v40);
        v55 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
        v31 = v70;
        v29 = v69;
        v26 = v68;
        v22 = v67;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v37, &v2, &v22, v58);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v37, &g_6003f0);
        v24 = v24;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h33e030708c0395d6(&v17);
    v72 = v5;
    if (v72)
    {
        v73 = 0;
        do
        {
            v74 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v73);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v37, 0x2000);
            v21 = v73;
            v36 = *((long long *)&v44);
            v75 = *((int128_t *)&v43);
            v35 = v75;
            v76 = *((int128_t *)&v42);
            v34 = v76;
            v77 = *((int128_t *)&v41);
            v33 = v77;
            v78 = *((int128_t *)&v37);
            v48 = (((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v79 = *((int128_t *)&v38);
            v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            v80 = *((int128_t *)&v39);
            v54 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v81 = *((int128_t *)&v40);
            v55 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v31 = v81;
            v29 = v80;
            v26 = v79;
            v23 = v78;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v37, &v2, &v22, v58);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v37, &g_6003d8);
            v73 = v74;
        } while (v74 < v72);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v37, a2);
    v82 = v16;
    v20 = v82;
    v83 = *((int128_t *)&v3);
    v84 = (v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
    v25 = v83;
    v27 = v5;
    memcpy(&v29, &v37, 160);
    v38 = 0x8000000000000000;
    v37 = 0;
    std::thread::Builder::spawn_unchecked::h0a0c8738860900b9(&v17, &v37, &v22);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v6, &v17);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v37, &v8);
    v39 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v17, &v37);
    v86 = *((long long *)&v18);
    if (v86 != 3)
    {
        do
        {
            v88 = *((long long *)&v17);
            v0 = v86;
            v1 = *((long long *)&v19);
            v89 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v87, a2);
            if (v89)
            {
                v21 = 1;
                v23 = 1;
                v24 = v89;
                v90 = *((int128_t *)&v0);
                v84 = v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                *((double *)&v25) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v22);
                v25 = 0;
                v20 = v90;
                v27 = v88;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v11, &v22);
            }
            else
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v17, &v37), v86 = *((long long *)&v18), v86 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v37);
    v38 = v13;
    *((int128_t *)&v37) = *((int128_t *)&v11);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v22, &v37, a2, 1);
    v91 = a0;
    *((void*)&v91->field_20) = v6;
    v85 = (long long)v7;
    *((unsigned long long *)&v91->field_30) = v85;
    v92 = (int128_t)v25;
    v91->field_8 = (int128_t)v20;
    *((void*)&v91->padding_18[0]) = v92;
    *((void*)&v91->field_0) = v2;
    *((unsigned long long *)((char *)&v91->field_30 + 8)) = 0;
    return v85;
}
