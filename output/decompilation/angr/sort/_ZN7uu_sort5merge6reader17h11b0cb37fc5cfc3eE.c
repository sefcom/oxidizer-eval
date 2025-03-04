long long uu_sort::merge::reader::h11b0cb37fc5cfc3e(unsigned long a0, unsigned int *a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x238]
    char v1;  // [bp-0x230]
    unsigned long long v2;  // [sp-0x228]
    unsigned long long v3;  // [sp-0x220]
    char v4;  // [bp-0x209]
    unsigned long v5;  // [sp-0x208]
    int v6;  // [sp-0x1f8]
    int v7;  // [sp-0x1e8]
    int v8;  // [sp-0x1d8]
    int v9;  // [sp-0x1c8]
    int v10;  // [sp-0x1b8]
    int v11;  // [sp-0x1a8], Other Possible Types: unsigned long long, unsigned long
    int v12;  // [bp-0x1a0], Other Possible Types: char
    int v13;  // [bp-0x198]
    int v14;  // [bp-0x190]
    int v15;  // [bp-0x188]
    int v16;  // [bp-0x180]
    int v17;  // [bp-0x178]
    int v18;  // [bp-0x170]
    int v19;  // [bp-0x168]
    int v20;  // [sp-0x160]
    int v21;  // [sp-0x150]
    int v22;  // [sp-0x140]
    int v23;  // [sp-0x128]
    int v24;  // [sp-0x118]
    int v25;  // [sp-0x108]
    int v26;  // [sp-0xf8]
    int v27;  // [sp-0xe8]
    int v28;  // [sp-0xd8]
    int v29;  // [sp-0xc8]
    unsigned long long v30;  // [sp-0xb8]
    char v31;  // [bp-0xb0]
    char v32;  // [bp-0xa8]
    char v33;  // [bp-0x98]
    char v34;  // [bp-0x88]
    char v35;  // [bp-0x78]
    char v36;  // [bp-0x68]
    char v37;  // [bp-0x58]
    char v38;  // [bp-0x48]
    char v39;  // [bp-0x38]
    unsigned long long v41;  // rdi
    int v42;  // xmm0
    int v43;  // xmm0
    int v44;  // xmm0
    int v45;  // xmm0
    int v46;  // xmm1
    int v47;  // ymm1
    int v48;  // xmm2
    int v49;  // ymm2
    int v50;  // xmm3
    int v51;  // ymm3
    unsigned int *v52;  // r12
    struct_0 *v53;  // r12
    void* v54;  // rax
    unsigned long long v55;  // rax
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2
    int v62;  // xmm3
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm3
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm2
    int v72;  // xmm3
    unsigned long long v73;  // rdx
    int v74;  // ymm0

    v5 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v31, &v5, a2);
    if (*((long long *)&v32) == 0x8000000000000000)
        return 0;
    do
    {
        v41 = *((long long *)&v31);
        v30 = *((long long *)&v39);
        v42 = *((int128_t *)&v38);
        v29 = v42;
        v43 = *((int128_t *)&v37);
        v28 = v43;
        v44 = *((int128_t *)&v36);
        v27 = v44;
        v45 = *((int128_t *)&v32);
        v74 = (((v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
        v46 = *((int128_t *)&v33);
        v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
        v48 = *((int128_t *)&v34);
        v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
        v50 = *((int128_t *)&v35);
        v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
        v26 = v50;
        v25 = v48;
        v24 = v46;
        v23 = v45;
        if (v41 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v41, a2, &g_600408); /* do not return */
        v52 = v41 * 120;
        if (*((int *)(a1 + v52)) == 3)
        {
            ::0x526ee0::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v23);
            v11 = v11;
        }
        else
        {
            v53 = v52 + a1;
            v3 = a3;
            v2 = a4;
            v0 = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::ha0d5386ede3f11a1(&v53->field_8);
            uu_sort::chunks::read::hb6526332bacfaf4d(&v11, v53, &v32, 0, &v4, &v53->field_58, v0, *((int *)&v1));
            v54 = v11;
            if (v54)
                return v54;
            v11 = v11;
            if (!v12)
            {
                v55 = v53->field_0;
                v53->field_0 = 3;
                if (v11 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_600420); /* do not return */
                v11 = v55;
                v56 = *((int128_t *)((char *)&v53->field_58 + 8));
                v22 = v56;
                v57 = *((int128_t *)((char *)&v53->field_48 + 8));
                v21 = v57;
                v58 = *((int128_t *)((char *)&v53->field_38 + 8));
                v20 = v58;
                v59 = *((int128_t *)&(&v53->field_0)[1]);
                v60 = *((int128_t *)((char *)&v53->field_8 + 8));
                v61 = *((int128_t *)((char *)&v53->field_18 + 8));
                v62 = *((int128_t *)((char *)&v53->field_28 + 8));
                v18 = v62;
                v16 = v61;
                v14 = v60;
                v12 = v59;
                v63 = (int128_t)(&v20)[8];
                v10 = v63;
                v64 = (int128_t)(&v12)[8];
                v65 = (int128_t)(&v14)[8];
                v66 = (int128_t)(&v16)[8];
                v67 = (int128_t)(&v18)[8];
                v9 = v67;
                v8 = v66;
                v7 = v65;
                v6 = v64;
                ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v11);
                ::0x526aa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v21);
                v68 = v10;
                v19 = v68;
                v69 = v6;
                v74 = (((((((v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                v70 = v7;
                v47 = ((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
                v71 = v8;
                v49 = ((v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
                v72 = v9;
                v51 = ((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                v17 = v72;
                v15 = v71;
                v13 = v70;
                v11 = v69;
                v54 = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::hd6042182e1cc1daa(&v11);
                v11 = v11;
                if (v54)
                    return v54;
            }
        }
        v11 = v11;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v31, &v5, v73);
    } while (*((long long *)&v32) != 0x8000000000000000);
}
