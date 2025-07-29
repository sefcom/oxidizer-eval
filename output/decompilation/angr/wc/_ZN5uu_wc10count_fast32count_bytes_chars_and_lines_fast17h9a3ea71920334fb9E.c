long long uu_wc::count_fast::count_bytes_chars_and_lines_fast(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x40068]
    void* v1;  // [bp-0x40060]
    struct_0 *v2;  // [bp-0x40058]
    int v3;  // [bp-0x40050]
    void* v4;  // [bp-0x2050]
    void* v5;  // [bp-0x50]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx

    v5 = 0;
    do
    {
        v4 = 0;
    } while (&v4 != &v3);
    v1 = 0;
    memset(&v3, 0, 0x40000);
    v0 = 0;
    while (true)
    {
        v7 = a1.read(&v3, 0x40000);
        if (v7)
        {
            if ((char)v8.kind() != 35)
            {
                v2->field_0 = v0;
                v2->field_8 = 0;
                v2->field_10 = v1;
                *((uint128_t *)&(&v2->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v2->field_18 + 8)) = v8;
                return a0;
            }
            else if (((char)v7 & 1))
            {
                ::0x4c05d0::core::ptr::drop_in_place<std::io::error::Error>(v8);
            }
        }
        else
        {
            if (v8)
            {
                v0 += v8;
                v1 += bytecount::count(v8.index(&v3, &g_59f938), v8, 10);
            }
            else
            {
                v2->field_0 = v0;
                v2->field_8 = 0;
                v2->field_10 = v1;
                *((uint128_t *)&(&v2->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v2->field_18 + 8)) = 0;
                return a0;
            }
        }
    }
}
