long long versions_replacer::metadata::collect_versions_from_cargo_toml(void* a0, unsigned long long a1)
{
    void* v0;  // [bp-0x288]
    unsigned long long v1;  // [bp-0x280]
    uint128_t v2;  // [bp-0x278]
    unsigned long long v3;  // [bp-0x268]
    void* v4;  // [bp-0x260]
    unsigned long long v5;  // [bp-0x258]
    unsigned long long v6;  // [bp-0x240]
    unsigned long long v7;  // [bp-0x228]
    void* v8;  // [bp-0x210]
    void* v9;  // [bp-0x200]
    unsigned int v10;  // [bp-0x1f8]
    int v11;  // [bp-0x1f0], Other Possible Types: char
    int v12;  // [bp-0x1e0]
    int v13;  // [bp-0x1d0]
    char v14;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x1b8]
    char v16;  // [bp-0x1b0]
    char v17;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0xe8]
    char v19;  // [bp-0xe0]
    unsigned long long v22;  // rdx

    v5 = 0x8000000000000000;
    v6 = 0x8000000000000000;
    v7 = 0x8000000000000000;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v0.manifest_path(a1.as_ref(), v22);
    v14.exec(&v0);
    v17.wrap_err(&v14);
    if (v17 != 0x8000000000000000)
    {
        memcpy(&v16, &v19, 192);
        v14 = v17;
        v15 = v18;
        core::ptr::drop_in_place<cargo_metadata::MetadataCommand>(&v0);
        v11.collect(v18, *((long long *)&v16) * 600 + v18);
        a0[32] = v13;
        a0[16] = v12;
        *(a0) = v11;
        return core::ptr::drop_in_place<cargo_metadata::Metadata>(&v14);
    }
    *((unsigned long long *)&a0[8]) = v18;
    *((unsigned long long *)a0) = 0;
    return core::ptr::drop_in_place<cargo_metadata::MetadataCommand>(&v0);
}
