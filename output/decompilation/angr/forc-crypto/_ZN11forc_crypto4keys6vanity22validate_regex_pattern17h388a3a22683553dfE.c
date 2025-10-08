long long forc_crypto::keys::vanity::validate_regex_pattern(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xc8]
    int v1;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    char v5;  // [bp-0xa0], Other Possible Types: unsigned long
    int v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x88]
    char v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    char *v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    void* v15;  // [bp-0x48]
    char *v16;  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    int v18;  // [bp-0x28], Other Possible Types: char
    char v19;  // [bp-0x18]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    v0 = a1;
    if (a2 > 128)
    {
        v21 = (&a0->field_0)[1].to_vec("Regex pattern too long: max 128 charactersInvalid regex pattern: Combined pattern length exceeds 64 charactersStarting to generate vanity address...\n", 42);
        a0->field_0 = 1;
        return v21;
    }
    *((unsigned long long **)&v1) = &v0;
    v3 = <&T as core::fmt::Display>::fmt;
    v11 = &g_a2f008;
    v12 = 1;
    v15 = 0;
    v13 = &(unsigned long long)v1;
    v14 = 1;
    v8.map_or_else(0, a2, &v11);
    v5.new(v9, v10);
    if (v5)
    {
        core::ptr::drop_in_place<core::result::Result<regex::regex::string::Regex,regex::error::Error>>(&v5);
        core::ptr::drop_in_place<alloc::string::String>(&v8);
        v22 = (&a0->field_0)[1].to_vec(v0, a2);
        a0->field_0 = 0;
        return v22;
    }
    v4 = v7;
    v1 = v6;
    v16 = &(unsigned long long)v1;
    v17 = <regex::error::Error as core::fmt::Display>::fmt;
    v11 = &g_a2f018;
    v12 = 1;
    v15 = 0;
    v13 = &v16;
    v14 = 1;
    v18.map_or_else(0, a2, &v11);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v19);
    *((void*)&(&a0->field_0)[1]) = v18;
    a0->field_0 = 1;
    core::ptr::drop_in_place<regex::error::Error>(&(unsigned long long)v1);
    if (!v5)
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v8);
    core::ptr::drop_in_place<core::result::Result<regex::regex::string::Regex,regex::error::Error>>(&v5);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v8);
}
