long long uu_dd::BlockWriter::truncate(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if ((char)(((0 ^ *(a0)) & (0 ^ -(*(a0)))) >> 63))
    {
        v0 = a0 + 1.truncate();
        if (!v0)
            return v0;
    }
    else
    {
        v0 = a0.truncate();
        if (!v0)
            return v0;
    }
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
    return v0;
}
