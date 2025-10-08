long long uu_base32::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0[2];  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    int v2;  // [bp-0x78], Other Possible Types: char
    unsigned long long v3;  // [bp-0x70]
    int v4;  // [bp-0x68], Other Possible Types: char
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    char v11;  // [bp-0x30], Other Possible Types: unsigned long long
    char v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    int v15;  // xmm0
    unsigned long long v16;  // rax

    uu_base32::base_common::parse_base_cmd_args(&(char)v2, a0, a1);
    if (*((long long *)&v2) == 2)
        return v3;
    v13 = v7;
    memcpy(&v11, &v5, 16);
    v8 = *((long long *)&v2);
    v9 = v3;
    v10 = *((long long *)&v4);
    uu_base32::base_common::get_input(&(char)v2, &v8);
    if (*((int *)&v2) != 1)
    {
        *(v0) = v3;
        v1 = *((long long *)&v4);
        v15 = *((int128_t *)&v8);
        memcpy(&v6, &v12, 16);
        *((int128_t *)&v4) = *((int128_t *)&v10);
        v2 = v15;
        v16 = uu_base32::base_common::handle_input(&v0, &(char)v2);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uu_base32::base_common::ReadSeek>>(&v0);
        return v16;
    }
    core::ptr::drop_in_place<uu_base32::base_common::Config>(*((long long *)&v4), v11);
    return v3;
}
