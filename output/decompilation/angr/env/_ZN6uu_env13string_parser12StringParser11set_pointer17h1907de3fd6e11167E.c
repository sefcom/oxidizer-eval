double uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(long long a0, long long a1)
{
    unsigned long v0;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x50]
    unsigned long long v2;  // [sp-0x48]
    int v3;  // [sp-0x40]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x18]
    int v8;  // xmm0
    int v9;  // ymm0

    a0->field_20 = a1;
    if (a0->field_8 >= a1)
    {
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&v4, a0->field_0, a0->field_8, a1);
        v8 = *((int128_t *)&v5);
        *((void*)&a0->field_10) = v8;
        return (unsigned long long)(v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8);
    }
    v0 = &g_548e80;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    core::panicking::panic_fmt::he12d0d7468628bb4(&v0, &g_548f20); /* do not return */
}
