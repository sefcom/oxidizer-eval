long long flealib::ftp::FTP::read_file_to_vec(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x24]
    void* v1;  // [bp-0x20], Other Possible Types: char
    unsigned int v2;  // [bp-0x1c]
    unsigned long v3;  // [bp-0x18], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x10]
    unsigned long v6;  // rdx

    v1.open(a1, a2);
    if ((v1 & 1))
    {
        *((unsigned long *)&a0->padding_1[7]) = v3;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = v2;
    v1 = 0;
    v3 = 1;
    v4 = 0;
    if (v0.read_to_end(&v1))
    {
        *((unsigned long *)&a0->padding_1[7]) = v6;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        ::0x7a1be0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
    }
    else
    {
        a0->field_10 = 0;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v1);
    }
    return ::0x7a1b00::core::ptr::drop_in_place<std::fs::File>(v0);
}
