long long bat::assets::asset_from_contents(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x170]
    void* v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    void* v4;  // [bp-0x158]
    char v5;  // [bp-0x150]
    char v6;  // [bp-0x108], Other Possible Types: unsigned long long
    char v7;  // [bp-0x100]
    unsigned long long v9;  // rax

    v0 = "lazy-loaded themetheme ";
    v1 = 17;
    v5.new(a1, a2);
    v2 = 0;
    v3 = 1;
    v4 = 0;
    bincode::internal::deserialize_from_custom_seed(&v6, &v2);
    if (!((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63)))
        return ::libc.so.0::memcpy(a0, &v6, 248);
    v9 = (unsigned long long)bat::assets::asset_from_contents::{{closure}}(a0 + 1, &v0, *((long long *)&v7));
    *(a0) = 0x8000000000000000;
    return v9;
}
