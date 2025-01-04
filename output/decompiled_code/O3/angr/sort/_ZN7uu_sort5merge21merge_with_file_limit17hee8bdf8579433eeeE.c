long long uu_sort::merge::merge_with_file_limit::hee8bdf8579433eee(unsigned long long a0[2], uint128_t a1[2], struct_0 *a2, unsigned long long a3)
{
    int v0[3];  // [sp-0x268], Other Possible Types: int
    int v1;  // [sp-0x258]
    int v2;  // [bp-0x248], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x240]
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
    unsigned long v15;  // [bp-0x1e0], Other Possible Types: unsigned long long
    int v16;  // [sp-0x1d8]
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
    unsigned long long v41;  // rcx
    void* v42;  // r14
    int v43;  // xmm0
    int v44;  // ymm0
    int v45;  // ymm0
    int v46;  // xmm1
    int v47;  // ymm1
    int v48;  // ymm1
    unsigned long long v49;  // r14
    int v51;  // ymm2
    int v52;  // ymm3
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2
    unsigned long long v56;  // rcx
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rax
    unsigned long long v59;  // rcx
    int v60;  // xmm0
    int v61;  // xmm1
    int v62;  // xmm2
    int v63;  // xmm3
    unsigned long long v64;  // rax
    int v65;  // xmm0
    unsigned long long v66;  // rdx
    unsigned long long v67;  // rax
    unsigned long long v68;  // rcx
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm1
    int v75;  // xmm2
    int v76;  // xmm3
    unsigned long long v77;  // rax
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    unsigned long long v81;  // rdx
    unsigned long long v82[2];  // rbx
    unsigned long v83;  // rdx
    unsigned long long v84;  // rsi

    v40 = a2->field_70;
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(a1) <= v40)
    {
        *((uint128_t *)&v38) = a1[1];
        *((uint128_t *)&v37) = a1[0];
        uu_sort::merge::merge_without_limit::h9b5b2c5845db30df(a0, &v37, a2, v41);
        return a0;
    }
    v42 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(a1);
    v43 = a1[0];
    v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
    v46 = a1[1];
    v48 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
    v1 = v46;
    v0 = v43;
    itertools::Itertools::chunks::hc1d2676d26c759d9(&v37, v0, v40);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if (v42)
    {
        v22 = 9223372036854775810;
        do
        {
            v13 = v13;
            v42 -= v40;
            if (v42 < v40)
                v42 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hebe185d9380178ad(&v13, &v37);
            if (v13 == v22)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v53 = *((int128_t *)&v13);
            v54 = *((int128_t *)&v15);
            v55 = (int128_t)(&v16)[8];
            v21 = v55;
            v20 = v54;
            v19 = v53;
            uu_sort::merge::merge_without_limit::h2875c70cfc96a2e1(v0, &v19, a2, v56);
            v57 = (long long)v0[0];
            v58 = (long long)(&v0)[8];
            v59 = (long long)v1;
            if (v23 == 3)
            {
                v82 = a0;
                v82[1] = v58;
                v82[1] = v59;
                v82[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                return a0;
            }
            v30 = *((long long *)&v9);
            v60 = (int128_t)v1;
            v61 = (int128_t)(&v2)[8];
            v62 = *((int128_t *)&v5);
            v63 = (int128_t)(&v6)[8];
            v29 = v63;
            v28 = v62;
            v27 = v61;
            v26 = v60;
            v23 = v57;
            v24 = v58;
            v25 = v59;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v19, a3, v23);
            v64 = (long long)(&v19)[8];
            if (v35 == 0x8000000000000000)
            {
                v82 = a0;
                *((void*)&v82[1]) = v20;
                goto LABEL_52c3da;
            }
            else
            {
                v65 = v20;
                v34 = (long long)v19;
                v35 = v64;
                v36 = v65;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(v0, &v34);
                v66 = (long long)v0[0];
                v67 = (long long)(&v0)[8];
                v68 = (long long)v1;
                if (v13 == 0x8000000000000000)
                {
                    v82 = a0;
                    v82[1] = v14;
                    v82[1] = v15;
LABEL_52c3da:
                    v82[0] = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v23, v84, v13);
                    ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                    return a0;
                }
            }
            v69 = (int128_t)(&v1)[8];
            v70 = (int128_t)(&v2)[8];
            v18 = v70;
            v16 = v69;
            v13 = v66;
            v14 = v67;
            v15 = v68;
            v71 = (int128_t)(&v29)[8];
            v8 = v71;
            v72 = (int128_t)(&v28)[8];
            v6 = v72;
            v73 = *((int128_t *)&v23);
            v74 = *((int128_t *)&v25);
            v75 = (int128_t)(&v26)[8];
            v76 = (int128_t)(&v27)[8];
            v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v4 = v76;
            v2 = v75;
            v1 = v74;
            v0 = v73;
            ::0x533c70::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&v13);
            v77 = uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(v0, a2);
            if (v77)
            {
                v82 = a0;
                v82[1] = v77;
                v82[1] = v83;
                v82[0] = 3;
                ::0x5270e0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&v13);
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                return a0;
            }
            v4 = (long long)(&v18)[8];
            v78 = *((int128_t *)&v13);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v79 = *((int128_t *)&v15);
            v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            v80 = (int128_t)(&v16)[8];
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v2 = v80;
            v1 = v79;
            v0 = v78;
            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&v19, v0);
            v81 = (long long)v19;
            v58 = (long long)(&v19)[8];
            v59 = (long long)v20;
            if (v31 == 0x8000000000000000)
            {
                vvar_659{reg 40} = a0;
                v82[1] = v58;
                v82[1] = v59;
                v82[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v37);
                return a0;
            }
            v31 = v81;
            v32 = v58;
            v33 = v59;
            ::0x5280f0::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v10, &v31, v31);
            v13 = v13;
        } while (v49 > v40);
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
    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
}
