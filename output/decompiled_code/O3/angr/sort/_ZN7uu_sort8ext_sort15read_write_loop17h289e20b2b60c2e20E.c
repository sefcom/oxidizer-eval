long long uu_sort::ext_sort::read_write_loop::h289e20b2b60c2e20(unsigned long long a0[2], unsigned long long a1, void* a2, unsigned int a3, unsigned long long a4, unsigned long long a5[9])
{
    char *v0;  // [sp-0x248]
    char *v1;  // [sp-0x240]
    unsigned long long v2;  // [sp-0x238]
    unsigned long long v3[9];  // [sp-0x230]
    unsigned long v4;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x208]
    unsigned long v6;  // [sp-0x200], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x1f8]
    int v8;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x1e0]
    unsigned long v10;  // [sp-0x1d8], Other Possible Types: unsigned long long
    int v11;  // [sp-0x1d0]
    void* v12;  // [sp-0x1c0]
    unsigned long long v13;  // [sp-0x1b8]
    void* v14;  // [sp-0x1b0]
    void* v15;  // [sp-0x1a8]
    unsigned long long v16;  // [sp-0x1a0]
    void* v17;  // [sp-0x198]
    unsigned long long v18;  // [bp-0x188]
    char v19;  // [bp-0x180]
    int v20;  // [bp-0x178], Other Possible Types: char, unsigned long
    char v21;  // [bp-0x170]
    int v22;  // [bp-0x168], Other Possible Types: char
    int v24;  // [sp-0x158]
    char v25;  // [bp-0x150]
    int v26;  // [sp-0x148]
    int v27;  // [sp-0x138]
    int v28;  // [sp-0x128]
    int v29;  // [sp-0x118]
    unsigned long long v30;  // [sp-0x108]
    char v31;  // [bp-0xf8]
    char v32;  // [bp-0xf0]
    char v33;  // [bp-0xe8]
    char v34;  // [bp-0xd8]
    char v35;  // [bp-0xc8]
    char v36;  // [bp-0xb8]
    char v37;  // [bp-0xa8]
    char v38;  // [bp-0x98]
    char v39;  // [bp-0x88]
    unsigned long long v40;  // [sp-0x80]
    unsigned long long v41;  // [sp-0x78]
    int v42;  // [sp-0x70]
    unsigned long long v43;  // [sp-0x60]
    unsigned long long v44;  // [sp-0x58]
    unsigned long long v45;  // [sp-0x50]
    int v46;  // [sp-0x48]
    unsigned long long v47;  // [sp-0x38]
    unsigned long long v48;  // [bp+0x8]
    char v49;  // [bp+0x10]
    int v50;  // xmm0
    unsigned long long v51;  // rdx
    unsigned long long v52;  // rcx
    unsigned long long v53;  // rax
    unsigned long long v54;  // 4096
    unsigned int v57;  // ebx
    unsigned long long v58;  // r13
    int v59;  // xmm0
    int v60;  // ymm0
    int v61;  // ymm0
    unsigned long long v62[9];  // rax
    unsigned long long v64;  // rax
    unsigned long long v65[2];  // rcx
    unsigned long long v66;  // rsi
    unsigned long long v67;  // rdx
    unsigned long long v68;  // r12
    unsigned long long v69;  // rsi
    unsigned long long v70;  // rdx
    int v71;  // ymm1
    int v72;  // ymm2
    int v73;  // ymm3
    unsigned long long v74;  // rax
    unsigned long long v75;  // rdx
    unsigned long long v76;  // rax
    int v77;  // xmm0
    unsigned long long v78;  // rdx
    unsigned long long v79;  // rax
    unsigned long long v80;  // rcx
    int v81;  // xmm0
    int v82;  // xmm0
    int v83;  // xmm0
    int v84;  // xmm0
    int v85;  // xmm0
    int v86;  // xmm1
    int v87;  // xmm2
    int v88;  // xmm3
    unsigned long long v89;  // r8
    unsigned long long v90;  // rax
    unsigned long long v91;  // rsi
    unsigned long long v92;  // rbx
    unsigned long long v93[2];  // rcx
    unsigned long long v94[2];  // rax
    unsigned long long v95[2];  // rdx
    unsigned long long v96;  // rcx
    unsigned long long v97[2];  // rdx
    unsigned long long v98;  // rax
    unsigned long long v99[2];  // rcx
    unsigned long long v100;  // rsi
    unsigned long long v101;  // rdx
    unsigned long long v102;  // rax
    unsigned long long v103;  // rsi

    v50 = *((int128_t *)&v49);
    v10 = a1;
    v11 = v50;
    ::0x566d50::_$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&v20, a1);
    v51 = *((long long *)&v20);
    if (v51 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v52 = *((long long *)&v21);
    v53 = *((long long *)&v22);
    if (v51)
    {
        a0[1] = v6;
        a0[1] = v7;
        a0[0] = 9223372036854775811;
    }
    else
    {
        v6 = v52;
        v7 = v53;
        v15 = 0;
        v16 = 1;
        v17 = 0;
        if (a4 >= 8000)
            v54 = 8000;
        v57 = 0;
        v5 = a3;
        do
        {
            v57 = ::0x565c50::_$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(v57);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v20, v54);
            v3[0] = a5;
            v2 = v5;
            v1 = &v10;
            v0 = &v6;
            uu_sort::chunks::read::h2d67c43200642cfd(&v31, &v11, &v20, 1, a4, &v15);
            v58 = *((long long *)&v31);
            if (v58)
            {
                v64 = *((long long *)&v32);
                v65 = a0;
                v65[1] = v58;
                v65[1] = v64;
                v65[0] = 9223372036854775811;
                goto LABEL_568487;
            }
            if (!v32)
            {
                v20 = v11;
                ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v20, v66, v67);
                v92 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(v48, v66, v67);
                if (v92)
                {
                    v20 = v92;
                    v98 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(v48, v66, v67);
                    v99 = a0;
                    v99[0] = 9223372036854775811 + -1 - (v98 < 1);
                    v99[1] = v92;
                    v99[1] = v98;
                    goto LABEL_568485;
                }
                else
                {
                    a0[0] = 0x8000000000000000;
                    goto LABEL_568485;
                }
            }
        } while (v57 < 2);
        v59 = v11;
        v61 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v8 = v59;
        v12 = 0;
        v13 = 8;
        v14 = 0;
        v62 = a5;
        *((int *)&v9) = (v62[6] == 0x8000000000000000 ? 0 : v62[7]);
        v68 = v62[8];
        while (true)
        {
            v74 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(v48, v69, v70);
            v20 = v74;
            if (!v74)
            {
                v93 = a0;
                v93[1] = v14;
                *((int128_t *)&v93[0]) = *((int128_t *)&v12);
                ::0x565de0::core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&v20);
                break;
            }
            v4 = v74;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v31, a2, v75);
            v76 = *((long long *)&v32);
            if (v41 == 0x8000000000000000)
            {
                v94 = a0;
                *((int128_t *)&v94[1]) = *((int128_t *)&v33);
                v94[0] = 9223372036854775811;
                goto LABEL_568467;
            }
            v77 = *((int128_t *)&v33);
            v40 = *((long long *)&v31);
            v41 = v76;
            v42 = v77;
            uu_sort::ext_sort::write::h9263e275eb902110(&v20, v4, &v40, v9, v68, v5);
            v78 = v20;
            v79 = *((long long *)&v21);
            v80 = (long long)v22;
            if (v43 == 0x8000000000000000)
            {
                v95 = a0;
                v95[1] = v44;
                v95[1] = v45;
                v95[0] = 9223372036854775811;
LABEL_568467:
                ::0x565f70::core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&v4);
                goto LABEL_568471;
            }
            else
            {
                v47 = *((long long *)&v25);
                v81 = (int128_t)(&v22)[8];
                v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                v46 = v81;
                v43 = v78;
                v44 = v79;
                v45 = v80;
                ::0x566bf0::alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&v12, &v43, v43);
                uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(&v31, v4);
                if ((int)v8 == 3)
                    ::0x566070::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v31);
                v30 = *((long long *)&v39);
                v82 = *((int128_t *)&v38);
                v29 = v82;
                v83 = *((int128_t *)&v37);
                v28 = v83;
                v84 = *((int128_t *)&v36);
                v27 = v84;
                v85 = *((int128_t *)&v31);
                v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                v86 = *((int128_t *)&v33);
                v71 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                v87 = *((int128_t *)&v34);
                v72 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                v88 = *((int128_t *)&v35);
                v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                v26 = v88;
                v24 = v87;
                v22 = v86;
                v20 = v85;
                v3[0] = a5;
                v2 = v5;
                v1 = &v10;
                v0 = &v6;
                uu_sort::chunks::read::h2d67c43200642cfd(&v18, &v8, &v20, 0, v89, &v15);
                v90 = v18;
                if (v90)
                {
                    v96 = *((long long *)&v19);
                    v97 = a0;
                    v97[1] = v90;
                    v97[1] = v96;
                    v97[0] = 9223372036854775811;
LABEL_568471:
                    ::0x566670::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v12);
                    break;
                }
                else if (!v19)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&v8, v91, v75);
                    v8 = 3;
                }
            }
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&v8, v100, v101);
LABEL_568485:
LABEL_568487:
        ::0x565f90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v15);
        v102 = ::0x5666f0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(v6, v7);
        if (!v58)
            return v102;
    }
    v102 = ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v11, v103, v51);
    return v102;
}
