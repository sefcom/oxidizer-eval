double uu_env::string_parser::StringParser::new::h10db37f8e77e1978(long long a0, long long a1, long long a2)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x28]
    unsigned long v2;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x18]
    void* v4;  // [sp-0x10]
    int v6;  // xmm0
    int v7;  // ymm0

    v0 = a1;
    v1 = a2;
    v4 = 0;
    v2 = a1;
    v3 = a2;
    uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(&v0, 0);
    a0->field_20 = v4;
    v6 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v6;
    return (unsigned long long)(v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6);
}
