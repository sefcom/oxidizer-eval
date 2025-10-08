void uu_chroot::name_to_gid(unsigned int a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned long long
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x28]
    unsigned long long v7;  // rax

    v3.locate(a1, a2);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        v2 = *((long long *)&v4);
        v0 = 1;
        v7 = ::0x463c50::core::num::<impl u32>::from_ascii_radix(a1, a2);
        if (((char)v7 & 1))
        {
            a0[0] = 9;
            core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v0);
            return;
        }
        a0[1] = v7 >> 32;
    }
    else
    {
        core::ptr::drop_in_place<uucore::features::entries::Group>(&v3);
        v1 = *((int *)&v5);
        v0 = 0;
        a0[1] = *((int *)&v5);
    }
    a0[0] = 14;
    core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(&v0);
    return;
}
