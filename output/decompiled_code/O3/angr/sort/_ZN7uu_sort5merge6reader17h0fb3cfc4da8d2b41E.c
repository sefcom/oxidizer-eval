long long uu_sort::merge::reader::h0fb3cfc4da8d2b41(unsigned long a0, unsigned int *a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [bp-0x1a0]
    unsigned long long v1;  // [sp-0x190]
    char v2;  // [bp-0x179]
    unsigned long long v3;  // [sp-0x178]
    unsigned long v4;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x168]
    unsigned long v6;  // [sp-0x160], Other Possible Types: unsigned long long
    int v7;  // [bp-0x158], Other Possible Types: char
    int v8;  // [sp-0x148]
    int v9;  // [sp-0x138]
    int v10;  // [sp-0x128]
    int v11;  // [sp-0x118]
    int v12;  // [sp-0x108]
    int v13;  // [sp-0xf8]
    int v14;  // [sp-0xe8]
    int v15;  // [sp-0xd8]
    int v16;  // [sp-0xc8]
    unsigned long long v17;  // [sp-0xb8]
    char v18;  // [bp-0xb0]
    char v19;  // [bp-0xa8]
    char v20;  // [bp-0x98]
    char v21;  // [bp-0x88]
    char v22;  // [bp-0x78]
    char v23;  // [bp-0x68]
    char v24;  // [bp-0x58]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    int v28;  // ymm0
    int v29;  // ymm1
    int v30;  // ymm2
    int v31;  // ymm3
    unsigned int *v32;  // rdi
    int v33;  // xmm0
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm0
    int v37;  // ymm0
    int v38;  // xmm1
    int v39;  // ymm1
    int v40;  // xmm2
    int v41;  // ymm2
    int v42;  // xmm3
    unsigned int *v43;  // r14
    struct_0 *v44;  // r14
    void* v45;  // rax
    unsigned long long v46;  // rax
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2
    unsigned long long v51;  // rsi
    unsigned long long v52;  // rdx

    v4 = a0;
    _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4da8ba9f2a0b1caf(&v18, &v4);
    if (*((long long *)&v19) == 0x8000000000000000)
        return 0;
    v5 = a4;
    do
    {
        v32 = *((long long *)&v18);
        v17 = *((long long *)&v26);
        v33 = *((int128_t *)&v25);
        v16 = v33;
        v34 = *((int128_t *)&v24);
        v15 = v34;
        v35 = *((int128_t *)&v23);
        v14 = v35;
        v36 = *((int128_t *)&v19);
        v37 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
        v38 = *((int128_t *)&v20);
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
        v40 = *((int128_t *)&v21);
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v42 = *((int128_t *)&v22);
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
        v13 = v42;
        v12 = v40;
        v11 = v38;
        v10 = v36;
        if (v32 >= a2)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v43 = v32 * 56;
        if (*((int *)(a1 + v43)) == 3)
        {
            ::0x525f50::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::hbc6bc007ea0d1922(&v10);
            v6 = v6;
        }
        else
        {
            v44 = v43 + a1;
            v1 = a3;
            uu_sort::chunks::read::h0689b0d374b906ca(&v6, v44, &v19, 0, &v2, &v44->field_8, (char *)&v44->field_18 + 8, *((int *)&v0), v5);
            v45 = v6;
            if (v45)
                return v45;
            v6 = v6;
            if (!v7)
            {
                v46 = v44->field_0;
                v44->field_0 = 3;
                if (v6 == 3)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v6 = v46;
                v47 = *((int128_t *)&(&v44->field_0)[1]);
                v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
                v48 = *((int128_t *)((char *)&v44->field_8 + 8));
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                v49 = *((int128_t *)((char *)&v44->field_18 + 8));
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                v9 = v49;
                v8 = v48;
                v7 = v47;
                v3 = (long long)(&v9)[8];
                ::0x526780::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h6a2a83be83d80e2e(&v6, v51, v52);
                ::0x525b10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h61652c911fd4660d(&v7);
                _$LT$uu_sort..merge..PlainMergeInput$LT$R$GT$$u20$as$u20$uu_sort..merge..MergeInput$GT$::finished_reading::h6f8a4712e204e5c9((long long)v9, v3);
                v6 = v6;
            }
        }
        v6 = v6;
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4da8ba9f2a0b1caf(&v18, &v4);
    } while (*((long long *)&v19) != 0x8000000000000000);
}
