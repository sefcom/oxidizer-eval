long long flealib::fileserver::FileServer::read_binary_file_by_path(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    char v0;  // [bp-0xe0], Other Possible Types: unsigned int
    void* v1;  // [bp-0xc8], Other Possible Types: char
    unsigned int v2;  // [bp-0xc4]
    unsigned long long v3;  // [bp-0xc0]
    void* v4;  // [bp-0xb8]
    char v5;  // [bp-0x78]
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx

    v0.clone(a2);
    std::fs::metadata(&(char)v1, &v0);
    if (*((int *)&v1) != 2)
    {
        if (*((long long *)&v5) > 0x1f400000)
        {
            v7 = 40.new("File too large", 14);
            *((unsigned long long *)&a0->padding_1[7]) = v7;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            return a0;
        }
        (char)v1.open(a2);
        if (!(v1 & 1))
        {
            v0 = v2;
            v1 = 0;
            v3 = 1;
            v4 = 0;
            if (v0.read_to_end(&(char)v1))
            {
                *((unsigned long *)&a0->padding_1[7]) = v8;
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                ::0x7789e0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v1);
            }
            else
            {
                a0->field_10 = 0;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v1);
            }
            ::0x778970::core::ptr::drop_in_place<std::fs::File>(v0);
            return a0;
        }
    }
    *((unsigned long long *)&a0->padding_1[7]) = v7;
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return a0;
}
