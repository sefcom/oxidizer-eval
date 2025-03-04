long long uu_sort::ext_sort::read_write_loop::hb7505e9f57c3babe(unsigned long long a0[2], unsigned long long a1, void* a2, unsigned int a3, unsigned long long a4, unsigned long long a5[9], unsigned int a6)
{
    char v0;  // [bp-0x208]
    unsigned long long v1[9];  // [sp-0x200]
    unsigned long v2;  // [sp-0x1f0]
    unsigned long long v3;  // [sp-0x1e8]
    unsigned long v4;  // [sp-0x1e0]
    unsigned long long v5;  // [sp-0x1d8]
    int v6;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x1b8]
    unsigned long long v8;  // [sp-0x1b0]
    int v9;  // [sp-0x1a8]
    void* v10;  // [sp-0x198]
    unsigned long long v11;  // [sp-0x190]
    void* v12;  // [sp-0x188]
    void* v13;  // [sp-0x180]
    unsigned long long v14;  // [sp-0x178]
    void* v15;  // [sp-0x170]
    unsigned long long v16;  // [bp-0x168]
    char v17;  // [bp-0x160]
    int v18;  // [bp-0x158], Other Possible Types: unsigned long
    int v19;  // [bp-0x158], Other Possible Types: unsigned long, char
    int v20;  // [sp-0x148], Other Possible Types: char
    int v21;  // [sp-0x138]
    int v22;  // [sp-0x128]
    int v23;  // [sp-0x118]
    int v24;  // [sp-0x108]
    int v25;  // [sp-0xf8]
    unsigned long long v26;  // [sp-0xe8]
    unsigned long v27;  // [sp-0xe0]
    unsigned long long v28;  // [sp-0xd8]
    unsigned long long v29;  // [sp-0xd0]
    unsigned long long v30;  // [bp-0xc8]
    char v31;  // [bp-0xc0]
    char v32;  // [bp-0xb8]
    char v33;  // [bp-0xa8]
    char v34;  // [bp-0x98]
    char v35;  // [bp-0x88]
    char v36;  // [bp-0x78]
    char v37;  // [bp-0x68]
    char v38;  // [bp-0x58]
    unsigned long v39;  // [sp-0x50]
    unsigned long long v40;  // [sp-0x48]
    int v41;  // [sp-0x40]
    char v42;  // [bp+0x10]
    int v43;  // xmm0
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned long long v46;  // rax
    unsigned int v48;  // ebx
    unsigned long long v49;  // r13
    int v50;  // xmm0
    int v51;  // ymm0
    int v52;  // ymm0
    unsigned long long v53[9];  // r15
    unsigned long long v55;  // rax
    unsigned long long v56[2];  // rcx
    unsigned long long v57;  // r12
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rsi
    int v60;  // ymm1
    int v61;  // ymm2
    int v62;  // ymm3
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax
    int v65;  // xmm0
    unsigned long long v66;  // rdx
    unsigned long long v67;  // rax
    unsigned long long v68;  // rcx
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm1
    int v74;  // xmm2
    int v75;  // xmm3
    unsigned long long v76;  // rax
    unsigned long long v77;  // rbx
    unsigned long long v78[2];  // rcx
    unsigned long long v79[2];  // rax
    unsigned long long v80[2];  // rdx
    unsigned long long v81;  // rcx
    unsigned long long v82[2];  // rdx
    unsigned long long v83;  // rax
    unsigned long long v84[2];  // rcx
    unsigned long long v85;  // rax

    v43 = *((int128_t *)&v42);
    v8 = a1;
    v9 = v43;
    ::0x566d50::_$LT$$RF$mut$u20$I$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1c21dc3d4ffd3568(&v19, a1);
    v44 = *((long long *)&v19);
    if (v44 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_601e70); /* do not return */
    v45 = *((long long *)&v19);
    v46 = *((long long *)&v20);
    if (v44)
    {
        a0[1] = v4;
        a0[1] = v5;
        a0[0] = 9223372036854775811;
    }
    else
    {
        v4 = v45;
        v5 = v46;
        v13 = 0;
        v14 = 1;
        v15 = 0;
        v48 = 0;
        v3 = a3;
        do
        {
            v48 = ::0x565c50::_$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(v48);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v19, (a4 < 8000 ? a4 : 8000));
            v1[0] = a5;
            uu_sort::chunks::read::h2d67c43200642cfd(&v30, &v9, &v19, 1, a4, &v13, &v4, &v8, *((int *)&v0));
            v49 = v30;
            if (v49)
            {
                v55 = *((long long *)&v31);
                v56 = a0;
                v56[1] = v49;
                v56[1] = v55;
                v56[0] = 9223372036854775811;
                goto LABEL_568a6a;
            }
            if (!v31)
            {
                v18 = v9;
                ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v19);
                v77 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(a6, a1, a2);
                if (v77)
                {
                    v18 = v77;
                    v83 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(a6, a1, a2);
                    v84 = a0;
                    v84[0] = 9223372036854775811 + 18446744073709551615 - (v83 < 1);
                    v84[1] = v77;
                    v84[1] = v83;
                    goto LABEL_568a68;
                }
                else
                {
                    a0[0] = 0x8000000000000000;
                    goto LABEL_568a68;
                }
            }
        } while (v48 < 2);
        v50 = v9;
        v52 = (v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
        v6 = v50;
        v10 = 0;
        v11 = 8;
        v12 = 0;
        v53 = a5;
        *((int *)&v7) = (a5[6] == 0x8000000000000000 ? 0 : v53[7]);
        v57 = v53[8];
        while (true)
        {
            v63 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(a6, v59, v58);
            v19 = v63;
            if (!v63)
            {
                v78 = a0;
                v78[1] = v12;
                *((int128_t *)&v78[0]) = *((int128_t *)&v10);
                ::0x565de0::core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&v19);
                break;
            }
            v2 = v63;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v19, a2);
            v64 = *((long long *)&v19);
            if (v40 == 0x8000000000000000)
            {
                v79 = a0;
                *((void*)&v79[1]) = v20;
                v79[0] = 9223372036854775811;
                goto LABEL_568a4a;
            }
            v65 = v20;
            v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
            v39 = v19;
            v40 = v64;
            v41 = v65;
            uu_sort::ext_sort::write::h468c6beb400873d3(&v30, v2, &v39, v7, v57, v3);
            v66 = v30;
            v67 = *((long long *)&v31);
            v68 = *((long long *)&v32);
            if (v27 == 0x8000000000000000)
            {
                v80 = a0;
                v80[1] = v28;
                v80[1] = v29;
                v80[0] = 9223372036854775811;
LABEL_568a4a:
                ::0x565f70::core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&v2);
                goto LABEL_568a54;
            }
            else
            {
                v27 = v66;
                v28 = v67;
                v29 = v68;
                ::0x566c60::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v10, &v27);
                uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(&v30, v2);
                if ((int)v6 == 3)
                    ::0x566070::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v30);
                v26 = *((long long *)&v38);
                v69 = *((int128_t *)&v37);
                v25 = v69;
                v70 = *((int128_t *)&v36);
                v24 = v70;
                v71 = *((int128_t *)&v35);
                v23 = v71;
                v72 = *((int128_t *)&v30);
                v52 = (((v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                v73 = *((int128_t *)&v32);
                v60 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
                v74 = *((int128_t *)&v33);
                v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                v75 = *((int128_t *)&v34);
                v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
                v22 = v75;
                v21 = v74;
                v20 = v73;
                v19 = v72;
                v1[0] = v53;
                uu_sort::chunks::read::h2d67c43200642cfd(&v16, &v6, &v19, 0, a4, &v13, &v4, &v8, *((int *)&v0));
                v76 = v16;
                if (v76)
                {
                    v81 = *((long long *)&v17);
                    v82 = a0;
                    v82[1] = v76;
                    v82[1] = v81;
                    v82[0] = 9223372036854775811;
LABEL_568a54:
                    ::0x566580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
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
LABEL_568a68:
LABEL_568a6a:
        ::0x565f90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v13);
        v85 = ::0x5666f0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(v4, v5);
        if (!v49)
            return v85;
    }
    v85 = ::0x5665c0::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v9);
    return v85;
}
