long long uu_wc::count_fast::count_bytes_chars_and_lines_fast(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x40070]
    void* v1;  // [bp-0x40068]
    void* v2;  // [bp-0x40060]
    struct_0 *v3;  // [bp-0x40058]
    int v4;  // [bp-0x40050]
    void* v5;  // [bp-0x2050]
    void* v6;  // [bp-0x50]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v6 = 0;
    do
    {
        v5 = 0;
    } while (&v5 != &v4);
    v2 = 0;
    memset(&v4, 0, 0x40000);
    v1 = 0;
    v0 = 0;
    while (true)
    {
        v8 = a1.read(&v4, 0x40000);
        if (v8)
        {
            if ((char)v9.kind() != 35)
            {
                v3->field_0 = v0;
                v3->field_8 = v1;
                v3->field_10 = v2;
                *((uint128_t *)&(&v3->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v3->field_18 + 8)) = v9;
                return a0;
            }
            else if (((char)v8 & 1))
            {
                ::0x4c05d0::core::ptr::drop_in_place<std::io::error::Error>(v9);
            }
        }
        else
        {
            if (v9)
            {
                v0 += v9;
                v1 += bytecount::num_chars(v9.index(&v4, &g_59f950), v9);
                v2 += bytecount::count(v9.index(&v4, &g_59f938), v9, 10);
            }
            else
            {
                v3->field_0 = v0;
                v3->field_8 = v1;
                v3->field_10 = v2;
                *((uint128_t *)&(&v3->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v3->field_18 + 8)) = 0;
                return a0;
            }
        }
    }
}
