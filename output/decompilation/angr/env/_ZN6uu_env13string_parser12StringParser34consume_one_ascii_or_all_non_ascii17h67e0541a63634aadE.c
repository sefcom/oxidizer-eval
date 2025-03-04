long long uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(struct_0 *a0, void* a1)
{
    void* v0;  // [sp-0x70]
    unsigned long long v1;  // [sp-0x68]
    void* v2;  // [sp-0x60]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x47]
    char v7;  // [bp-0x44]
    unsigned long v8;  // [sp-0x40]
    char v9;  // [sp-0x38]
    unsigned int v10;  // [bp-0x37]
    unsigned int v11;  // [sp-0x34]
    unsigned long long v13;  // rax
    char v14;  // cl
    struct_0 *v16;  // rbx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    do
    {
        uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(&v3, a1);
        v13 = *((long long *)&v4);
        v14 = v5;
        if (*((long long *)&v3))
        {
            v16 = a0;
            *((unsigned long *)&v16->padding_8[0]) = v8;
            v16->field_10 = v9;
            v16->field_0 = 0x8000000000000000;
            ::0x4d5e00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_env..string_parser..Chunk$GT$$GT$::hf332c5c32dd375fc(&v0);
            return v16;
        }
        v11 = *((int *)&v7);
        v10 = *((int *)&v6);
        v8 = v13;
        v9 = v14;
        if (!v8)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd22c099f45ad1085(&v0, &v8);
            if (*((int *)&v9) < 128)
                break;
        }
        else
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd22c099f45ad1085(&v0, &v8);
        }
    } while ((uu_env::string_parser::StringParser::peek_chunk::h29c563cfd7ddf009(&v3, a1), *((long long *)&v3) && (*((long long *)&v4) || *((int *)&v5) > 127)));
    v16 = a0;
    *((void* *)&v16->field_10) = v2;
    *((int128_t *)&v16->field_0) = *((int128_t *)&v0);
    return v16;
}
