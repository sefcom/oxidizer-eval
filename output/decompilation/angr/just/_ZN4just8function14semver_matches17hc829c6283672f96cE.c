long long just::function::semver_matches(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    char v5;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xc0]
    unsigned long long v9;  // [bp-0xb8]
    char v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0x98]
    int v12;  // [bp-0x88], Other Possible Types: char
    unsigned long long v13;  // [bp-0x78]
    int v14;  // [bp-0x68], Other Possible Types: char
    unsigned long long v15;  // [bp-0x58]
    int v16;  // [bp-0x50], Other Possible Types: char
    char v17;  // [bp-0x40]
    unsigned long long v18;  // [bp-0x28]
    unsigned long long v20;  // rdx
    char *v22;  // rdi

    v0.from_str(a4, a5);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        just::function::semver_matches::{{closure}}(&v5, v1, a2);
        v13 = v7;
        memcpy(&v12, &v5, 16);
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v7;
        *((void*)&(&a0->field_0)[1]) = v12;
        a0->field_0 = 1;
        return a0;
    }
    memcpy(&v12, &v0, 16);
    v13 = v2;
    memcpy(&v10, &v0, 16);
    v11 = v13;
    v0.from_str(a2, a3);
    if (v0)
    {
        v20 = v3;
        v18 = v20;
        memcpy(&v14, &v1, 16);
        v15 = v20;
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v8 = v20;
        v5 = v0;
        v9 = v4;
        v0.to_vec(((char)v10.matches(&v5) ? "truePATH ... => M" : "false[{,:]capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/compact.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/patience.rs/home/34r7hm4n"), v10.matches(&v5) & 255 ^ 5);
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v2;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
        a0->field_0 = 0;
        core::ptr::drop_in_place<semver::Version>(&v5);
        v22 = &v10;
    }
    else
    {
        just::function::semver_matches::{{closure}}(&v16, v1, a2);
        v14 = v16;
        v15 = *((long long *)&v17);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v17);
        *((void*)&(&a0->field_0)[1]) = v16;
        a0->field_0 = 1;
        v22 = &v12;
    }
    core::ptr::drop_in_place<semver::VersionReq>(v22);
    return a0;
}
