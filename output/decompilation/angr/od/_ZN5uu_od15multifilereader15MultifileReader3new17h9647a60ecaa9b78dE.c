double uu_od::multifilereader::MultifileReader::new::h9647a60ecaa9b78d(long long a0, long long a1)
{
    char v0;  // [bp-0x38]
    unsigned long v1;  // [sp-0x28], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x20]
    char v3;  // [bp-0x18]
    char v4;  // [sp-0x10]
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm0
    int v9;  // ymm0

    v1 = a1->field_10;
    v6 = a1->field_0;
    v2 = 0;
    v4 = 0;
    uu_od::multifilereader::MultifileReader::next_file::h7ce1d576af53818d(&v0);
    v7 = *((int128_t *)&v1);
    a0[2] = *((int128_t *)&v3);
    *((void*)&a0[1]) = v7;
    *((void*)&a0[0]) = v8;
    return (unsigned long long)((v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9);
}
