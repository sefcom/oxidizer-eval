int uu_wc::word_count_from_reader_specialized(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v1[5];  // [bp-0xb8]
    unsigned long long v2[5];  // [bp-0xb8]
    unsigned long long v3[5];  // [bp-0xb8]
    unsigned long long v4[5];  // [bp-0xb8]
    uint128_t v5;  // [bp-0xa8]
    void* v6;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x80]
    unsigned long v10;  // [bp-0x78]

    if (v9)
    {
        *(&v2) = v1 + v10;
        *(&v2) = v3;
    }
    else
    {
        *(&v2) = v4;
        if (v10)
        {
            a0->field_20 = v6;
            a0->field_10 = v5;
            *((unsigned long long [5])&a0->field_0) = v4;
            a0->field_28 = v10;
        }
    }
    *(&v4) = v2;
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
}
