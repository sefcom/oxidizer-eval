long long uu_sort::ext_sort::ext_sort::hc251c769f969c18a(unsigned long long a0, struct_0 *a1, uint128_t a2[2], unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x208]
    int v1;  // [sp-0x1e8]
    unsigned long long v2;  // [sp-0x1d8]
    unsigned long long v3;  // [sp-0x1d0]
    unsigned long long v4;  // [sp-0x1c8]
    unsigned long long v5;  // [sp-0x1c0]
    unsigned long long v6;  // [sp-0x1b8]
    unsigned long long v7;  // [sp-0x1b0]
    int v8;  // [bp-0x1a8], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long long v9;  // [sp-0x1a0], Other Possible Types: unsigned long
    int v10;  // [bp-0x198], Other Possible Types: char, unsigned long long
    unsigned long long v11;  // [sp-0x190]
    char v12;  // [bp-0x188]
    char v13;  // [bp-0xe8]
    void* v14;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v15;  // [sp-0xc0]
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rbp
    int v20;  // xmm0
    unsigned long long v21;  // rax
    int v22;  // xmm0

    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v8, 1, a2, a3);
    v2 = v8;
    v3 = v9;
    *((int128_t *)&v1) = *((int128_t *)&v10);
    std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v8, 1, v17, v18);
    v19 = v8;
    v4 = v19;
    v0 = v9;
    v5 = v0;
    v6 = v8;
    v7 = v9;
    ::0x568f60::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v14, a1);
    v8 = v6;
    v9 = v7;
    v10 = v2;
    v11 = v3;
    memcpy(&v12, &v14, 160);
    v15 = 0x8000000000000000;
    v14 = 0;
    std::thread::Builder::spawn_unchecked::h2522f3c5e68f3f13(&v13, &v14, &v8);
    core::result::Result$LT$T$C$E$GT$::expect::h58dca672c4c1d663(&v14, &v13);
    ::0x566270::core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h1284e7b09516a1c1(&v14);
    if (a1->field_30 != 0x8000000000000000)
    {
        v22 = a2[0];
        *((uint128_t *)&v10) = a2[1];
        v8 = v22;
        v21 = uu_sort::ext_sort::reader_writer::h1afdbaf3fd1ee381(a0, a1, &v1, v19, v0, &v8, a3);
    }
    else
    {
        v20 = a2[0];
        *((uint128_t *)&v10) = a2[1];
        v8 = v20;
        v21 = uu_sort::ext_sort::reader_writer::hea8d60344d72eabc(a0, a1, &v1, v19, v0, &v8, a3);
    }
    ::0x566520::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f();
    return v21;
}
