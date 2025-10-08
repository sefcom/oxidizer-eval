long long bat::assets::build_assets::asset_to_contents(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char v5;  // [bp-0x20], Other Possible Types: unsigned long
    char v6;  // [bp-0x18]
    unsigned long long v8;  // rax

    v3 = a2;
    v4 = a3;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v8 = bincode::internal::serialize_into(&v0, a1);
    if (!v8)
    {
        *((unsigned long long *)&a0[24]) = 0;
        *((int128_t *)&a0[8]) = *((int128_t *)&v0);
        *((char *)a0) = 13;
        return 0;
    }
    bat::assets::build_assets::asset_to_contents::{{closure}}(&v5, &v3, v8);
    *((int128_t *)&a0[16]) = *((int128_t *)&v6);
    *((char *)a0) = 11;
    *((unsigned long *)&a0[8]) = v5;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, 1);
}
