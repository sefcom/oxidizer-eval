long long uu_kill::print_signal(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xe1]
    char v1;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xd8]
    char *v3;  // [bp-0xd0]
    unsigned long long v4;  // [bp-0xc8]
    void* v5;  // [bp-0xc0]
    char *v6;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    unsigned int v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    char *v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    void* v14;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x68]
    void* v16;  // [bp-0x60]
    char v17;  // [bp-0x58]
    unsigned long v18;  // [bp-0x50]
    unsigned long long v19;  // [bp-0x48]
    unsigned long v20;  // [bp-0x40]
    unsigned long v21;  // [bp-0x38]
    unsigned long long v23;  // rbx
    unsigned long long v24;  // rax
    unsigned long long v25[2];  // rdx
    char *v26;  // r15
    unsigned long long v27;  // 4096
    unsigned long long v28[2];  // rdx
    unsigned long long v29[2];  // rdx
    unsigned long long v30;  // rbp
    char v31;  // al
    char v33;  // al

    v23 = a0;
    ::0x45aa80::core::num::<impl usize>::from_ascii_radix(&v1, a0, a1);
    v0 = v1;
    v11 = v2;
    v14 = &_ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E;
    v15 = &g_4e8200;
    v16 = 0;
    v24 = v14.next();
    if (v25)
    {
        v18 = (char)v11;
        v26 = &v7;
        v27 = a1;
        do
        {
            v29 = v28;
            v30 = v27;
            v19 = v24;
            v20 = v29[0];
            v21 = v29[1];
            if ((char)::0x45bb40::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v29[0], v29[1], v23, v30))
            {
                v6 = &v19;
                v8 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v1 = &g_4e7650;
                v2 = 2;
                v5 = 0;
                v3 = v26;
                v4 = 1;
                std::io::stdio::_print(&v1);
                return 0;
            }
            v12 = &v20;
            v13 = <&T as core::fmt::Display>::fmt;
            v1 = &g_4e7640;
            v2 = 1;
            v5 = 0;
            v3 = &v12;
            v4 = 1;
            v7.map_or_else(&v1);
            v31 = ::0x45bb40::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v8, v9, v23, v30);
            core::ptr::drop_in_place<alloc::string::String>(v6, v8);
            if (v31)
            {
                v6 = &v19;
                v8 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v1 = &g_4e7650;
                v2 = 2;
                v5 = 0;
                v3 = &v7;
                v4 = 1;
                std::io::stdio::_print(&v1);
                return 0;
            }
            v1.to_vec(core::fmt::num::imp::<impl u64>::_fmt(v24, &v7, 20), v25);
            v33 = v23.equal(a1, 1, v3);
            core::ptr::drop_in_place<alloc::string::String>(v1, 1);
            if (v33 || !v0 && (v18 == v24 || v11 == v24 + 128))
            {
                v6 = &v20;
                v8 = <&T as core::fmt::Display>::fmt;
                v1 = &g_4e7650;
                v2 = 2;
                v5 = 0;
                v3 = &v6;
                v1 = &g_4e7650;
                v4 = 1;
                std::io::stdio::_print(&v1);
                return 0;
            }
            v24 = v14.next();
            v26 = &v7;
            v27 = a1;
        } while (v25);
    }
    v14 = 0;
    v15 = v23;
    v17 = 1;
    v12 = &v14;
    v13 = <os_display::Quoted as core::fmt::Display>::fmt;
    v1 = &g_4e7670;
    v2 = 2;
    v5 = 0;
    v3 = &v12;
    v4 = 1;
    v6.map_or_else(&v1);
    v10 = 1;
    return v6.new();
}
