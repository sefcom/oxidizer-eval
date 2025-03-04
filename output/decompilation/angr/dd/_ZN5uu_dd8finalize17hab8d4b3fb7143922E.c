long long uu_dd::finalize::hab8d4b3fb7143922(unsigned long long *a0, uint128_t a1[2], struct_1 *a2, unsigned long long a3, unsigned int a4, unsigned long long a5, struct_0 *a6, char a7)
{
    unsigned long long v0;  // [sp-0x138]
    unsigned long long v1;  // [sp-0x130]
    unsigned long v2;  // [sp-0x128]
    unsigned int v3;  // [sp-0x120]
    int v4;  // [sp-0x118]
    int v5;  // [sp-0x108]
    int v6;  // [sp-0xf8], Other Possible Types: char
    char v7;  // [bp-0xf0]
    unsigned long v8;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v9;  // [bp-0xe0]
    char v10;  // [bp-0xd8]
    unsigned long v11;  // [sp-0x98]
    unsigned int v12;  // [sp-0x90]
    int v13;  // [sp-0x88]
    int v14;  // [sp-0x78]
    unsigned long long v15;  // [sp-0x68]
    unsigned long long v16;  // [sp-0x60]
    int v17;  // [sp-0x58]
    char v18;  // [sp-0x48]
    unsigned long long v19;  // rbp
    unsigned long long v20;  // rbp
    unsigned int v22;  // edx
    unsigned long long v23;  // rdx

    v2 = a3;
    v3 = a4;
    uu_dd::BlockWriter::flush::h48e8ffbb5b89f6d9(&v6, a0);
    if (*((long long *)&v6))
    {
        v19 = *((long long *)&v7);
    }
    else
    {
        v0 = v8;
        v1 = *((long long *)&v9);
        *((int128_t *)&v5) = *((int128_t *)&v10);
        v19 = uu_dd::BlockWriter::sync::h52e1c4b01c44f80e(a0);
        if (!v19)
        {
            if (a7)
                uu_dd::BlockWriter::truncate::haed78b6dd922a309(a0);
            *((uint128_t *)&v4) = a2->field_10;
            v20 = a2->field_0;
            *((uint128_t *)&v14) = a1[1];
            *((uint128_t *)&v13) = a1[0];
            v15 = v20 + v0;
            v16 = a2->field_8 + v1 + ((v20 + v0 <= v20 ? 1 : 0) & 1);
            v17 = AddV(v4, v5);
            v11 = std::time::Instant::elapsed::hd84d976472e03263(&v2);
            v12 = v22;
            v18 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::hf546e8e151154c35(&v6, a5, &v11, a3);
            v8 = a6->field_10;
            *((uint128_t *)&v6) = a6->field_0;
            core::result::Result$LT$T$C$E$GT$::expect::h4f1d3531bd9b092b(std::thread::JoinInner$LT$T$GT$::join::h1c3eb576eba2d71f(&v6), v23);
            core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(a0);
            return 0;
        }
    }
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(a6);
    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(a0);
    return v19;
}
