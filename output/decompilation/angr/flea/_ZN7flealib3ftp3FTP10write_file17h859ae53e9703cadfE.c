long long flealib::ftp::FTP::write_file(unsigned long long a0, unsigned long long a1[3])
{
    unsigned int v0;  // [bp-0x24]
    char v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    char v3;  // [bp-0x18]
    unsigned long long v5;  // r14

    v1.create(a0);
    if ((v1 & 1))
    {
        v5 = *((long long *)&v3);
    }
    else
    {
        v0 = v2;
        v5 = v0.write_all(a1[1], a1[2]);
        ::0x7a1b00::core::ptr::drop_in_place<std::fs::File>(v0);
        if (!v5)
            v5 = 0;
    }
    ::0x7a1be0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a1);
    return v5;
}
