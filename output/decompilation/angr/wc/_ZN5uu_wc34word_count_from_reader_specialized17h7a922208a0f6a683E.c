long long uu_wc::word_count_from_reader_specialized(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v5[5];  // [bp-0x78]
    unsigned long long v6[5];  // [bp-0x78]
    unsigned long long v7[5];  // [bp-0x78]
    unsigned long long v8[5];  // [bp-0x78]
    uint128_t v9;  // [bp-0x68]
    void* v10;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v17;  // rdx

    if (v13)
    {
        *(&v6) = v5 + v17;
        *(&v6) = v7;
    }
    else
    {
        *(&v6) = v8;
        if (v17)
        {
            a0->field_20 = v10;
            a0->field_10 = v9;
            *((unsigned long long [5])&a0->field_0) = v8;
            a0->field_28 = v17;
        }
    }
    *(&v8) = v6;
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
}
