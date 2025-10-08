long long starship::modules::ruby::format_rvm_gemset(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    int v3;  // [bp-0xd8], Other Possible Types: char
    int v4;  // [bp-0xc8]
    int v5;  // [bp-0xb8]
    int v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    int v9;  // [bp-0x90], Other Possible Types: char
    int v10;  // [bp-0x80]
    int v11;  // [bp-0x70]
    int v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    unsigned long long v16;  // rax

    v3.new("@(\\S+)Environmental toolchain override is src/modules/rust.rs", 6);
    v14.unwrap(&v3, &g_11f5e78);
    v9.captures_at(&v14, a1, a2);
    if (*((int *)&v9) == 2)
    {
        core::ptr::drop_in_place<core::option::Option<regex::regex::string::Captures>>(&v9);
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v8 = v13;
        v6 = v12;
        v5 = v11;
        v4 = v10;
        v3 = v9;
        v0.get_group(&v4, 1);
        if (*((int *)&v0) == 1)
        {
            v16 = v1.get(v2, v7, v8);
            if (!v16)
                core::str::slice_error_fail(v7, v8, v1, v2, &g_11f4770); /* do not return */
            v0.to_vec(v16, a2);
            *((unsigned long long *)&a0[16]) = v2;
            *((int128_t *)a0) = *((int128_t *)&v0);
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v3);
    }
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v14);
}
