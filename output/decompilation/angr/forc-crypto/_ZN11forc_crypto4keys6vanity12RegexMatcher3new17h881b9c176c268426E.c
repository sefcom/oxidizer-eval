long long forc_crypto::keys::vanity::RegexMatcher::new(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char *v2;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x80]
    void* v4;  // [bp-0x78]
    int v5;  // [bp-0x68], Other Possible Types: char
    unsigned long long v6;  // [bp-0x58]
    char v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    char *v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]

    v10 = a1;
    v11 = a2;
    v12 = &v10;
    v13 = <&T as core::fmt::Display>::fmt;
    v0 = &g_a2f008;
    v1 = 1;
    v4 = 0;
    v2 = &v12;
    v3 = 1;
    v7.map_or_else(0, a2, &v0);
    v0.new(v8, v9);
    memcpy(&v5, &v1, 16);
    v6 = 1;
    if (!v0)
    {
        v2 = v6;
        memcpy(&v0, &v5, 16);
        *((long long *)&a0[8]) = v0.from();
        *((unsigned long long *)a0) = 0;
        core::ptr::drop_in_place<alloc::string::String>(&v7);
        return a0;
    }
    *((unsigned long long *)&a0[24]) = v6;
    a0[8] = v5;
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    *((unsigned long long *)a0) = v0;
    return a0;
}
