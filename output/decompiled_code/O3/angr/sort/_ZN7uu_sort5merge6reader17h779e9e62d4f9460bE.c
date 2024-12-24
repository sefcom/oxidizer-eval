long long uu_sort::merge::reader::h779e9e62d4f9460b(unsigned long a0, unsigned int *a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    unsigned long long v0;  // [sp-0x238]
    char v1;  // [bp-0x230]
    unsigned long long v2;  // [sp-0x220]
    char v3;  // [bp-0x209]
    unsigned long v4;  // [sp-0x208], Other Possible Types: unsigned long long
    int v5;  // [sp-0x1f8]
    int v6;  // [sp-0x1e8]
    int v7;  // [sp-0x1d8]
    int v8;  // [sp-0x1c8]
    int v9;  // [sp-0x1b8]
    int v10;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [bp-0x1a0], Other Possible Types: char
    int v12;  // [bp-0x198]
    int v13;  // [bp-0x190]
    int v14;  // [bp-0x188]
    int v15;  // [bp-0x180]
    int v16;  // [bp-0x178]
    int v17;  // [bp-0x170]
    int v18;  // [bp-0x168]
    int v19;  // [sp-0x160]
    int v20;  // [sp-0x150]
    int v21;  // [sp-0x140]
    int v22;  // [sp-0x128]
    int v23;  // [sp-0x118]
    int v24;  // [sp-0x108]
    int v25;  // [sp-0xf8]
    int v26;  // [sp-0xe8]
    int v27;  // [sp-0xd8]
    int v28;  // [sp-0xc8]
    unsigned long long v29;  // [sp-0xb8]
    char v30;  // [bp-0xb0]
    char v31;  // [bp-0xa8]
    char v32;  // [bp-0x98]
    char v33;  // [bp-0x88]
    char v34;  // [bp-0x78]
    char v35;  // [bp-0x68]
    char v36;  // [bp-0x58]
    char v37;  // [bp-0x48]
    char v38;  // [bp-0x38]
    int v40;  // ymm0
    int v41;  // ymm1
    int v42;  // ymm2
    int v43;  // ymm3
    unsigned int *v44;  // rdi
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0
    int v49;  // ymm0
    int v50;  // xmm1
    int v51;  // ymm1
    int v52;  // xmm2
    int v53;  // ymm2
    int v54;  // xmm3
    int v55;  // ymm3
    unsigned int *v56;  // r12
    struct_0 *v57;  // r12
    void* v58;  // rax
    unsigned long long v59;  // rax
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm2
    int v66;  // xmm3
    int v67;  // xmm0
    int v68;  // xmm0
    int v69;  // xmm1
    int v70;  // xmm2
    int v71;  // xmm3
    unsigned long long v72;  // rsi
    unsigned long long v73;  // rdx
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    int v78;  // xmm3

    v4 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4da8ba9f2a0b1caf(&v30, &v4);
    if (*((long long *)&v31) == 0x8000000000000000)
        return 0;
    do
    {
        v44 = *((long long *)&v30);
        v29 = *((long long *)&v38);
        v45 = *((int128_t *)&v37);
        v28 = v45;
        v46 = *((int128_t *)&v36);
        v27 = v46;
        v47 = *((int128_t *)&v35);
        v26 = v47;
        v48 = *((int128_t *)&v31);
        v49 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
        v50 = *((int128_t *)&v32);
        v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
        v52 = *((int128_t *)&v33);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
        v54 = *((int128_t *)&v34);
        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
        v25 = v54;
        v24 = v52;
        v23 = v50;
        v22 = v48;
        if (v44 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v56 = v44 * 120;
        if (*((int *)(a1 + v56)) == 3)
        {
            ::0x525f50::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::hbc6bc007ea0d1922(&v22);
            v10 = v10;
        }
        else
        {
            v57 = v56 + a1;
            v2 = a3;
            v0 = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::as_read::h058ba32ed69a1a0e(&v57->field_8);
            uu_sort::chunks::read::hf1cb175542b55863(&v10, v57, &v31, 0, &v3, &v57->field_58, v0, *((int *)&v1), a4);
            v58 = v10;
            if (v58)
                return v58;
            v10 = v10;
            if (!v11)
            {
                v59 = v57->field_0;
                v57->field_0 = 3;
                if (v10 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v10 = v59;
                v60 = *((int128_t *)((char *)&v57->field_58 + 8));
                v21 = v60;
                v61 = *((int128_t *)((char *)&v57->field_48 + 8));
                v20 = v61;
                v62 = *((int128_t *)((char *)&v57->field_38 + 8));
                v19 = v62;
                v63 = *((int128_t *)&(&v57->field_0)[1]);
                v64 = *((int128_t *)((char *)&v57->field_8 + 8));
                v65 = *((int128_t *)((char *)&v57->field_18 + 8));
                v66 = *((int128_t *)((char *)&v57->field_28 + 8));
                v17 = v66;
                v15 = v65;
                v13 = v64;
                v11 = v63;
                v67 = (int128_t)(&v19)[8];
                v9 = v67;
                v68 = (int128_t)(&v11)[8];
                v69 = (int128_t)(&v13)[8];
                v70 = (int128_t)(&v15)[8];
                v71 = (int128_t)(&v17)[8];
                v8 = v71;
                v7 = v70;
                v6 = v69;
                v5 = v68;
                ::0x526780::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h6a2a83be83d80e2e(&v10, v72, v73);
                ::0x525b10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h61652c911fd4660d(&v20);
                v74 = v9;
                v18 = v74;
                v75 = v5;
                v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
                v76 = v6;
                v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                v77 = v7;
                v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                v78 = v8;
                v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                v16 = v78;
                v14 = v77;
                v12 = v76;
                v10 = v75;
                v58 = _$LT$uu_sort..merge..CompressedTmpMergeInput$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::ha4a8c2c1b7942daf(&v10);
                v10 = v10;
                if (v58)
                    return v58;
            }
        }
        v10 = v10;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4da8ba9f2a0b1caf(&v30, &v4);
    } while (*((long long *)&v31) != 0x8000000000000000);
}
