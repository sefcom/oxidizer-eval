long long uu_sort::merge::reader::hf8508ad1ae7559cc(unsigned long a0, unsigned int *a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x1d8]
    char v1;  // [bp-0x1d0]
    unsigned long long v2;  // [sp-0x1c0]
    char v3;  // [bp-0x1a9]
    unsigned long v4;  // [sp-0x1a8], Other Possible Types: unsigned long long
    int v5;  // [sp-0x198], Other Possible Types: unsigned long, unsigned long long
    int v6;  // [bp-0x190], Other Possible Types: char
    int v7;  // [bp-0x188]
    int v8;  // [sp-0x180]
    int v9;  // [sp-0x170]
    int v10;  // [sp-0x160]
    int v11;  // [sp-0x148]
    int v12;  // [sp-0x138]
    int v13;  // [sp-0x128]
    int v14;  // [sp-0x118]
    int v15;  // [sp-0x108]
    int v16;  // [sp-0xf8]
    int v17;  // [sp-0xe8]
    int v18;  // [sp-0xd8]
    int v19;  // [sp-0xc8]
    unsigned long long v20;  // [sp-0xb8]
    char v21;  // [bp-0xb0]
    char v22;  // [bp-0xa8]
    char v23;  // [bp-0x98]
    char v24;  // [bp-0x88]
    char v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    char v27;  // [bp-0x58]
    char v28;  // [bp-0x48]
    char v29;  // [bp-0x38]
    int v31;  // ymm0
    int v32;  // ymm1
    int v33;  // ymm2
    int v34;  // ymm3
    unsigned long long v35;  // rdi
    int v36;  // xmm0
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // ymm0
    int v41;  // xmm1
    int v42;  // ymm1
    int v43;  // xmm2
    int v44;  // ymm2
    int v45;  // xmm3
    int v46;  // ymm3
    unsigned long long v47;  // rax
    struct_0 *v48;  // r12
    void* v49;  // rax
    unsigned long long v50;  // rax
    int v51;  // xmm0
    int v52;  // xmm1
    int v53;  // xmm2
    int v54;  // xmm3
    int v55;  // xmm0
    int v56;  // xmm1
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rdx
    int v59;  // xmm0
    int v60;  // xmm1

    v4 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4da8ba9f2a0b1caf(&v21, &v4);
    if (*((long long *)&v22) == 0x8000000000000000)
        return 0;
    do
    {
        v35 = *((long long *)&v21);
        v20 = *((long long *)&v29);
        v36 = *((int128_t *)&v28);
        v19 = v36;
        v37 = *((int128_t *)&v27);
        v18 = v37;
        v38 = *((int128_t *)&v26);
        v17 = v38;
        v39 = *((int128_t *)&v22);
        v40 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
        v41 = *((int128_t *)&v23);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
        v43 = *((int128_t *)&v24);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
        v45 = *((int128_t *)&v25);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
        v16 = v45;
        v15 = v43;
        v14 = v41;
        v13 = v39;
        if (v35 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v47 = v35 * 9;
        if (a1[2 * v47] == 3)
        {
            ::0x525f50::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::hbc6bc007ea0d1922(&v13);
            v5 = v5;
        }
        else
        {
            v48 = &a1[2 * v47];
            v2 = a3;
            v0 = _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::h7f0cd1d414931bdc(&v48->field_8);
            uu_sort::chunks::read::hcfe3292c63a8d741(&v5, v48, &v22, 0, &v3, &v48->field_28, v0, *((int *)&v1), a4);
            v49 = v5;
            if (v49)
                return v49;
            v5 = v5;
            if (!v6)
            {
                v50 = v48->field_0;
                v48->field_0 = 3;
                if (v5 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v5 = v50;
                v51 = *((int128_t *)&(&v48->field_0)[1]);
                v52 = *((int128_t *)((char *)&v48->field_8 + 8));
                v53 = *((int128_t *)((char *)&v48->field_18 + 8));
                v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                v54 = *((int128_t *)((char *)&v48->field_28 + 8));
                v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                v10 = v54;
                v9 = v53;
                v8 = v52;
                v6 = v51;
                v55 = (int128_t)(&v6)[8];
                v56 = (int128_t)(&v8)[8];
                v12 = v56;
                v11 = v55;
                ::0x526780::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h6a2a83be83d80e2e(&v5, v57, v58);
                ::0x525b10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h61652c911fd4660d(&v9);
                v59 = v11;
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                v60 = v12;
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
                v7 = v60;
                v5 = v59;
                _$LT$uu_sort..merge..PlainTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h665093cdea59ce48(&v5, v57, v58);
                v5 = v5;
            }
        }
        v5 = v5;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4da8ba9f2a0b1caf(&v21, &v4);
    } while (*((long long *)&v22) != 0x8000000000000000);
}
