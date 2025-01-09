long long uu_sort::merge::reader::h51625a591e347294(unsigned long a0, unsigned int *a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x1d8]
    char v1;  // [bp-0x1d0]
    unsigned long long v2;  // [sp-0x1c8]
    unsigned long long v3;  // [sp-0x1c0]
    char v4;  // [bp-0x1a9]
    unsigned long v5;  // [sp-0x1a8], Other Possible Types: unsigned long long
    int v6;  // [sp-0x198], Other Possible Types: unsigned long, unsigned long long
    int v7;  // [bp-0x190], Other Possible Types: char
    int v8;  // [bp-0x188]
    int v9;  // [sp-0x180]
    int v10;  // [sp-0x170]
    int v11;  // [sp-0x160]
    int v12;  // [sp-0x148]
    int v13;  // [sp-0x138]
    int v14;  // [sp-0x128]
    int v15;  // [sp-0x118]
    int v16;  // [sp-0x108]
    int v17;  // [sp-0xf8]
    int v18;  // [sp-0xe8]
    int v19;  // [sp-0xd8]
    int v20;  // [sp-0xc8]
    unsigned long long v21;  // [sp-0xb8]
    char v22;  // [bp-0xb0]
    char v23;  // [bp-0xa8]
    char v24;  // [bp-0x98]
    char v25;  // [bp-0x88]
    char v26;  // [bp-0x78]
    char v27;  // [bp-0x68]
    char v28;  // [bp-0x58]
    char v29;  // [bp-0x48]
    char v30;  // [bp-0x38]
    int v32;  // ymm0
    int v33;  // ymm1
    int v34;  // ymm2
    int v35;  // ymm3
    unsigned long long v36;  // rdi
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // xmm1
    int v43;  // ymm1
    int v44;  // xmm2
    int v45;  // ymm2
    int v46;  // xmm3
    int v47;  // ymm3
    unsigned long long v48;  // rax
    struct_0 *v49;  // r12
    void* v50;  // rax
    unsigned long long v51;  // rax
    int v52;  // xmm0
    int v53;  // xmm1
    int v54;  // xmm2
    int v55;  // xmm3
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm0
    int v59;  // xmm1
    unsigned long long v60;  // rdx

    v5 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v22, &v5, a2);
    if (*((long long *)&v23) == 0x8000000000000000)
        return 0;
    do
    {
        v36 = *((long long *)&v22);
        v21 = *((long long *)&v30);
        v37 = *((int128_t *)&v29);
        v20 = v37;
        v38 = *((int128_t *)&v28);
        v19 = v38;
        v39 = *((int128_t *)&v27);
        v18 = v39;
        v40 = *((int128_t *)&v23);
        v41 = (((v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v42 = *((int128_t *)&v24);
        v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
        v44 = *((int128_t *)&v25);
        v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
        v46 = *((int128_t *)&v26);
        v35 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
        v17 = v46;
        v16 = v44;
        v15 = v42;
        v14 = v40;
        if (v36 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v36, a2, &g_600408); /* do not return */
        v48 = v36 * 9;
        if (a1[2 * v48] == 3)
        {
            ::0x526ee0::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v14);
            v6 = v6;
        }
        else
        {
            v49 = &a1[2 * v48];
            v3 = a3;
            v2 = a4;
            v0 = _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::hc6f60a099c87a3aa(&v49->field_8);
            uu_sort::chunks::read::h83fa724a03d73d23(&v6, v49, &v23, 0, &v4, &v49->field_28, v0, *((int *)&v1));
            v50 = v6;
            if (v50)
                return v50;
            v6 = v6;
            if (!v7)
            {
                v51 = v49->field_0;
                v49->field_0 = 3;
                if (v6 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_600420); /* do not return */
                v6 = v51;
                v52 = *((int128_t *)&(&v49->field_0)[1]);
                v53 = *((int128_t *)((char *)&v49->field_8 + 8));
                v54 = *((int128_t *)((char *)&v49->field_18 + 8));
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v55 = *((int128_t *)((char *)&v49->field_28 + 8));
                v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v11 = v55;
                v10 = v54;
                v9 = v53;
                v7 = v52;
                v56 = (int128_t)(&v7)[8];
                v57 = (int128_t)(&v9)[8];
                v13 = v57;
                v12 = v56;
                ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af();
                ::0x526aa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v10);
                v58 = v12;
                v41 = ((v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                v59 = v13;
                v43 = ((v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                v8 = v59;
                v6 = v58;
                _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h15f37bc70ab25a56(&v6);
                v6 = v6;
            }
        }
        v6 = v6;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v22, &v5, v60);
    } while (*((long long *)&v23) != 0x8000000000000000);
}
