long long uu_head::is_seekable(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v5;  // rdx

    v2 = a0.stream_position();
    v3 = v5;
    if (!v2)
    {
        v0 = a0.seek(1, 0);
        v1 = v5;
        if (!v0)
        {
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v0);
            v0 = a0.seek(0, 0.unwrap(v5));
            v1 = v5;
            return (unsigned long long)core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v0) & 0xffffffffffffff00 | !v0;
        }
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v0);
    }
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v2);
    return 0;
}
