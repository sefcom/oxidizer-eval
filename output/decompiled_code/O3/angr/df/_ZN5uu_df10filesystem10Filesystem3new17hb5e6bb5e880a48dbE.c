long long uu_df::filesystem::Filesystem::new::hb5e6bb5e880a48db(struct_1 *a0, struct_0 *a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [sp-0x140]
    int v1;  // [sp-0x138]
    int v2;  // [sp-0x128]
    int v3;  // [sp-0x118]
    unsigned long long v4;  // [sp-0x108]
    char v5;  // [bp-0xf8]
    char v6;  // [bp-0xe8]
    char v7;  // [bp-0xe0]
    char v8;  // [bp-0xd8]
    char v9;  // [bp-0xd0]
    char v10;  // [bp-0xc0]
    char v11;  // [bp-0xb8]
    char v12;  // [bp-0xa8]
    int v13;  // [sp-0x48]
    unsigned long long v14;  // [sp-0x38]
    unsigned long long v18;  // rax
    unsigned long long v19;  // r13
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rsi

    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v5, v18);
    v4 = *((long long *)&v6);
    *((int128_t *)&v3) = *((int128_t *)&v5);
    uucore::features::fsext::statfs::heb128b66781efefa(&v7, &v3);
    if (!*((long long *)&v7))
    {
        v19 = *((long long *)&v10);
        v0 = *((long long *)&v12);
        *((int128_t *)&v1) = *((int128_t *)&v9);
        *((int128_t *)&v2) = *((int128_t *)&v11);
        v20 = *((long long *)&v11);
        v14 = a2[2];
        *((int128_t *)&v13) = *((int128_t *)&a2[0]);
        memcpy(&v7, a1, 152);
        memcpy(a0, &v7, 176);
        *((void*)&a0->field_b0) = v1;
        a0->field_c0 = v19;
        *((void*)&(&a0->field_c0)[1]) = v2;
        *((unsigned long long *)((char *)&a0->field_c8 + 8)) = v0;
        *((char *)&a0->field_d8) = v20 >> 63;
        return a0;
    }
    if (*((long long *)&v8))
        __rust_dealloc(*((long long *)&v9));
    a0->field_0 = 0x8000000000000000;
    v21 = a2[0];
    if (v21 != 0x8000000000000000 && v21)
        __rust_dealloc(a2[1]);
    _ZN4core3ptr55drop_in_place$LT$uucore..features..fsext..MountInfo$GT$17hf2f9e5fa85804c64E.llvm.10971985445214094192(a1);
    return a0;
}
