int uu_wc::word_count_from_reader_specialized(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0[5];  // [bp-0xb8]
    unsigned long long v1[5];  // [bp-0xb8]
    unsigned long long v2[5];  // [bp-0xb8]
    unsigned long long v3[5];  // [bp-0xb8]
    uint128_t v4;  // [bp-0xa8]
    void* v5;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x70]

    if (v8)
    {
        *(&v1) = v0 + v9;
        *(&v1) = v2;
    }
    else
    {
        *(&v1) = v3;
        if (v9)
        {
            a0->field_20 = v5;
            a0->field_10 = v4;
            *((unsigned long long [5])&a0->field_0) = v3;
            a0->field_28 = v9;
        }
    }
    *(&v3) = v1;
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
}
