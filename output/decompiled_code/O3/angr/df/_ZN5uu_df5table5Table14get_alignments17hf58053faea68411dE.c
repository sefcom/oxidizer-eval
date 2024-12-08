double uu_df::table::Table::get_alignments::hf58053faea68411d(long long a0, long long a1, long long a2)
{
    unsigned int v0;  // [sp-0x168]
    void* v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    void* v3;  // [sp-0x38]
    unsigned long v4;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x28]
    char *v7;  // rax
    unsigned long long v8;  // rdx
    int v9;  // xmm0
    int v10;  // ymm0

    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = a1;
    v5 = a2 + a1;
    while (true)
    {
        v7 = ::0x4ca910::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1e8bb3534e3d1a0(&v4);
        if (!v7)
            break;
        v0 = 990;
        alloc::vec::Vec$LT$T$C$A$GT$::push::haa39a7a44082e3e7(&v1, -0x100 | (*((char *)&v0 + ((*(v7) & 31) >> 3)) >> (*(v7) & 31 & 7) & 1 & 1), v8);
    }
    a0->field_10 = v3;
    v9 = *((int128_t *)&v1);
    *((void*)&a0->field_0) = v9;
    return (unsigned long long)(v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9);
}
