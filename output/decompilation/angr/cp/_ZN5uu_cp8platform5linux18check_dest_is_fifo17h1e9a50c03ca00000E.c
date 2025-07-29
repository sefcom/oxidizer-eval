long long uu_cp::platform::linux::check_dest_is_fifo(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x80]
    unsigned int v4;  // ebx

    std::fs::metadata(&v0, a0, a1);
    ::0x4eb130::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v0, *((long long *)&v1));
    return v4 & 0xffffff00 | (*((int *)&v2) & 0xf000) == 0x1000 & v0 != 2;
}
