long long uu_sort::merge::merge_with_file_limit::hd33eb504f21b1692(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3[15], unsigned long long a4)
{
    char v0;  // [bp-0x2d8]
    unsigned long long v1;  // [sp-0x2c8]
    int v2[3];  // [bp-0x2b8]
    int v4;  // [bp-0x2a8]
    int v6;  // [bp-0x298], Other Possible Types: unsigned long long
    char v7;  // [bp-0x290], Other Possible Types: unsigned long long
    int v8;  // [sp-0x288]
    char v9;  // [bp-0x280]
    int v10;  // [sp-0x278]
    char v11;  // [bp-0x270]
    int v12;  // [sp-0x268]
    int v14;  // [sp-0x258]
    int v16;  // [sp-0x248]
    int v17;  // [sp-0x238]
    unsigned long long v18;  // [sp-0x228]
    char v19;  // [bp-0x220]
    void* v20;  // [sp-0x210]
    unsigned long long v21;  // [sp-0x208]
    void* v22;  // [sp-0x200]
    unsigned long long v23;  // [sp-0x1f8]
    char v24;  // [sp-0x1f0], Other Possible Types: unsigned long
    unsigned long long v25;  // [sp-0x1e8]
    char v26;  // [bp-0x1e0], Other Possible Types: unsigned long
    int v27;  // [sp-0x1d8]
    int v29;  // [sp-0x1c8]
    int v30;  // [sp-0x1b8]
    int v31;  // [sp-0x1a8]
    int v32;  // [sp-0x198]
    unsigned long long v33;  // [sp-0x188]
    unsigned long v34;  // [sp-0x180]
    unsigned long long v35;  // [sp-0x178]
    unsigned long v36;  // [sp-0x170]
    int v37;  // [sp-0x168]
    int v38;  // [sp-0x158]
    int v39;  // [sp-0x148]
    int v40;  // [sp-0x138]
    unsigned long long v41;  // [sp-0x128]
    unsigned long long v42;  // [sp-0x120]
    unsigned long long v43;  // [sp-0x118]
    int v44;  // [sp-0x110]
    unsigned long v45;  // [sp-0x100]
    unsigned long long v46;  // [sp-0xf8]
    unsigned long long v47;  // [sp-0xf0]
    int v48;  // [sp-0xe8]
    unsigned long long v49;  // [sp-0xd8]
    char v50;  // [bp-0xd0]
    unsigned long long v52;  // r12
    unsigned long long v53;  // rax
    unsigned long long v54;  // rbx
    void* v56;  // r13
    int v58;  // ymm0
    int v59;  // ymm1
    int v60;  // ymm2
    int v61;  // ymm3
    int v62;  // xmm0
    int v63;  // xmm1
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rcx
    int v67;  // xmm0
    int v68;  // xmm1
    int v69;  // xmm2
    int v70;  // xmm3
    unsigned long long v71;  // rax
    int v72;  // xmm0
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rax
    unsigned long long v75;  // rcx
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2
    int v80;  // xmm3
    int v81;  // xmm0
    int v82;  // xmm0
    int v83;  // xmm0
    int v84;  // xmm1
    int v85;  // xmm2
    int v86;  // xmm3
    unsigned long long v87;  // rax
    int v88;  // xmm0
    int v89;  // xmm0
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // xmm1
    int v93;  // xmm2
    int v94;  // xmm3
    unsigned long long v95;  // rdx
    int v96;  // xmm0
    unsigned long long v98[2];  // rdx
    unsigned long long v99[2];  // rax
    unsigned long long v100[2];  // rdx
    unsigned long long v101[2];  // rcx
    unsigned long v102;  // rdx

    v52 = a3[14];
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h14ac925f95880609(&v0) <= v52)
    {
        v53 = uu_sort::merge::merge_without_limit::h2a479b2dd5111a80(a0, a1, a2);
        return v53;
    }
    v54 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h14ac925f95880609(&v0);
    itertools::Itertools::chunks::he27e6631739399ae(&v50, a1, a2, v52);
    v20 = 0;
    v21 = 8;
    v22 = 0;
    if (v54)
    {
        *((int *)&v1) = (a3[6] == 0x8000000000000000 ? 0 : a3[7]);
        v23 = a3[8];
        v56 = v54;
        do
        {
            v56 -= v52;
            if (v56 < v52)
                v56 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7da568ce01995fdc(&v24, &v50);
            if (*((int *)&v24) == 3)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v18 = (long long)(&v27)[8];
            v62 = *((int128_t *)&v24);
            v63 = *((int128_t *)&v26);
            v17 = v63;
            v16 = v62;
            uu_sort::merge::merge_without_limit::h7e976ef640532e43(v2, &v16, a3);
            v64 = (long long)v2[0];
            v65 = (long long)(&v2)[8];
            v66 = (long long)v4;
            if (v34 == 3)
            {
                v98 = a0;
                v98[1] = v65;
                v98[1] = v66;
                v98[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v20);
                vvar_719{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::hbf097aef14ae1e80(&v50);
                return v53;
            }
            v41 = (long long)(&v12)[8];
            v67 = (int128_t)(&v4)[8];
            v68 = *((int128_t *)&v7);
            v69 = *((int128_t *)&v9);
            v70 = *((int128_t *)&v11);
            v40 = v70;
            v39 = v69;
            v38 = v68;
            v37 = v67;
            v34 = v64;
            v35 = v65;
            v36 = v66;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v16, a4);
            v71 = (long long)(&v16)[8];
            if (v43 == 0x8000000000000000)
            {
                v99 = a0;
                *((void*)&v99[1]) = v17;
                v99[0] = 3;
                goto LABEL_52be65;
            }
            else
            {
                v72 = v17;
                v42 = (long long)v16;
                v43 = v71;
                v44 = v72;
                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(v2, &v42, v1, v23);
                v73 = (long long)v2[0];
                v74 = (long long)(&v2)[8];
                v75 = (long long)v4;
                if (v24 == 0x8000000000000000)
                {
                    v100 = a0;
                    v100[1] = v25;
                    v100[1] = v26;
                    v100[0] = 3;
LABEL_52be65:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v34);
                    ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v20);
                    vvar_714{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::hbf097aef14ae1e80(&v50);
                    return v53;
                }
            }
            v33 = (long long)(&v14)[8];
            v76 = (int128_t)(&v12)[8];
            v32 = v76;
            v77 = (int128_t)(&v4)[8];
            v78 = *((int128_t *)&v7);
            v79 = *((int128_t *)&v9);
            v80 = *((int128_t *)&v11);
            v31 = v80;
            v30 = v79;
            v29 = v78;
            v27 = v77;
            v24 = v73;
            v25 = v74;
            v26 = v75;
            v81 = (int128_t)(&v40)[8];
            v12 = v81;
            v82 = (int128_t)(&v39)[8];
            v10 = v82;
            v83 = *((int128_t *)&v34);
            v84 = *((int128_t *)&v36);
            v85 = (int128_t)(&v37)[8];
            v86 = (int128_t)(&v38)[8];
            v8 = v86;
            v6 = v85;
            v4 = v84;
            *((void*)v2) = v83;
            v87 = uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(v2, a3, ::0x534300::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hf7ea0c81126ae9cf(&v24));
            if (v87)
            {
                v101 = a0;
                v101[1] = v87;
                v101[1] = v102;
                v101[0] = 3;
                ::0x527230::core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&v24);
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v20);
                vvar_709{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::hbf097aef14ae1e80(&v50);
                return v53;
            }
            v88 = (int128_t)(&v32)[8];
            v14 = v88;
            v89 = (int128_t)(&v31)[8];
            v12 = v89;
            v90 = (int128_t)(&v30)[8];
            v10 = v90;
            v91 = *((int128_t *)&v24);
            v92 = *((int128_t *)&v26);
            v59 = ((((v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
            v93 = (int128_t)(&v27)[8];
            v60 = (((v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
            v94 = (int128_t)(&v29)[8];
            v61 = (((v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
            v8 = v94;
            v6 = v93;
            v4 = v92;
            *((void*)v2) = v91;
            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&v16, v2);
            v95 = (long long)v16;
            v65 = (long long)(&v16)[8];
            v66 = (long long)v17;
            if (v45 == 0x8000000000000000)
            {
                vvar_725{reg 32} = a0;
                v98[1] = v65;
                v98[1] = v66;
                v98[0] = 3;
                ::0x5277e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v20);
                vvar_728{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::hbf097aef14ae1e80(&v50);
                return v53;
            }
            v49 = *((long long *)&v19);
            v96 = (int128_t)(&v17)[8];
            v58 = ...;
            v48 = v96;
            v45 = v95;
            v46 = v65;
            v47 = v66;
            ::0x528080::alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&v20, &v45);
            v54 = v56;
        } while (v54 > v52);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7da568ce01995fdc(v2, &v50);
    if ((int)v2[0] == 3)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hfd58a88f2d1708ef(v2);
        ::0x5288c0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&v24, &v20);
        *((int128_t *)&v4) = *((int128_t *)&v26);
        *((int128_t *)v2) = *((int128_t *)&v24);
        v6 = alloc::boxed::Box$LT$T$GT$::new::h139dfdaaee16a1fd();
        v7 = &g_600370;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(a0, v2, a3, a4);
        vvar_705{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::hbf097aef14ae1e80(&v50);
        return v53;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hfd58a88f2d1708ef(v2);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
