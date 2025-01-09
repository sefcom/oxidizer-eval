double uu_df::table::Header::get_headers::h9deb63aa1bbc7ffc(long long a0, long long a1)
{
    void* v0;  // [sp-0x88]
    unsigned long long v1;  // [sp-0x80]
    void* v2;  // [sp-0x78]
    unsigned long v3;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x68]
    int v7;  // xmm0
    int v8;  // ymm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = a1[1];
    v4 = a1[2] + v3;
    if (!::0x4ca490::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&v3))
    {
        a0->field_10 = v2;
        v7 = *((int128_t *)&v0);
        *((void*)&a0->field_0) = v7;
        return (unsigned long long)(v8 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v7);
    }
    goto *((int *)(4283088 + *((char *)vvar_27{reg 16}) * 4)) + 4283088;
}
