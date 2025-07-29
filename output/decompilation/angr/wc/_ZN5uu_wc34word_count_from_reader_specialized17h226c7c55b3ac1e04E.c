long long uu_wc::word_count_from_reader_specialized(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v6[5];  // [bp-0x78]
    unsigned long long v7[5];  // [bp-0x78]
    unsigned long long v8[5];  // [bp-0x78]
    unsigned long long v9[5];  // [bp-0x78]
    uint128_t v10;  // [bp-0x68]
    void* v11;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x40]
    unsigned long long v18;  // rdx

    if (v14)
    {
        *(&v7) = v6 + v18;
        *(&v7) = v8;
    }
    else
    {
        *(&v7) = v9;
        if (v18)
        {
            a0->field_20 = v11;
            a0->field_10 = v10;
            *((unsigned long long [5])&a0->field_0) = v9;
            a0->field_28 = v18;
        }
    }
    *(&v9) = v7;
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
}
