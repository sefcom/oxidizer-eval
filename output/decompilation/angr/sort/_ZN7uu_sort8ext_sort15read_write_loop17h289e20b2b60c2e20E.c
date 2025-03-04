long long uu_sort::ext_sort::read_write_loop::h289e20b2b60c2e20(unsigned long long a0[2], unsigned long long a1, void* a2, unsigned int a3, unsigned long long a4, unsigned long long a5[9], unsigned int a6)
{
    char v0;  // [bp-0x238]
    unsigned long long v1[9];  // [sp-0x230]
    unsigned long v2;  // [sp-0x218]
    unsigned long long v3;  // [sp-0x208]
    unsigned long v4;  // [sp-0x200]
    unsigned long long v5;  // [sp-0x1f8]
    int v6;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x1e0]
    unsigned long long v8;  // [sp-0x1d8]
    int v9;  // [sp-0x1d0]
    void* v10;  // [sp-0x1c0]
    unsigned long long v11;  // [sp-0x1b8]
    void* v12;  // [sp-0x1b0]
    void* v13;  // [sp-0x1a8]
    unsigned long long v14;  // [sp-0x1a0]
    void* v15;  // [sp-0x198]
    unsigned long long v16;  // [bp-0x188]
    char v17;  // [bp-0x180]
    int v18;  // [bp-0x178], Other Possible Types: unsigned long
    int v19;  // [bp-0x178], Other Possible Types: unsigned long, char
    int v20;  // [bp-0x150], Other Possible Types: char
    int v21;  // [sp-0x148]
    int v22;  // [sp-0x138]
    int v23;  // [sp-0x128]
    int v24;  // [sp-0x118]
    unsigned long long v25;  // [sp-0x108]
    char v26;  // [bp-0xf8]
    char v27;  // [bp-0xf0]
    char v28;  // [bp-0xe8]
    char v29;  // [bp-0xd8]
    char v30;  // [bp-0xc8]
    char v31;  // [bp-0xb8]
    char v32;  // [bp-0xa8]
    char v33;  // [bp-0x98]
    char v34;  // [bp-0x88]
    unsigned long long v35;  // [sp-0x80]
    unsigned long long v36;  // [sp-0x78]
    int v37;  // [sp-0x70]
    unsigned long v38;  // [sp-0x60]
    unsigned long long v39;  // [sp-0x58]
    unsigned long long v40;  // [sp-0x50]
    int v41;  // [sp-0x48]
    unsigned long long v42;  // [sp-0x38]
    char v43;  // [bp+0x10]
    int v44;  // xmm0
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rcx
    unsigned long long v47;  // rax
    unsigned int v49;  // ebx
    unsigned long long v50;  // r13
    int v51;  // xmm0
    int v52;  // ymm0
    int v53;  // ymm0
    unsigned long long v54[9];  // rax
    unsigned long long v56;  // rax
    unsigned long long v57[2];  // rcx
    unsigned long long v58;  // r12
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rsi
    int v61;  // ymm1
    int v62;  // ymm2
    int v63;  // ymm3
    unsigned long long v64;  // rax
    unsigned long long v65;  // rax
    int v66;  // xmm0
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rax
    unsigned long long v69;  // rcx
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm1
    int v76;  // xmm2
    int v77;  // xmm3
    unsigned long long v78;  // rax
    unsigned long long v79;  // rbx
    unsigned long long v80[2];  // rcx
    unsigned long long v81[2];  // rax
    unsigned long long v82[2];  // rdx
    unsigned long long v83;  // rcx
    unsigned long long v84[2];  // rdx
    unsigned long long v85;  // rax
    unsigned long long v86[2];  // rcx
    unsigned long long v87;  // rax

    v44 = *((int128_t *)&v43);
    v8 = a1;
    v9 = v44;
    ::0x566d50::_$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&v19, a1);
    v45 = *((long long *)&v19);
    if (v45 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_601e70); /* do not return */
    v46 = *((long long *)&v19);
    v47 = *((long long *)&v20);
    if (v45)
    {
        a0[1] = v4;
        a0[1] = v5;
        a0[0] = 9223372036854775811;
    }
    else
    {
        v4 = v46;
        v5 = v47;
        v13 = 0;
        v14 = 1;
        v15 = 0;
        v49 = 0;
        v3 = a3;
        do
        {
            v49 = ::0x565c50::_$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(v49);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v19, (a4 < 8000 ? a4 : 8000));
            v1[0] = a5;
            uu_sort::chunks::read::h2d67c43200642cfd(&v26, &v9, &v19, 1, a4, &v13, &v4, &v8, *((int *)&v0));
            v50 = *((long long *)&v26);
            if (v50)
            {
                v56 = *((long long *)&v27);
                v57 = a0;
                v57[1] = v50;
                v57[1] = v56;
                v57[0] = 9223372036854775811;
                goto LABEL_568487;
            }
            if (!v27)
            {
                v18 = v9;
                ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v19);
                v79 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(a6, a1, a2);
                if (!v79)
                {
                    a0[0] = 0x8000000000000000;
                    goto LABEL_568485;
                }
                else
                {
                    v18 = v79;
                    v85 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(a6, a1, a2);
                    v86 = a0;
                    v86[0] = 9223372036854775811 + 18446744073709551615 - (v85 < 1);
                    v86[1] = v79;
                    v86[1] = v85;
                    goto LABEL_568485;
                }
            }
        } while (v49 < 2);
        v51 = v9;
        v53 = (v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
        v6 = v51;
        v10 = 0;
        v11 = 8;
        v12 = 0;
        v54 = a5;
        *((int *)&v7) = (v54[6] == 0x8000000000000000 ? 0 : v54[7]);
        v58 = v54[8];
        while (true)
        {
            v64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(a6, v60, v59);
            v19 = v64;
            if (!v64)
            {
                v80 = a0;
                v80[1] = v12;
                *((int128_t *)&v80[0]) = *((int128_t *)&v10);
                ::0x565de0::core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&v19);
                break;
            }
            v2 = v64;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v26, a2);
            v65 = *((long long *)&v27);
            if (v36 == 0x8000000000000000)
            {
                v81 = a0;
                *((int128_t *)&v81[1]) = *((int128_t *)&v28);
                v81[0] = 9223372036854775811;
                goto LABEL_568467;
            }
            v66 = *((int128_t *)&v28);
            v35 = *((long long *)&v26);
            v36 = v65;
            v37 = v66;
            uu_sort::ext_sort::write::h9263e275eb902110(&v19, v2, &v35, v7, v58, v3);
            v67 = v19;
            v68 = *((long long *)&v19);
            v69 = *((long long *)&v20);
            if (v38 == 0x8000000000000000)
            {
                v82 = a0;
                v82[1] = v39;
                v82[1] = v40;
                v82[0] = 9223372036854775811;
LABEL_568467:
                ::0x565f70::core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&v2);
                goto LABEL_568471;
            }
            else
            {
                v42 = (long long)(&v20)[8];
                v70 = (int128_t)(&v20)[8];
                v53 = (v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
                v41 = v70;
                v38 = v67;
                v39 = v68;
                v40 = v69;
                ::0x566bf0::alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&v10, &v38);
                uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(&v26, v2);
                if ((int)v6 == 3)
                    ::0x566070::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v26);
                v25 = *((long long *)&v34);
                v71 = *((int128_t *)&v33);
                v24 = v71;
                v72 = *((int128_t *)&v32);
                v23 = v72;
                v73 = *((int128_t *)&v31);
                v22 = v73;
                v74 = *((int128_t *)&v26);
                v53 = (((v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                v75 = *((int128_t *)&v28);
                v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
                v76 = *((int128_t *)&v29);
                v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                v77 = *((int128_t *)&v30);
                v63 = v63 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                v21 = v77;
                v20 = v76;
                v20 = v75;
                v19 = v74;
                v1[0] = a5;
                uu_sort::chunks::read::h2d67c43200642cfd(&v16, &v6, &v19, 0, a4, &v13, &v4, &v8, *((int *)&v0));
                v78 = v16;
                if (v78)
                {
                    v83 = *((long long *)&v17);
                    v84 = a0;
                    v84[1] = v78;
                    v84[1] = v83;
                    v84[0] = 9223372036854775811;
LABEL_568471:
                    ::0x566670::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&v10);
                    break;
                }
                else if (!v17)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&v6);
                    v6 = 3;
                }
            }
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&v6);
LABEL_568485:
LABEL_568487:
        ::0x565f90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v13);
        v87 = ::0x5666f0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(v4, v5);
        if (!v50)
            return v87;
    }
    v87 = ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v9);
    return v87;
}
