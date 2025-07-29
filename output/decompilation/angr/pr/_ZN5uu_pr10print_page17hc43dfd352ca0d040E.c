long long uu_pr::print_page(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long v1;  // [bp-0xf0]
    unsigned long v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd8]
    void* v5;  // [bp-0xd0]
    char v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    unsigned long v8;  // [bp-0xb0]
    int v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    unsigned long v12;  // [bp-0x88]
    unsigned long v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x68]
    char v15;  // [bp-0x60]
    int v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x50]
    char v18;  // [bp-0x48]
    unsigned long long v20;  // rax
    unsigned long long v21[3];  // rdx
    unsigned long long v22[3];  // rdx

    v2 = a2->field_50;
    v1 = a2->field_58;
    uu_pr::header_content(&v18, a2, a3);
    uu_pr::trailer_content(&v6, a2->field_141, a2->field_142);
    v12 = a2->field_a0;
    v13 = a2->field_98;
    v14 = std::io::stdio::stdout();
    v0 = v14.lock();
    v3.into_iter(&v18);
    (char)v16.next(&v3);
    if (!((char)(((0 ^ *((long long *)&v15)) & (0 ^ -(*((long long *)&v15)))) >> 63)))
    {
        do
        {
            v9 = v16;
            v11 = v17;
            if (v0.write_all(v10, v17) || v0.write_all(v2, v1))
            {
                ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
                ::0x5a7aa0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v3);
                core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                return 1;
            }
            ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&(char)v9);
            (char)v16.next(&v3);
        } while ((long long)v16 != 0x8000000000000000);
    }
    ::0x5a7aa0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v3);
    if (uu_pr::write_columns(a0, a1, a2, &v0))
    {
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
        return 1;
    }
    v3 = v7;
    v4 = v7 + v8 * 24;
    v5 = 0;
    v20 = v3.next();
    if (v21)
    {
        while (!v0.write_all(v22[1], v22[2]) && (v20 + 1 == v8 || !v0.write_all(v2, v1)))
        {
            v20 = v3.next();
            if (!v21)
                goto LABEL_5aec0a;
        }
    }
    else
    {
LABEL_5aec0a:
        if (!v0.write_all(v13, v12) && !v0.flush())
        {
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
            return 0;
        }
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
    return 1;
}
