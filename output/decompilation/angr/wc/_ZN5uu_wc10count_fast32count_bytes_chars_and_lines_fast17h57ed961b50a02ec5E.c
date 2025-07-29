long long uu_wc::count_fast::count_bytes_chars_and_lines_fast(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x40060]
    struct_0 *v1;  // [bp-0x40058]
    int v2;  // [bp-0x40050]
    void* v3;  // [bp-0x2050]
    void* v4;  // [bp-0x50]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx

    v4 = 0;
    do
    {
        v3 = 0;
    } while (&v3 != &v2);
    v0 = 0;
    memset(&v2, 0, 0x40000);
    while (true)
    {
        v6 = a1.read(&v2, 0x40000);
        if (v6)
        {
            if ((char)v7.kind() != 35)
            {
                v1->field_0 = 0;
                v1->field_10 = v0;
                *((uint128_t *)&(&v1->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v1->field_18 + 8)) = v7;
                return a0;
            }
            else if (((char)v6 & 1))
            {
                ::0x4c05d0::core::ptr::drop_in_place<std::io::error::Error>(v7);
            }
        }
        else
        {
            if (v7)
            {
                v0 += bytecount::count(v7.index(&v2, &g_59f938), v7, 10);
            }
            else
            {
                v1->field_0 = 0;
                v1->field_10 = v0;
                *((uint128_t *)&(&v1->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v1->field_18 + 8)) = 0;
                return a0;
            }
        }
    }
}
