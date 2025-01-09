long long uu_sort::merge::merge_with_file_limit::hee8bdf8579433eee(unsigned long long a0[2], uint128_t a1[2], struct_0 *a2, unsigned long long a3)
{
    int v0[3];  // [sp-0x268], Other Possible Types: int
    int v1;  // [sp-0x258]
    int v2;  // [bp-0x248], Other Possible Types: unsigned long long
    char v3;  // [bp-0x240], Other Possible Types: unsigned long long
    int v4;  // [bp-0x238], Other Possible Types: unsigned long long
    char v5;  // [bp-0x230]
    int v6;  // [sp-0x228]
    int v8;  // [sp-0x218]
    char v9;  // [bp-0x210]
    void* v10;  // [sp-0x208]
    unsigned long long v11;  // [sp-0x200]
    void* v12;  // [sp-0x1f8]
    unsigned long v13;  // [sp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x1e8]
    char v15;  // [bp-0x1e0], Other Possible Types: unsigned long, unsigned long long
    int v16;  // [sp-0x1d8]
    char v17;  // [bp-0x1d0]
    int v18;  // [sp-0x1c8]
    int v19;  // [sp-0x1b8]
    int v20;  // [sp-0x1a8]
    int v21;  // [sp-0x198]
    unsigned long long v22;  // [sp-0x188]
    unsigned long v23;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x178]
    unsigned long v25;  // [sp-0x170], Other Possible Types: unsigned long long
    int v26;  // [sp-0x168]
    int v27;  // [sp-0x158]
    int v28;  // [sp-0x148]
    int v29;  // [sp-0x138]
    unsigned long long v30;  // [sp-0x128]
    unsigned long v31;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x118]
    unsigned long long v33;  // [sp-0x110]
    unsigned long long v34;  // [sp-0x108]
    unsigned long long v35;  // [sp-0x100]
    int v36;  // [sp-0xf8]
    int v37;  // [sp-0xe8]
    int v38;  // [sp-0xd8]
    unsigned long long v40;  // r12
    void* v41;  // r14
    int v42;  // xmm0
    int v43;  // ymm0
    int v44;  // ymm0
    int v45;  // xmm1
    int v46;  // ymm1
    int v47;  // ymm1
    unsigned long long v48;  // r14
    int v50;  // ymm2
    int v51;  // ymm3
    int v52;  // xmm0
    int v53;  // xmm1
    int v54;  // xmm2
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rax
    unsigned long long v57;  // rcx
    int v58;  // xmm0
    int v59;  // xmm1
    int v60;  // xmm2
    int v61;  // xmm3
    unsigned long long v62;  // rax
    int v63;  // xmm0
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rcx
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    int v74;  // xmm3
    unsigned long long v75;  // rax
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm2
    unsigned long long v79;  // rdx
    unsigned long long v80[2];  // rbx
    unsigned long v81;  // rdx

    v40 = a2->field_70;
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(a1) <= v40)
    {
        *((uint128_t *)&v38) = a1[1];
        *((uint128_t *)&v37) = a1[0];
        uu_sort::merge::merge_without_limit::h9b5b2c5845db30df(a0, &v37, a2);
        return a0;
    }
    v41 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(a1);
    v42 = a1[0];
    v44 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
    v45 = a1[1];
    v47 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v1 = v45;
    v0 = v42;
    itertools::Itertools::chunks::hc1d2676d26c759d9(&v37, v0, v40);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if (v41)
    {
        v22 = 9223372036854775810;
        do
        {
            v13 = v13;
            v41 -= v40;
            if (v41 < v40)
                v41 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hebe185d9380178ad(&v13, &v37);
            if (v13 == v22)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v52 = *((int128_t *)&v13);
            v53 = *((int128_t *)&v15);
            v54 = *((int128_t *)&v17);
            v21 = v54;
            v20 = v53;
            v19 = v52;
            uu_sort::merge::merge_without_limit::h2875c70cfc96a2e1(v0, &v19, a2);
            v55 = (long long)v0[0];
            v56 = (long long)(&v0)[8];
            v57 = (long long)v1;
            if (v23 == 3)
            {
                v80 = a0;
                v80[1] = v56;
                v80[1] = v57;
                v80[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                return a0;
            }
            v30 = *((long long *)&v9);
            v58 = (int128_t)v1;
            v59 = *((int128_t *)&v3);
            v60 = *((int128_t *)&v5);
            v61 = (int128_t)(&v6)[8];
            v29 = v61;
            v28 = v60;
            v27 = v59;
            v26 = v58;
            v23 = v55;
            v24 = v56;
            v25 = v57;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v19, a3);
            v62 = (long long)(&v19)[8];
            if (v35 == 0x8000000000000000)
            {
                v80 = a0;
                *((void*)&v80[1]) = v20;
                goto LABEL_52c3da;
            }
            else
            {
                v63 = v20;
                v34 = (long long)v19;
                v35 = v62;
                v36 = v63;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(v0, &v34);
                v64 = (long long)v0[0];
                v65 = (long long)(&v0)[8];
                v66 = (long long)v1;
                if (v13 == 0x8000000000000000)
                {
                    v80 = a0;
                    v80[1] = v14;
                    v80[1] = v15;
LABEL_52c3da:
                    v80[0] = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v23);
                    ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                    return a0;
                }
            }
            v67 = (int128_t)(&v1)[8];
            v68 = *((int128_t *)&v3);
            v18 = v68;
            v16 = v67;
            v13 = v64;
            v14 = v65;
            v15 = v66;
            v69 = (int128_t)(&v29)[8];
            v8 = v69;
            v70 = (int128_t)(&v28)[8];
            v6 = v70;
            v71 = *((int128_t *)&v23);
            v72 = *((int128_t *)&v25);
            v73 = (int128_t)(&v26)[8];
            v74 = (int128_t)(&v27)[8];
            v51 = (v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
            v4 = v74;
            v2 = v73;
            v1 = v72;
            v0 = v71;
            v75 = uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(v0, a2, ::0x533c70::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&v13));
            if (v75)
            {
                v80 = a0;
                v80[1] = v75;
                v80[1] = v81;
                v80[0] = 3;
                ::0x5270e0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&v13);
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                return a0;
            }
            v4 = (long long)(&v18)[8];
            v76 = *((int128_t *)&v13);
            v44 = (((((((v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v77 = *((int128_t *)&v15);
            v47 = ((((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
            v78 = (int128_t)(&v16)[8];
            v50 = (((v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v2 = v78;
            v1 = v77;
            v0 = v76;
            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&v19, v0);
            v79 = (long long)v19;
            v56 = (long long)(&v19)[8];
            v57 = (long long)v20;
            if (v31 == 0x8000000000000000)
            {
                vvar_659{reg 40} = a0;
                v80[1] = v56;
                v80[1] = v57;
                v80[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                return a0;
            }
            v31 = v79;
            v32 = v56;
            v33 = v57;
            ::0x5280f0::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v10, &v31);
            v13 = v13;
        } while (v48 > v40);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hebe185d9380178ad(v0, &v37);
    if ((long long)v0[0] == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h0b384b4f21d54495(v0);
        ::0x5288f0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&v23, &v10);
        *((int128_t *)&v1) = *((int128_t *)&v25);
        *((int128_t *)&v0) = *((int128_t *)&v23);
        v2 = alloc::boxed::Box$LT$T$GT$::new::h8cfa0d4394d8defc();
        v3 = &g_600398;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(a0, v0, a2, a3);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
        return a0;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h0b384b4f21d54495(v0);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
