long long uu_pr::pr(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xc8], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    unsigned long v3;  // [bp-0xb0]
    int v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x88]
    int v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned long long v12;  // r14
    unsigned long long v13;  // rdx
    int v14;  // xmm0

    uu_pr::open(&v0, a1, a2);
    if (v0 != 9223372036854775813)
    {
        *((unsigned long *)a0) = v0;
        *((unsigned long long *)&a0[8]) = v1;
        *((unsigned long long *)&a0[16]) = v2;
        *((unsigned long *)&a0[24]) = v3;
        return a0;
    }
    v10.with_capacity(v1, v2);
    v12 = uu_pr::read_stream_and_create_pages(a3, &v10, 0);
    while (true)
    {
        v7.next(v12);
        if ((long long)v8 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_6694e0);
            *((unsigned int *)&a0[8]) = 0;
            *((unsigned long long *)a0) = 9223372036854775813;
            return a0;
        }
        v4 = v8;
        v6 = v9;
        if (((char)uu_pr::print_page(v5, v9, a3, v7 + 1) & 1))
        {
            v0.from(v13);
            v14 = *((int128_t *)&v0);
            *((int128_t *)&a0[16]) = *((int128_t *)&v2);
            *(a0) = v14;
            (char)v4.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_6694e0);
            return a0;
        }
        v8.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
    }
}
