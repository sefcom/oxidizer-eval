long long forc_crypto::args::checked_read_file(unsigned long long a0[3], unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x40]
    char v1;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x30]
    char v3;  // [bp-0x28], Other Possible Types: unsigned long long
    char v4;  // [bp-0x20]

    if ((char)(((0 ^ *(a1)) & (0 ^ -(*(a1)))) >> 63))
    {
        a0[0] = 0x8000000000000000;
        return 0;
    }
    std::fs::read(&v3, a1);
    memcpy(&v1, &v4, 16);
    v0 = v3;
    if (v3 != 0x8000000000000000)
    {
        a0[2] = v2;
        a0[0] = v0;
        a0[1] = v1;
        return v1;
    }
    a0[0] = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<u8>,std::io::error::Error>>(&v0);
}
