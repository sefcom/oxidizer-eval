long long uu_wc::count_fast::count_bytes_chars_and_lines_fast(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x4040]
    struct_0 *v1;  // [bp-0x4038]
    void* v2;  // [bp-0x4030]
    void* v3;  // [bp-0x3030]
    void* v4;  // [bp-0x2030]
    void* v5;  // [bp-0x1030]
    void* v7;  // rbx
    unsigned long long v8;  // r12
    unsigned long long v9;  // rdx

    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v7 = 0;
    memset(&v2, 0, 0x4000);
    v0 = 0;
    while (true)
    {
        v8 = a1.read(&v2, 0x4000);
        if (((char)v8 & 1))
        {
            if ((char)v9.kind() == 35)
            {
                core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v8, v9);
            }
            else
            {
                v1->field_0 = 0;
                v1->field_8 = v7;
                v1->field_10 = v0;
                *((uint128_t *)&(&v1->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v1->field_18 + 8)) = v9;
                return a0;
            }
        }
        else
        {
            if (v9)
            {
                v7 += bytecount::num_chars(0.index(v9, &v2, 0x4000, &g_4f8f28), v9);
                v0 += bytecount::count(0.index(v9, &v2, 0x4000, &g_4f8f40), v9, 10);
            }
            else
            {
                v1->field_0 = 0;
                v1->field_8 = v7;
                v1->field_10 = v0;
                *((uint128_t *)&(&v1->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v1->field_18 + 8)) = 0;
                return a0;
            }
        }
    }
}
