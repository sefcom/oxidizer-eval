long long uu_sort::merge::reader::h11b0cb37fc5cfc3e(unsigned long a0, unsigned int *a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x238]
    char v1;  // [bp-0x230]
    unsigned long long v2;  // [sp-0x228]
    unsigned long long v3;  // [sp-0x220]
    char v4;  // [bp-0x209]
    unsigned long v5;  // [sp-0x208], Other Possible Types: unsigned long long
    int v6;  // [sp-0x1f8]
    int v7;  // [sp-0x1e8]
    int v8;  // [sp-0x1d8]
    int v9;  // [sp-0x1c8]
    int v10;  // [sp-0x1b8]
    int v11;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
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
    int v41;  // ymm0
    int v42;  // ymm1
    int v43;  // ymm2
    int v44;  // ymm3
    unsigned long long v45;  // rdi
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // xmm1
    int v52;  // ymm1
    int v53;  // xmm2
    int v54;  // ymm2
    int v55;  // xmm3
    int v56;  // ymm3
    unsigned int *v57;  // r12
    struct_0 *v58;  // r12
    void* v59;  // rax
    unsigned long long v60;  // rax
    int v61;  // xmm0
    int v62;  // xmm0
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
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm1
    int v76;  // xmm2
    int v77;  // xmm3
    unsigned long long v78;  // rdx

    v5 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v31, &v5, a2);
    if (*((long long *)&v32) == 0x8000000000000000)
        return 0;
    do
    {
        v45 = *((long long *)&v31);
        v30 = *((long long *)&v39);
        v46 = *((int128_t *)&v38);
        v29 = v46;
        v47 = *((int128_t *)&v37);
        v28 = v47;
        v48 = *((int128_t *)&v36);
        v27 = v48;
        v49 = *((int128_t *)&v32);
        v50 = (((v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
        v51 = *((int128_t *)&v33);
        v42 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
        v53 = *((int128_t *)&v34);
        v43 = v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
        v55 = *((int128_t *)&v35);
        v44 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
        v26 = v55;
        v25 = v53;
        v24 = v51;
        v23 = v49;
        if (v45 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v45, a2, &g_600408); /* do not return */
        v57 = v45 * 120;
        if (*((int *)(a1 + v57)) == 3)
        {
            ::0x526ee0::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v23);
            v11 = v11;
        }
        else
        {
            v58 = v57 + a1;
            v3 = a3;
            v2 = a4;
            v0 = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::ha0d5386ede3f11a1(&v58->field_8);
            uu_sort::chunks::read::hb6526332bacfaf4d(&v11, v58, &v32, 0, &v4, &v58->field_58, v0, *((int *)&v1));
            v59 = v11;
            if (v59)
                return v59;
            v11 = v11;
            if (!v12)
            {
                v60 = v58->field_0;
                v58->field_0 = 3;
                if (v11 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_600420); /* do not return */
                v11 = v60;
                v61 = *((int128_t *)((char *)&v58->field_58 + 8));
                v22 = v61;
                v62 = *((int128_t *)((char *)&v58->field_48 + 8));
                v21 = v62;
                v63 = *((int128_t *)((char *)&v58->field_38 + 8));
                v20 = v63;
                v64 = *((int128_t *)&(&v58->field_0)[1]);
                v65 = *((int128_t *)((char *)&v58->field_8 + 8));
                v66 = *((int128_t *)((char *)&v58->field_18 + 8));
                v67 = *((int128_t *)((char *)&v58->field_28 + 8));
                v18 = v67;
                v16 = v66;
                v14 = v65;
                v12 = v64;
                v68 = (int128_t)(&v20)[8];
                v10 = v68;
                v69 = (int128_t)(&v12)[8];
                v70 = (int128_t)(&v14)[8];
                v71 = (int128_t)(&v16)[8];
                v72 = (int128_t)(&v18)[8];
                v9 = v72;
                v8 = v71;
                v7 = v70;
                v6 = v69;
                ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af();
                ::0x526aa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v21);
                v73 = v10;
                v19 = v73;
                v74 = v6;
                v50 = (((((((v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                v75 = v7;
                v52 = ((v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
                v76 = v8;
                v54 = ((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                v77 = v9;
                v56 = ((v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                v17 = v77;
                v15 = v76;
                v13 = v75;
                v11 = v74;
                v59 = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::hd6042182e1cc1daa(&v11);
                v11 = v11;
                if (v59)
                    return v59;
            }
        }
        v11 = v11;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v31, &v5, v78);
    } while (*((long long *)&v32) != 0x8000000000000000);
}
