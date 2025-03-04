long long uu_df::filesystem::Filesystem::new::ha971403f9b8ef26c(unsigned long long *a0, struct_1 *a1, struct_0 *a2)
{
    int v0;  // [sp-0x1e8]
    unsigned long long v1;  // [sp-0x1d8]
    char v2;  // [bp-0x1d0]
    char v3;  // [bp-0x1c0]
    char v4;  // [bp-0x1b8]
    char v5;  // [bp-0x1a8]
    char v6;  // [bp-0x198]
    char v7;  // [bp-0x188]
    char v8;  // [bp-0x180]
    char v9;  // [bp-0x178]
    char v10;  // [bp-0x168]
    char v11;  // [bp-0x158]
    char v12;  // [bp-0x148]
    char v13;  // [bp-0x138]
    char v14;  // [bp-0x128]
    char v15;  // [bp-0x118]
    char v16;  // [bp-0x108]
    int v17;  // [sp-0xe8]
    unsigned long long v18;  // [sp-0xd8]
    int v19;  // [sp-0xd0]
    int v20;  // [sp-0xc0]
    int v21;  // [sp-0xb0]
    unsigned long long v22;  // [sp-0xa0]
    int v23;  // [sp-0x98]
    int v24;  // [sp-0x88]
    int v25;  // [sp-0x78]
    int v26;  // [sp-0x68]
    int v27;  // [sp-0x58]
    int v28;  // [sp-0x48]
    int v29;  // [sp-0x38]
    unsigned long long v30;  // [sp-0x28]
    unsigned long long v32;  // rsi

    v32 = &a1->padding_0[96];
    if (!a1->field_70)
        v32 = &a1->padding_0[24];
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v32);
    v1 = *((long long *)&v3);
    *((int128_t *)&v0) = *((int128_t *)&v2);
    uucore::features::fsext::statfs::h7710e674e131f3de(&v8, &v0);
    if (*((long long *)&v8))
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$libc..unix..linux_like..linux..gnu..b64..x86_64..statfs$C$alloc..string..String$GT$$GT$::hc9dd6679bfd799be(&v8);
        *(a0) = 0x8000000000000000;
        ::0x4d3090::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h74894fec29a483d3(a2);
        ::0x4d2bf0::core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h9090e8568995f329(a1);
        return a0;
    }
    v30 = *((long long *)&v16);
    *((int128_t *)&v29) = *((int128_t *)&v15);
    *((int128_t *)&v28) = *((int128_t *)&v14);
    *((int128_t *)&v27) = *((int128_t *)&v13);
    *((int128_t *)&v26) = *((int128_t *)&v12);
    *((int128_t *)&v25) = *((int128_t *)&v11);
    *((int128_t *)&v24) = *((int128_t *)&v10);
    *((int128_t *)&v23) = *((int128_t *)&v9);
    uucore::features::fsext::FsUsage::new::h19810370d0ac518d(&v4, &v23);
    v18 = a2->field_10;
    *((uint128_t *)&v17) = a2->field_0;
    memcpy(&v8, a1, 152);
    *((int128_t *)&v19) = *((int128_t *)&v4);
    *((int128_t *)&v20) = *((int128_t *)&v5);
    *((int128_t *)&v21) = *((int128_t *)&v6);
    v22 = *((long long *)&v7);
    memcpy(a0, &v8, 232);
    return a0;
}
