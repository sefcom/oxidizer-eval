long long uu_sort::merge::reader::h51625a591e347294(unsigned long a0, unsigned int *a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x1d8]
    char v1;  // [bp-0x1d0]
    unsigned long long v2;  // [sp-0x1c8]
    unsigned long long v3;  // [sp-0x1c0]
    char v4;  // [bp-0x1a9]
    unsigned long v5;  // [sp-0x1a8]
    int v6;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
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
    unsigned long long v32;  // rdi
    int v33;  // xmm0
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm0
    int v37;  // xmm1
    int v38;  // ymm1
    int v39;  // xmm2
    int v40;  // ymm2
    int v41;  // xmm3
    int v42;  // ymm3
    unsigned long long v43;  // rax
    struct_0 *v44;  // r12
    void* v45;  // rax
    unsigned long long v46;  // rax
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2
    int v50;  // xmm3
    int v51;  // xmm0
    int v52;  // xmm1
    int v53;  // xmm0
    int v54;  // xmm1
    unsigned long long v55;  // rdx
    int v56;  // ymm0

    v5 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v22, &v5, a2);
    if (*((long long *)&v23) == 0x8000000000000000)
        return 0;
    do
    {
        v32 = *((long long *)&v22);
        v21 = *((long long *)&v30);
        v33 = *((int128_t *)&v29);
        v20 = v33;
        v34 = *((int128_t *)&v28);
        v19 = v34;
        v35 = *((int128_t *)&v27);
        v18 = v35;
        v36 = *((int128_t *)&v23);
        v56 = (((v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
        v37 = *((int128_t *)&v24);
        v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
        v39 = *((int128_t *)&v25);
        v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
        v41 = *((int128_t *)&v26);
        v42 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
        v17 = v41;
        v16 = v39;
        v15 = v37;
        v14 = v36;
        if (v32 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v32, a2, &g_600408); /* do not return */
        v43 = v32 * 9;
        if (a1[2 * v43] == 3)
        {
            ::0x526ee0::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v14);
            v6 = v6;
        }
        else
        {
            v44 = &a1[2 * v43];
            v3 = a3;
            v2 = a4;
            v0 = _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::hc6f60a099c87a3aa(&v44->field_8);
            uu_sort::chunks::read::h83fa724a03d73d23(&v6, v44, &v23, 0, &v4, &v44->field_28, v0, *((int *)&v1));
            v45 = v6;
            if (v45)
                return v45;
            v6 = v6;
            if (!v7)
            {
                v46 = v44->field_0;
                v44->field_0 = 3;
                if (v6 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_600420); /* do not return */
                v6 = v46;
                v47 = *((int128_t *)&(&v44->field_0)[1]);
                v48 = *((int128_t *)((char *)&v44->field_8 + 8));
                v49 = *((int128_t *)((char *)&v44->field_18 + 8));
                v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                v50 = *((int128_t *)((char *)&v44->field_28 + 8));
                v42 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                v11 = v50;
                v10 = v49;
                v9 = v48;
                v7 = v47;
                v51 = (int128_t)(&v7)[8];
                v52 = (int128_t)(&v9)[8];
                v13 = v52;
                v12 = v51;
                ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v6);
                ::0x526aa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v10);
                v53 = v12;
                v56 = ((v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                v54 = v13;
                v38 = ((v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v8 = v54;
                v6 = v53;
                _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h15f37bc70ab25a56(&v6);
                v6 = v6;
            }
        }
        v6 = v6;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v22, &v5, v55);
    } while (*((long long *)&v23) != 0x8000000000000000);
}
