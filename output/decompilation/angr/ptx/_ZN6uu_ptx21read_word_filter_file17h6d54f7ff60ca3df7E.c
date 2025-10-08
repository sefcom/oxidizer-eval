long long uu_ptx::read_word_filter_file(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x124]
    int v1;  // [bp-0x118], Other Possible Types: char
    unsigned int v2;  // [bp-0x114]
    unsigned long long v3;  // [bp-0x110]
    int v4;  // [bp-0x108]
    int v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xe8]
    char v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    int v10;  // [bp-0xc8], Other Possible Types: char
    int v11;  // [bp-0xb8]
    int v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    int v19;  // [bp-0x68], Other Possible Types: char
    int v20;  // [bp-0x58]
    int v21;  // [bp-0x48]
    char v22;  // [bp-0x38]
    unsigned long long v24;  // rax
    unsigned int v25;  // ebx
    unsigned int v26;  // ebx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax

    v1.try_get_one(a1, a2, a3);
    v24 = a2.unwrap(a3, &v1);
    if (!v24)
        core::option::expect_failed("parsing options failed!src/uu/ptx/src/ptx.rs", 23, &g_651668); /* do not return */
    v7.clone(v24);
    if ((char)v8.equal(v9, "-[^]+", 1))
    {
        v26 = (v25 & 0xffffff00 | 1) & 0xffffff00 | 1;
        v27 = std::io::stdio::stdin().new();
        v28 = &g_6516d8;
    }
    else
    {
        v1.open(&v7);
        if (*((int *)&v1) == 1)
        {
            *((unsigned long long *)&a0[8]) = v3;
            *((unsigned long long *)a0) = 0;
            return v3;
        }
        v26 = 0;
        v27 = v2.new();
        v28 = &g_651680;
    }
    v19.with_capacity(v27, v28);
    v0 = v26;
    v1.default();
    v12 = v5;
    v11 = v4;
    memcpy(&v10, &v1, 16);
    v6 = *((long long *)&v22);
    v5 = v21;
    v4 = v20;
    v1 = v19;
    while (true)
    {
        v13.next(&v1);
        if (v13 == 9223372036854775809)
        {
            core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>>(&v1);
            a0[32] = v12;
            a0[16] = v11;
            *(a0) = v10;
            if (!(char)v0)
                return a0;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v7);
        }
        else if (v13 != 0x8000000000000000)
        {
            v16 = v13;
            v17 = v14;
            v18 = v15;
            v10.insert(&v16);
        }
        else
        {
            *((unsigned long long *)&a0[8]) = v14;
            *((unsigned long long *)a0) = 0;
            core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>>(&v1);
            v29 = (unsigned long long)core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v10);
            if (!(char)v0)
                return v29;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v7);
        }
    }
}
