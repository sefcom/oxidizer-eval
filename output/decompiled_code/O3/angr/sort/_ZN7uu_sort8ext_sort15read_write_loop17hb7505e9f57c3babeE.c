long long uu_sort::ext_sort::read_write_loop::hb7505e9f57c3babe(unsigned long long a0[2], unsigned long long a1, void* a2, unsigned int a3, unsigned long long a4, unsigned long long a5[9])
{
    char *v0;  // [sp-0x218]
    char *v1;  // [sp-0x210]
    unsigned long long v2;  // [sp-0x208]
    unsigned long long v3[9];  // [sp-0x200]
    unsigned long v4;  // [sp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x1e8]
    unsigned long v6;  // [sp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x1d8]
    int v8;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x1b8]
    unsigned long v10;  // [sp-0x1b0], Other Possible Types: unsigned long long
    int v11;  // [sp-0x1a8]
    void* v12;  // [sp-0x198]
    unsigned long long v13;  // [sp-0x190]
    void* v14;  // [sp-0x188]
    void* v15;  // [sp-0x180]
    unsigned long long v16;  // [sp-0x178]
    void* v17;  // [sp-0x170]
    unsigned long long v18;  // [bp-0x168]
    char v19;  // [bp-0x160]
    int v20;  // [bp-0x158], Other Possible Types: char, unsigned long
    char v21;  // [bp-0x150]
    int v22;  // [bp-0x148], Other Possible Types: char
    int v23;  // [sp-0x138]
    int v24;  // [sp-0x128]
    int v25;  // [sp-0x118]
    int v26;  // [sp-0x108]
    int v27;  // [sp-0xf8]
    unsigned long long v28;  // [sp-0xe8]
    unsigned long v29;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v30;  // [sp-0xd8]
    unsigned long long v31;  // [sp-0xd0]
    unsigned long long v32;  // [bp-0xc8]
    char v33;  // [bp-0xc0]
    char v34;  // [bp-0xb8]
    char v35;  // [bp-0xa8]
    char v36;  // [bp-0x98]
    char v37;  // [bp-0x88]
    char v38;  // [bp-0x78]
    char v39;  // [bp-0x68]
    char v40;  // [bp-0x58]
    unsigned long v41;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v42;  // [sp-0x48]
    int v43;  // [sp-0x40]
    unsigned long long v44;  // [bp+0x8]
    char v45;  // [bp+0x10]
    int v46;  // xmm0
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    unsigned long long v50;  // 4096
    unsigned int v53;  // ebx
    unsigned long long v54;  // r13
    int v55;  // xmm0
    int v56;  // ymm0
    int v57;  // ymm0
    unsigned long long v58[9];  // r15
    unsigned long long v60;  // rax
    unsigned long long v61[2];  // rcx
    unsigned long long v62;  // rsi
    unsigned long long v63;  // rdx
    unsigned long long v64;  // r12
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rdx
    int v67;  // ymm1
    int v68;  // ymm2
    int v69;  // ymm3
    unsigned long long v70;  // rax
    unsigned long long v71;  // rdx
    unsigned long long v72;  // rax
    int v73;  // xmm0
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rax
    unsigned long long v76;  // rcx
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // xmm0
    int v80;  // xmm0
    int v81;  // xmm1
    int v82;  // xmm2
    int v83;  // xmm3
    unsigned long long v84;  // r8
    unsigned long long v85;  // rax
    unsigned long long v86;  // rsi
    unsigned long long v87;  // rbx
    unsigned long long v88[2];  // rcx
    unsigned long long v89[2];  // rax
    unsigned long long v90[2];  // rdx
    unsigned long long v91;  // rcx
    unsigned long long v92[2];  // rdx
    unsigned long long v93;  // rax
    unsigned long long v94[2];  // rcx
    unsigned long long v95;  // rsi
    unsigned long long v96;  // rdx
    unsigned long long v97;  // rax
    unsigned long long v98;  // rsi

    v46 = *((int128_t *)&v45);
    v10 = a1;
    v11 = v46;
    ::0x566d50::_$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&v20, a1);
    v47 = *((long long *)&v20);
    if (v47 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v48 = *((long long *)&v21);
    v49 = *((long long *)&v22);
    if (v47)
    {
        a0[1] = v6;
        a0[1] = v7;
        a0[0] = 9223372036854775811;
    }
    else
    {
        v6 = v48;
        v7 = v49;
        v15 = 0;
        v16 = 1;
        v17 = 0;
        if (a4 >= 8000)
            v50 = 8000;
        v53 = 0;
        v5 = a3;
        do
        {
            v53 = ::0x565c50::_$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(v53);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v20, v50);
            v3[0] = a5;
            v2 = v5;
            v1 = &v10;
            v0 = &v6;
            uu_sort::chunks::read::h2d67c43200642cfd(&v32, &v11, &v20, 1, a4, &v15);
            v54 = v32;
            if (v54)
            {
                v60 = *((long long *)&v33);
                v61 = a0;
                v61[1] = v54;
                v61[1] = v60;
                v61[0] = 9223372036854775811;
                goto LABEL_568a6a;
            }
            if (!v33)
            {
                v20 = v11;
                ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v20, v62, v63);
                v87 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(v44, v62, v63);
                if (v87)
                {
                    v20 = v87;
                    v93 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(v44, v62, v63);
                    v94 = a0;
                    v94[0] = 9223372036854775811 + -1 - (v93 < 1);
                    v94[1] = v87;
                    v94[1] = v93;
                    goto LABEL_568a68;
                }
                else
                {
                    a0[0] = 0x8000000000000000;
                    goto LABEL_568a68;
                }
            }
        } while (v53 < 2);
        v55 = v11;
        v57 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
        v8 = v55;
        v12 = 0;
        v13 = 8;
        v14 = 0;
        v58 = a5;
        *((int *)&v9) = (a5[6] == 0x8000000000000000 ? 0 : v58[7]);
        v64 = v58[8];
        while (true)
        {
            v70 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(v44, v65, v66);
            v20 = v70;
            if (!v70)
            {
                v88 = a0;
                v88[1] = v14;
                *((int128_t *)&v88[0]) = *((int128_t *)&v12);
                ::0x565de0::core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&v20);
                break;
            }
            v4 = v70;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v20, a2, v71);
            v72 = (long long)(&v20)[8];
            if (v42 == 0x8000000000000000)
            {
                v89 = a0;
                *((void*)&v89[1]) = v22;
                v89[0] = 9223372036854775811;
                goto LABEL_568a4a;
            }
            v73 = v22;
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v41 = v20;
            v42 = v72;
            v43 = v73;
            uu_sort::ext_sort::write::h468c6beb400873d3(&v32, v4, &v41, v9, v64, v5);
            v74 = v32;
            v75 = *((long long *)&v33);
            v76 = *((long long *)&v34);
            if (v29 == 0x8000000000000000)
            {
                v90 = a0;
                v90[1] = v30;
                v90[1] = v31;
                v90[0] = 9223372036854775811;
LABEL_568a4a:
                ::0x565f70::core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&v4);
                goto LABEL_568a54;
            }
            else
            {
                v29 = v74;
                v30 = v75;
                v31 = v76;
                ::0x566c60::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v12, &v29, v29);
                uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(&v32, v4);
                if ((int)v8 == 3)
                    ::0x566070::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v32);
                v28 = *((long long *)&v40);
                v77 = *((int128_t *)&v39);
                v27 = v77;
                v78 = *((int128_t *)&v38);
                v26 = v78;
                v79 = *((int128_t *)&v37);
                v25 = v79;
                v80 = *((int128_t *)&v32);
                v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                v81 = *((int128_t *)&v34);
                v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                v82 = *((int128_t *)&v35);
                v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
                v83 = *((int128_t *)&v36);
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                v24 = v83;
                v23 = v82;
                v22 = v81;
                v20 = v80;
                v3[0] = v58;
                v2 = v5;
                v1 = &v10;
                v0 = &v6;
                uu_sort::chunks::read::h2d67c43200642cfd(&v18, &v8, &v20, 0, v84, &v15);
                v85 = v18;
                if (v85)
                {
                    v91 = *((long long *)&v19);
                    v92 = a0;
                    v92[1] = v85;
                    v92[1] = v91;
                    v92[0] = 9223372036854775811;
LABEL_568a54:
                    ::0x566580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v12);
                    break;
                }
                else if (!v19)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&v8, v86, v71);
                    v8 = 3;
                }
            }
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h5e99902b231fa387(&v8, v95, v96);
LABEL_568a68:
LABEL_568a6a:
        ::0x565f90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v15);
        v97 = ::0x5666f0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(v6, v7);
        if (!v54)
            return v97;
    }
    v97 = ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v11, v98, v47);
    return v97;
}
