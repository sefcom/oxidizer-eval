long long uu_sort::ext_sort::ext_sort::hc251c769f969c18a(unsigned long long a0, struct_0 *a1, uint128_t a2[2], unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x218]
    unsigned long long v1;  // [sp-0x208]
    int v2;  // [sp-0x1e8]
    unsigned long long v3;  // [sp-0x1d8]
    unsigned long long v4;  // [sp-0x1d0]
    unsigned long long v5;  // [sp-0x1c8]
    unsigned long long v6;  // [sp-0x1c0]
    unsigned long long v7;  // [sp-0x1b8]
    unsigned long long v8;  // [sp-0x1b0]
    int v9;  // [bp-0x1a8], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v10;  // [sp-0x1a0], Other Possible Types: unsigned long
    int v11;  // [bp-0x198], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [sp-0x190]
    char v13;  // [bp-0x188]
    char v14;  // [bp-0xe8]
    void* v15;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v16;  // [sp-0xc0]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rbp
    int v21;  // xmm0
    unsigned long long v22;  // rax
    int v23;  // xmm0
    unsigned long long v24;  // rsi
    unsigned long long v25;  // rdx

    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v9, 1, a2, a3);
    v3 = v9;
    v4 = v10;
    *((int128_t *)&v2) = *((int128_t *)&v11);
    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v9, 1, v18, v19);
    v20 = v9;
    v5 = v20;
    v1 = v10;
    v6 = v1;
    v7 = v9;
    v8 = v10;
    ::0x568f60::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v15, a1);
    v9 = v7;
    v10 = v8;
    v11 = v3;
    v12 = v4;
    memcpy(&v13, &v15, 160);
    v16 = 0x8000000000000000;
    v15 = 0;
    std::thread::Builder::spawn_unchecked::h2522f3c5e68f3f13(&v14, &v15, &v9);
    core::result::Result$LT$T$C$E$GT$::expect::h58dca672c4c1d663(&v15, &v14);
    ::0x566270::core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h1284e7b09516a1c1(&v15);
    if (a1->field_30 != 0x8000000000000000)
    {
        v23 = a2[0];
        *((uint128_t *)&v11) = a2[1];
        v9 = v23;
        v0 = a3;
        v22 = uu_sort::ext_sort::reader_writer::h1afdbaf3fd1ee381(a0, a1, &v2, v20, v1, &v9);
    }
    else
    {
        v21 = a2[0];
        *((uint128_t *)&v11) = a2[1];
        v9 = v21;
        v0 = a3;
        v22 = uu_sort::ext_sort::reader_writer::hea8d60344d72eabc(a0, a1, &v2, v20, v1, &v9);
    }
    ::0x566520::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v2, v24, v25);
    return v22;
}
