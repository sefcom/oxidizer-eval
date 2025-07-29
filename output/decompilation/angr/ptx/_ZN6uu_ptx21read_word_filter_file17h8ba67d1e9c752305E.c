long long uu_ptx::read_word_filter_file(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x12c]
    char v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    unsigned long long v3;  // [bp-0x110]
    int v4;  // [bp-0x108], Other Possible Types: char
    int v5;  // [bp-0x108]
    int v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf8]
    int v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xd8]
    int v10;  // [bp-0xc8], Other Possible Types: char
    unsigned int v11;  // [bp-0xc4]
    unsigned long v12;  // [bp-0xc0]
    int v13;  // [bp-0xb8]
    int v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    int v21;  // [bp-0x68], Other Possible Types: char
    int v22;  // [bp-0x58]
    int v23;  // [bp-0x48]
    char v24;  // [bp-0x38]
    unsigned long long v26;  // rax
    unsigned int v27;  // ebx
    unsigned int v28;  // ebx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rcx
    int v31;  // xmm0
    unsigned long long v32;  // rax

    (char)v5.try_get_one(a1, a2, a3);
    v26 = a2.unwrap(a3, &(char)v5);
    if (!v26)
        core::option::expect_failed("parsing options failed!src/uu/ptx/src/ptx.rs", 23, &g_73b430); /* do not return */
    v1.clone(v26);
    if ((char)v2.equal(v3, "-[^]+", 1))
    {
        v28 = (v27 & 0xffffff00 | 1) & 0xffffff00 | 1;
        v29 = std::io::stdio::stdin().new();
        v30 = &g_73b4a0;
    }
    else
    {
        v7 = v3;
        memcpy(&v4, &v1, 16);
        v10.open(&v4);
        if ((v10 & 1))
        {
            *((unsigned long *)&a0->padding_1[7]) = v12;
            *((unsigned long long *)&a0->field_0) = 0;
            return v12;
        }
        v28 = 0;
        v29 = v11.new();
        v30 = &g_73b448;
    }
    v21.with_capacity(0x2000, v29, v30);
    v0 = v28;
    (char)v5.default();
    v14 = v8;
    v13 = v6;
    v10 = v5;
    v9 = *((long long *)&v24);
    v8 = v23;
    v6 = v22;
    v4 = v21;
    while (true)
    {
        v15.next(&v4);
        if (v15 == 9223372036854775809)
        {
            ::0x59d9b0::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>>(&v4);
            v31 = (int128_t)v10;
            *((void*)&a0->field_20) = v14;
            *((void*)&a0->field_10) = v13;
            *((void*)&a0->field_0) = v31;
            if (!(char)v0)
                return a0;
            return (unsigned long long)::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v1);
        }
        else if (v15 != 0x8000000000000000)
        {
            v18 = v15;
            v19 = v16;
            v20 = v17;
            (char)v10.insert(&v18);
        }
        else
        {
            *((unsigned long long *)&a0->padding_1[7]) = v16;
            *((unsigned long long *)&a0->field_0) = 0;
            ::0x59d9b0::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>>(&v4);
            v32 = (unsigned long long)core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&(char)v10);
            if (!(char)v0)
                return v32;
            return (unsigned long long)::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v1);
        }
    }
}
