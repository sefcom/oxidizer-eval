long long fd::walk::ReceiverBuffer<W>::flush(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x10]
    char v2;  // bl
    unsigned int v3;  // ebx

    v0 = a0 + 16.flush();
    v2 = !v0;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
    return (v3 & 0xffffff00 | v2) & 0xffffff00 | v2 * 2 | 4;
}
