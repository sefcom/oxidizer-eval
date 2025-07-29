char uu_comm::OrderChecker::verify_order(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb8]
    char *v2;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa8]
    void* v4;  // [bp-0xa0]
    int v5;  // [bp-0x90], Other Possible Types: char
    unsigned long long v6;  // [bp-0x80]
    char *v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    int v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x58]
    char v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x40]
    char v14;  // al
    char v15;  // al

    if (a0->field_10)
    {
        v14 = a1.compare(a2, *((long long *)&a0->padding_1[7]), a0->field_10);
        if (v14 >= 2 && a0->field_1a != 1)
        {
            v5.to_vec("file_num", 8);
            v0.to_vec((a0->field_18 ? "2comm-error-file-not-sorted" : "12comm-error-file-not-sorted"), 1);
            v12 = v2;
            memcpy(&v11, &v0, 16);
            v9 = v5;
            v10 = v6;
            v0.from_iter(&v9);
            uucore::mods::locale::get_message_with_args(&v5, "comm-error-file-not-sorted", 26, &v0);
            v7 = &v5;
            v8 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_572158;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            ::0x499880::core::ptr::drop_in_place<alloc::string::String>(&v5);
            a0->field_1a = 1;
        }
        v0.to_vec(a1, a2);
        ::0x4998c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a0);
        a0->field_10 = v2;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        v15 = a0->field_19 ^ 1 | v14 < 2;
    }
    else
    {
        (char)v0.to_vec(a1, a2);
        ::0x4998c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a0);
        a0->field_10 = v2;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        v15 = 1;
    }
    return v15 & 1;
}
