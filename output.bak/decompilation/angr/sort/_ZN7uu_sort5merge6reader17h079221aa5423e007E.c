long long uu_sort::merge::reader::h079221aa5423e007(unsigned long a0, unsigned int *a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [bp-0x1a0]
    unsigned long long v1;  // [sp-0x198]
    unsigned long long v2;  // [sp-0x190]
    char v3;  // [bp-0x179]
    unsigned long long v4;  // [sp-0x178]
    unsigned long v5;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x168]
    unsigned long v7;  // [sp-0x160], Other Possible Types: unsigned long long
    int v8;  // [bp-0x158], Other Possible Types: char
    int v9;  // [sp-0x148]
    int v10;  // [sp-0x138]
    int v11;  // [sp-0x128]
    int v12;  // [sp-0x118]
    int v13;  // [sp-0x108]
    int v14;  // [sp-0xf8]
    int v15;  // [sp-0xe8]
    int v16;  // [sp-0xd8]
    int v17;  // [sp-0xc8]
    unsigned long long v18;  // [sp-0xb8]
    char v19;  // [bp-0xb0]
    char v20;  // [bp-0xa8]
    char v21;  // [bp-0x98]
    char v22;  // [bp-0x88]
    char v23;  // [bp-0x78]
    char v24;  // [bp-0x68]
    char v25;  // [bp-0x58]
    char v26;  // [bp-0x48]
    char v27;  // [bp-0x38]
    int v29;  // ymm0
    int v30;  // ymm1
    int v31;  // ymm2
    int v32;  // ymm3
    unsigned long long v33;  // rdi
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm0
    int v37;  // xmm0
    int v38;  // ymm0
    int v39;  // xmm1
    int v40;  // ymm1
    int v41;  // xmm2
    int v42;  // ymm2
    int v43;  // xmm3
    unsigned int *v44;  // r14
    struct_0 *v45;  // r14
    void* v46;  // rax
    unsigned long long v47;  // rax
    int v48;  // xmm0
    int v49;  // xmm1
    int v50;  // xmm2
    unsigned long long v51;  // rdx

    v5 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v19, &v5, a2);
    if (*((long long *)&v20) == 0x8000000000000000)
        return 0;
    v6 = a4;
    do
    {
        v33 = *((long long *)&v19);
        v18 = *((long long *)&v27);
        v34 = *((int128_t *)&v26);
        v17 = v34;
        v35 = *((int128_t *)&v25);
        v16 = v35;
        v36 = *((int128_t *)&v24);
        v15 = v36;
        v37 = *((int128_t *)&v20);
        v38 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
        v39 = *((int128_t *)&v21);
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
        v41 = *((int128_t *)&v22);
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
        v43 = *((int128_t *)&v23);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
        v14 = v43;
        v13 = v41;
        v12 = v39;
        v11 = v37;
        if (v33 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v33, a2, &g_600408); /* do not return */
        v44 = v33 * 56;
        if (*((int *)(a1 + v44)) == 3)
        {
            ::0x526ee0::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v11);
            v7 = v7;
        }
        else
        {
            v45 = v44 + a1;
            v2 = a3;
            v1 = v6;
            uu_sort::chunks::read::h4da7a75b34a6d647(&v7, v45, &v20, 0, &v3, &v45->field_8, (char *)&v45->field_18 + 8, *((int *)&v0));
            v46 = v7;
            if (v46)
                return v46;
            v7 = v7;
            if (!v8)
            {
                v47 = v45->field_0;
                v45->field_0 = 3;
                if (v7 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_600420); /* do not return */
                v7 = v47;
                v48 = *((int128_t *)&(&v45->field_0)[1]);
                v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                v49 = *((int128_t *)((char *)&v45->field_8 + 8));
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                v50 = *((int128_t *)((char *)&v45->field_18 + 8));
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                v10 = v50;
                v9 = v49;
                v8 = v48;
                v4 = (long long)(&v10)[8];
                ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af();
                ::0x526aa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v8);
                _$LT$uu_sort..merge..PlainMergeInput$LT$R$GT$$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h0251bbe0508613d8();
                v7 = v7;
            }
        }
        v7 = v7;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v19, &v5, v51);
    } while (*((long long *)&v20) != 0x8000000000000000);
}
