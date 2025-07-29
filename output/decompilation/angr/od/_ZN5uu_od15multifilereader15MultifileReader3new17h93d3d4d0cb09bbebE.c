long long uu_od::multifilereader::MultifileReader::new(uint128_t a0[3], struct_0 *a1)
{
    char v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x28]
    void* v2;  // [bp-0x20]
    char v3;  // [bp-0x18]
    char v4;  // [bp-0x10]
    int v6;  // xmm1
    int v7;  // xmm0

    v1 = a1->field_10;
    v2 = 0;
    v4 = 0;
    v0.next_file();
    v6 = *((int128_t *)&v1);
    a0[2] = *((int128_t *)&v3);
    *((void*)&a0[1]) = v6;
    *((void*)&a0[0]) = v7;
    return a0;
}
