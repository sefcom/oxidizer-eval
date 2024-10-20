long long uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::hb9b6b6c380795389(unsigned long long a0, struct_1 *a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x78]
    struct_1 *v1;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x68]
    unsigned long v3;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x58]
    unsigned long long v5;  // [sp-0x50]
    int v6;  // [sp-0x48]
    unsigned long v7;  // [bp+0x8]
    char v8;  // [bp+0x10]
    unsigned long long v9[3];  // rbx
    unsigned long long v10;  // rbp
    unsigned long long v11;  // 4096
    unsigned long long v12;  // r15
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r15
    unsigned long long v15;  // r8
    void* v16;  // rax
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rsi
    struct struct_0 **v20;  // r15
    unsigned long long v21;  // rsi
    void* v24;  // rsi
    unsigned long long v25[3];  // r12
    unsigned long long v26;  // r15
    unsigned long v27;  // rbx

    v0 = a4;
    v9 = *((long long *)&v8);
    v10 = v7;
    if (a3)
    {
        v1 = a1;
        v2 = a5 - a3;
        if (a5 < a3)
        {
            v3 = &g_501d00;
            v4 = 1;
            v5 = 8;
            *((int128_t *)&v6) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
        }
        v12 = v9[2];
        if (v9[0] - v12 < a3)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb53a982b2a596a31(v9, v12, a3);
            v12 = v9[2];
        }
        v13 = v9[1];
        memcpy(v13 + v12, v0, a3);
        v14 = v12 + a3;
        *((unsigned long long *)(*((long long *)&v8) + 16)) = v14;
        if (v14 != a2)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        v16 = a1->field_20(a0, v13, a2, v10, v15);
        if (v16)
            return v16;
        v0 += a3;
        *((long long *)(*((long long *)&v8) + 16)) = 0;
        v11 = v2;
    }
    if (!a2)
    {
        v3 = &g_501cc0;
        v4 = 1;
        v5 = 8;
        *((int128_t *)&v6) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
    v2 = v11;
    v18 = v11 - (!(v11 | a2) >> 32 ? (0 CONCAT (unsigned int)v11) /m (unsigned int)a2 >> 32 & 4294967295 : (0 CONCAT v11) /m a2 >> 64);
    v19 = v0;
    v1 = v19 + v18;
    v20 = v1->field_20;
    while (true)
    {
        v21 = v19;
        if (v18 < a2)
            break;
        v16 = v20(a0, v21, a2, v10);
        if (v16)
            return v16;
    }
    v24 = v1;
    v25 = *((long long *)&v8);
    v26 = v25[2];
    v27 = v0 + v2 - v24;
    if (v25[0] - v26 < v27)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb53a982b2a596a31(v25, v26, v27);
        v26 = v25[2];
    }
    memcpy(v25[1] + v26, v24, v27);
    v25[2] = v26 + v27;
    return 0;
}
