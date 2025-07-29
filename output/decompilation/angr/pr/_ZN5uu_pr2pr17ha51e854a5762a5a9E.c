long long uu_pr::pr(int a0[17], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    unsigned long long v3[3];  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    int v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned long long v12;  // r14
    unsigned long long v13;  // rdx
    int v14;  // xmm0

    uu_pr::open(&v3, a1, a2);
    if (v3 != 9223372036854775813)
    {
        *((unsigned long long [3])&a0[0]) = v3;
        *((unsigned long long *)&a0[8]) = v4;
        *((unsigned long long *)&a0[16]) = v5;
        *((unsigned long *)&a0[24]) = v6;
        return a0;
    }
    v10.with_capacity(0x10000, v4, v5);
    v12 = uu_pr::read_stream_and_create_pages(a3, &v10, 0);
    while (true)
    {
        v7.next(v12);
        if ((long long)v8 == 0x8000000000000000)
        {
            ::0x5a62e0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_755ea8);
            *((unsigned int *)&a0[8]) = 0;
            *((unsigned long long *)&a0[0]) = 9223372036854775813;
            return a0;
        }
        v0 = v8;
        v2 = v9;
        if (uu_pr::print_page(v1, v9, a3, v7 + 1))
        {
            v3.from(v13);
            v14 = *((int128_t *)&v3[0]);
            *((int128_t *)&a0[16]) = *((int128_t *)&v5);
            a0[0] = v14;
            (char)v0.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
            ::0x5a62e0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_755ea8);
            return a0;
        }
        (char)v0.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
    }
}
