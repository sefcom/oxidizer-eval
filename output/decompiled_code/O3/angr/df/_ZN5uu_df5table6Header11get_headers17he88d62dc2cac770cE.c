int uu_df::table::Header::get_headers::he88d62dc2cac770c()
{
    void* v0;  // [sp-0x88]
    unsigned long long v1;  // [sp-0x80]
    void* v2;  // [sp-0x78]
    unsigned long v3;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x68]
    unsigned long long v6[3];  // rsi
    struct_0 *v8;  // rdi

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = v6[1];
    v4 = v6[2] + v3;
    if (!::0x4ca910::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1e8bb3534e3d1a0(&v3))
    {
        v8->field_10 = v2;
        v8->field_0 = *((int128_t *)&v0);
        return;
    }
    goto *((int *)(4282960 + *((char *)vvar_25{reg 16}) * 4)) + 4282960;
}
