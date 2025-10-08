int uu_wc::word_count_from_reader_specialized(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xb8]
    uint128_t v1;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v2;  // [bp-0xb8]
    uint128_t v3;  // [bp-0xb8]
    uint128_t v4;  // [bp-0xa8]
    void* v5;  // [bp-0x98]
    void* v6;  // [bp-0x88]
    unsigned long long v7[3];  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    void* v11;  // [bp-0x38]
    unsigned int v12;  // [bp-0x30]
    char v13;  // [bp-0x2c]
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx

    v4 = 0;
    v3 = 0;
    v5 = 0;
    v10.buffered(a1);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v6 = 0;
    while (true)
    {
        v7.next_strict(&v10);
        if (v7 != 2)
        {
            v15 = v8;
            v16 = v9;
            if (!((char)v7 & 1))
            {
                uu_wc::process_chunk(&v0, v8, v9, &v6);
            }
            else
            {
                if (v8)
                {
                    v1 = v0 + v9;
                    *((void*)&v1) = v2;
                }
                else
                {
                    v1 = v3;
                    if (v9)
                    {
                        a0->field_20 = v5;
                        a0->field_10 = v4;
                        a0->field_0 = v3;
                        a0->field_28 = v9;
                        break;
                    }
                }
                v3 = v1;
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
            }
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<core::result::Result<&str,uu_wc::utf8::read::BufReadDecoderError>>>(&v7);
            a0->field_20 = v5;
            a0->field_10 = v4;
            a0->field_0 = v3;
            a0->field_28 = 0;
            break;
        }
    }
    return core::ptr::drop_in_place<uu_wc::utf8::read::BufReadDecoder<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v10);
}
