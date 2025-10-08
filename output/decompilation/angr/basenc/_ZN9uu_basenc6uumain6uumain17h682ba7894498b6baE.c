long long uu_basenc::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    int v2;  // [bp-0x88], Other Possible Types: char
    unsigned long long v3;  // [bp-0x80]
    int v4;  // [bp-0x78], Other Possible Types: char
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    char v12;  // [bp-0x38], Other Possible Types: unsigned long long
    char v13;  // [bp-0x30]
    unsigned long long v14;  // [bp-0x28]
    unsigned int v16;  // ebp
    int v17;  // xmm0
    unsigned long long v18;  // rax

    uu_basenc::parse_cmd_args(&(char)v2, a0, a1);
    if (*((long long *)&v2) == 2)
        return v3;
    v14 = v7;
    memcpy(&v12, &v5, 16);
    v16 = v8;
    v9 = *((long long *)&v2);
    v10 = v3;
    v11 = *((long long *)&v4);
    uu_base32::base_common::get_input(&(char)v2, &v9);
    if (*((int *)&v2) != 1)
    {
        v0 = v3;
        v1 = *((long long *)&v4);
        v17 = *((int128_t *)&v9);
        memcpy(&v6, &v13, 16);
        *((int128_t *)&v4) = *((int128_t *)&v11);
        v2 = v17;
        v18 = uu_base32::base_common::handle_input(&v0, v16, &(char)v2);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uu_base32::base_common::ReadSeek>>(&v0);
        return v18;
    }
    core::ptr::drop_in_place<uu_base32::base_common::Config>(*((long long *)&v4), v12);
    return v3;
}
