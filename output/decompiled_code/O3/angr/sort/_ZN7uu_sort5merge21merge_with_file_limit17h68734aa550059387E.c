long long uu_sort::merge::merge_with_file_limit::h68734aa550059387(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long long a4)
{
    char v0;  // [bp-0x260]
    int v1;  // [sp-0x248]
    int v2;  // [sp-0x238]
    unsigned long long v3;  // [sp-0x228]
    int v4;  // [bp-0x218], Other Possible Types: char
    int v6;  // [bp-0x208]
    char v7;  // [bp-0x200]
    int v8;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x1f0]
    int v10;  // [bp-0x1e8], Other Possible Types: unsigned long long
    int v12;  // [sp-0x1d8]
    int v14;  // [sp-0x1c8]
    char v15;  // [bp-0x1c0]
    void* v16;  // [sp-0x1b8]
    unsigned long long v17;  // [sp-0x1b0]
    void* v18;  // [sp-0x1a8]
    char v19;  // [bp-0x1a0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v20;  // [sp-0x198]
    unsigned long v21;  // [bp-0x190], Other Possible Types: unsigned long long
    int v22;  // [sp-0x188]
    int v24;  // [sp-0x178]
    unsigned long v25;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x160]
    unsigned long v27;  // [sp-0x158], Other Possible Types: unsigned long long
    int v28;  // [sp-0x150]
    int v29;  // [sp-0x140]
    int v30;  // [sp-0x130]
    int v31;  // [sp-0x120]
    unsigned long long v32;  // [sp-0x110]
    unsigned long v33;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x100]
    unsigned long long v35;  // [sp-0xf8]
    unsigned long long v36;  // [sp-0xf0]
    unsigned long long v37;  // [sp-0xe8]
    int v38;  // [sp-0xe0]
    char v39;  // [bp-0xd0]
    unsigned long long v41;  // r12
    unsigned long long v42;  // rax
    void* v43;  // rbx
    unsigned long long v44;  // rbx
    int v46;  // ymm0
    int v47;  // ymm1
    int v48;  // ymm2
    int v49;  // ymm3
    int v50;  // xmm0
    int v51;  // xmm1
    unsigned long long v52;  // rcx
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rax
    unsigned long long v55;  // rcx
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm2
    int v59;  // xmm3
    unsigned long long v60;  // rax
    int v61;  // xmm0
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    unsigned long long v64;  // rcx
    int v66;  // xmm0
    int v67;  // xmm1
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm2
    int v73;  // xmm3
    unsigned long long v74;  // rax
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    unsigned long long v78;  // rdx
    unsigned long long v79[2];  // rdx
    unsigned long long v80[2];  // rax
    unsigned long long v81[2];  // rdx
    unsigned long long v82[2];  // rcx
    unsigned long v83;  // rdx

    v41 = a3->field_70;
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hbd1c0dc342c9868d(&v0) <= v41)
    {
        v42 = uu_sort::merge::merge_without_limit::hde06756ea8b79739(a0, a1, a2, a3);
        return v42;
    }
    v43 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hbd1c0dc342c9868d(&v0);
    itertools::Itertools::chunks::hdc493e564df35cd7(&v39, a1, a2, v41);
    v16 = 0;
    v17 = 8;
    v18 = 0;
    if (v43)
    {
        do
        {
            v43 = v44 - v41;
            if (v44 < v41)
                v43 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc65e742b2db28af5(&v19, &v39);
            if (*((int *)&v19) == 3)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v3 = (long long)(&v22)[8];
            v50 = *((int128_t *)&v19);
            v51 = *((int128_t *)&v21);
            v2 = v51;
            v1 = v50;
            uu_sort::merge::merge_without_limit::h957af4587d2d4d7a(&v4, &v1, a3, v52);
            v53 = (long long)v4;
            v54 = (long long)(&v4)[8];
            v55 = (long long)v6;
            if (v25 == 3)
            {
                v79 = a0;
                v79[1] = v54;
                v79[1] = v55;
                v79[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v16);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h18550a823b66643e(&v39);
                return v42;
            }
            v32 = *((long long *)&v15);
            v56 = *((int128_t *)&v7);
            v57 = (int128_t)(&v8)[8];
            v58 = (int128_t)(&v10)[8];
            v59 = (int128_t)(&v12)[8];
            v31 = v59;
            v30 = v58;
            v29 = v57;
            v28 = v56;
            v25 = v53;
            v26 = v54;
            v27 = v55;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v1, a4, v25);
            v60 = (long long)(&v1)[8];
            if (v37 == 0x8000000000000000)
            {
                v80 = a0;
                *((void*)&v80[1]) = v2;
                v80[0] = 3;
                goto LABEL_52a601;
            }
            else
            {
                v61 = v2;
                v36 = (long long)v1;
                v37 = v60;
                v38 = v61;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&v4, &v36);
                v62 = (long long)v4;
                v63 = (long long)(&v4)[8];
                v64 = (long long)v6;
                if (v19 == 0x8000000000000000)
                {
                    v81 = a0;
                    v81[1] = v20;
                    v81[1] = v21;
                    v81[0] = 3;
LABEL_52a601:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v25, 0x8000000000000000, v81);
                    ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v16);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h18550a823b66643e(&v39);
                    return v42;
                }
            }
            v66 = *((int128_t *)&v7);
            v67 = (int128_t)(&v8)[8];
            v24 = v67;
            v22 = v66;
            v19 = v62;
            v20 = v63;
            v21 = v64;
            v68 = (int128_t)(&v31)[8];
            v14 = v68;
            v69 = (int128_t)(&v30)[8];
            v12 = v69;
            v70 = *((int128_t *)&v25);
            v71 = *((int128_t *)&v27);
            v72 = (int128_t)(&v28)[8];
            v73 = (int128_t)(&v29)[8];
            v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v10 = v73;
            v8 = v72;
            v6 = v71;
            v4 = v70;
            ::0x533c70::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&v19);
            v74 = uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(&v4, a3);
            if (v74)
            {
                v82 = a0;
                v82[1] = v74;
                v82[1] = v83;
                v82[0] = 3;
                ::0x5270e0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&v19);
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v16);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h18550a823b66643e(&v39);
                return v42;
            }
            v10 = (long long)(&v24)[8];
            v75 = *((int128_t *)&v19);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            v76 = *((int128_t *)&v21);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v77 = (int128_t)(&v22)[8];
            v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
            v8 = v77;
            v6 = v76;
            v4 = v75;
            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&v1, &v4);
            v78 = (long long)v1;
            v54 = (long long)(&v1)[8];
            v55 = (long long)v2;
            if (v33 == 0x8000000000000000)
            {
                vvar_628{reg 32} = a0;
                v79[1] = v54;
                v79[1] = v55;
                v79[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v16);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h18550a823b66643e(&v39);
                return v42;
            }
            v33 = v78;
            v34 = v54;
            v35 = v55;
            ::0x5280f0::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v16, &v33, v33);
        } while (v43 > v41);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc65e742b2db28af5(&v4, &v39);
    if ((int)v4 == 3)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9933d114d7b58fde(&v4);
        ::0x5288f0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&v25, &v16);
        *((int128_t *)&v6) = *((int128_t *)&v27);
        *((int128_t *)&v4) = *((int128_t *)&v25);
        v8 = alloc::boxed::Box$LT$T$GT$::new::h609552d0dc279bd4();
        v9 = &g_6002b8;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(a0, &v4, a3, a4);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h18550a823b66643e(&v39);
        return v42;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9933d114d7b58fde(&v4);
    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
}
