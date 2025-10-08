long long versions_replacer::replace::replace_versions_in_file(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x20]
    char v9;  // [bp-0x18]
    unsigned long long v11;  // rdx

    v3 = a0.as_ref(a1);
    std::fs::read_to_string(&v7, v3, a2);
    v0.wrap_err_with(&v7, &v3);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return 1;
    v4 = v0;
    v5 = v1;
    v6 = v2;
    versions_replacer::replace::replace_versions_in_string(&v7, v1, v2, a2);
    v2 = v8;
    memcpy(&v0, &v7, 16);
    if (*((long long *)&v9) && std::fs::write(v3, v11, v1, v2).wrap_err_with(&v3))
    {
        core::ptr::drop_in_place<regex::error::Error>(&v0);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
        return 1;
    }
    core::ptr::drop_in_place<regex::error::Error>(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v4);
    return 0;
}
