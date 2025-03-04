long long uu_sort::merge::reader::h079221aa5423e007(unsigned long a0, unsigned int *a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [bp-0x1a0]
    unsigned long long v1;  // [sp-0x198]
    unsigned long long v2;  // [sp-0x190]
    char v3;  // [bp-0x179]
    unsigned long long v4;  // [sp-0x178]
    unsigned long v5;  // [sp-0x170]
    unsigned long long v6;  // [sp-0x168]
    unsigned long long v7;  // [sp-0x160], Other Possible Types: unsigned long
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
    int v29;  // ymm3
    unsigned long long v30;  // rdi
    int v31;  // xmm0
    int v32;  // xmm0
    int v33;  // xmm0
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // ymm1
    int v37;  // xmm2
    int v38;  // ymm2
    int v39;  // xmm3
    unsigned int *v40;  // r14
    struct_0 *v41;  // r14
    void* v42;  // rax
    unsigned long long v43;  // rax
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    unsigned long long v48;  // rdx
    int v49;  // ymm0

    v5 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v19, &v5, a2);
    if (*((long long *)&v20) == 0x8000000000000000)
        return 0;
    v6 = a4;
    do
    {
        v30 = *((long long *)&v19);
        v18 = *((long long *)&v27);
        v31 = *((int128_t *)&v26);
        v17 = v31;
        v32 = *((int128_t *)&v25);
        v16 = v32;
        v33 = *((int128_t *)&v24);
        v15 = v33;
        v34 = *((int128_t *)&v20);
        v49 = (((v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
        v35 = *((int128_t *)&v21);
        v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
        v37 = *((int128_t *)&v22);
        v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
        v39 = *((int128_t *)&v23);
        v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
        v14 = v39;
        v13 = v37;
        v12 = v35;
        v11 = v34;
        if (v30 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v30, a2, &g_600408); /* do not return */
        v40 = v30 * 56;
        if (*((int *)(a1 + v40)) == 3)
        {
            ::0x526ee0::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h27a074d6bbea78e7(&v11);
            v7 = v7;
        }
        else
        {
            v41 = v40 + a1;
            v2 = a3;
            v1 = v6;
            uu_sort::chunks::read::h4da7a75b34a6d647(&v7, v41, &v20, 0, &v3, &v41->field_8, (char *)&v41->field_18 + 8, *((int *)&v0));
            v42 = v7;
            if (v42)
                return v42;
            v7 = v7;
            if (!v8)
            {
                v43 = v41->field_0;
                v41->field_0 = 3;
                if (v7 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_600420); /* do not return */
                v7 = v43;
                v44 = *((int128_t *)&(&v41->field_0)[1]);
                v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                v45 = *((int128_t *)((char *)&v41->field_8 + 8));
                v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
                v46 = *((int128_t *)((char *)&v41->field_18 + 8));
                v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
                v10 = v46;
                v9 = v45;
                v8 = v44;
                v4 = (long long)(&v10)[8];
                ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v7);
                ::0x526aa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v8);
                _$LT$uu_sort..merge..PlainMergeInput$LT$R$GT$$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h0251bbe0508613d8((long long)v10, v4);
                v7 = v7;
            }
        }
        v7 = v7;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c1c43cf00029e13(&v19, &v5, v48);
    } while (*((long long *)&v20) != 0x8000000000000000);
}
