long long fd::filter::size::SizeFilter::parse_opt(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0xf0], Other Possible Types: unsigned int
    unsigned long v1;  // [bp-0xf0], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0xf0]
    unsigned int v3;  // [bp-0xf0]
    unsigned int v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe8]
    int v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xe0]
    void* v9;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0xd0]
    char v11;  // [bp-0xc8]
    char v12;  // [bp-0xc0]
    unsigned long long v13;  // [bp-0xb0]
    char v14;  // [bp-0xa8]
    char v15;  // [bp-0x98]
    char v16;  // [bp-0x88]
    char v17;  // [bp-0x78]
    void* v18;  // [bp-0x70]
    unsigned long long v19;  // [bp-0x68]
    char v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    char v23;  // [bp-0x48]
    char v24;  // [bp-0x40]
    unsigned long long v26[2];  // r15
    void* v27;  // rax
    unsigned long long v28;  // rbx
    void* v29;  // rax
    unsigned long long v31;  // rdx
    unsigned long long v32;  // r12

    v26 = std::sync::once_lock::OnceLock<T>::get_or_try_init();
    v0 = 0;
    v5 = a0;
    v8 = a1;
    v9 = 0;
    v10 = a1;
    v11 = 1;
    v0.set_span(a1);
    memcpy(&v16, &v10, 16);
    memcpy(&v15, &v8, 16);
    memcpy(&v14, &v0, 16);
    v0.search_half(v26[0], v26[1], &v14);
    if (!v1)
        return 3;
    v0.captures_at(v26, a0, a1);
    if (v1 == 2)
        return 3;
    v19 = v13;
    memcpy(&v17, &v12, 16);
    memcpy(&v16, &v10, 16);
    memcpy(&v15, &v8, 16);
    memcpy(&v14, &v0, 16);
    v23.get_group(&v15, 1);
    if (*((int *)&v23) == 1)
    {
        v27 = v18;
        v5 = v19;
        *((int128_t *)&v7) = *((int128_t *)&v24);
    }
    else
    {
        v27 = 0;
    }
    v0 = v27;
    v28 = v0.map_or();
    v0.get_group(&v15, 2);
    if (v1 != 1)
    {
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v14);
        return 3;
    }
    v0 = v18;
    v6 = v19;
    *((int128_t *)&v7) = *((int128_t *)&v6);
    if (!((char)fd::filter::size::SizeFilter::parse_opt::{{closure}}(&v0) & 1))
    {
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v14);
        return 3;
    }
    v23.get_group(&v15, 3);
    if (*((int *)&v23) == 1)
    {
        v29 = v18;
        v5 = v19;
        *((int128_t *)&v7) = *((int128_t *)&v24);
    }
    else
    {
        v29 = 0;
    }
    v0 = v29;
    alloc::str::<impl str>::to_lowercase(&v20, v0.map_or(), v31);
    if (!(char)core::slice::<impl [T]>::starts_with(v21, v22, "kimigitibsrc/filter/size.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 2))
    {
        v1 = 0;
        if (!(char)core::slice::<impl [T]>::starts_with(v21, v22, ::0x5ccc90::core::char::methods::encode_utf8_raw(107, &v1), v31) && !(char)core::slice::<impl [T]>::starts_with(v21, v22, "migitibsrc/filter/size.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 2))
        {
            v2 = 0;
            if (!(char)core::slice::<impl [T]>::starts_with(v21, v22, ::0x5ccc90::core::char::methods::encode_utf8_raw(109, &v2), v31) && !(char)core::slice::<impl [T]>::starts_with(v21, v22, "gitibsrc/filter/size.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 2))
            {
                v3 = 0;
                if (!(char)core::slice::<impl [T]>::starts_with(v21, v22, ::0x5ccc90::core::char::methods::encode_utf8_raw(103, &v3), v31) && !(char)core::slice::<impl [T]>::starts_with(v21, v22, "tibsrc/filter/size.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 2))
                {
                    v4 = 0;
                    if (!(char)core::slice::<impl [T]>::starts_with(v21, v22, ::0x5ccc90::core::char::methods::encode_utf8_raw(116, &v4), v31) && !(char)v21.equal(v22, "bsrc/filter/size.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 1))
                    {
                        core::ptr::drop_in_place<alloc::string::String>(&v20);
                        core::ptr::drop_in_place<regex::regex::string::Captures>(&v14);
                        return 3;
                    }
                }
            }
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    v32 = 1;
    if (!(char)v28.equal(v31, "+-", 1))
        v32 = (!(char)v28.equal(v31, "-", 1) ? (unsigned int)v28.equal(v31, 1, 0) ^ 3 : 0);
    core::ptr::drop_in_place<regex::regex::string::Captures>(&v14);
    return v32;
}
