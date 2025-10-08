long long uu_yes::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x398]
    unsigned long long v1;  // [bp-0x390]
    void* v2;  // [bp-0x380]
    char *v3;  // [bp-0x378], Other Possible Types: unsigned long long (64 bits)[1], unsigned long long
    unsigned long long v4;  // [bp-0x370]
    int v5;  // [bp-0x368]
    char v6;  // [bp-0x358]
    char v7;  // [bp-0x348]
    unsigned long long v8;  // [bp-0x338]
    unsigned long long v9;  // [bp-0x330]
    int v10;  // [bp-0x328]
    char v11;  // [bp-0x318]
    unsigned long long v12;  // [bp-0x308]
    int v13;  // [bp-0x300], Other Possible Types: char
    unsigned long long v14;  // [bp-0x2f0]
    char v15;  // [bp-0x2e8]
    int v16;  // [bp-0x2e8]
    unsigned long long v17;  // [bp-0x2e0]
    char *v18;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned int v19;  // [bp-0x2d0], Other Possible Types: unsigned long long
    void* v20;  // [bp-0x2c8]
    unsigned long long v22;  // rdi
    unsigned long long v23;  // rdx
    unsigned long long v24;  // r14
    void* v25;  // rax

    uu_yes::uu_app(&v15);
    v3.try_get_matches_from(&v15, a0, a1);
    v22 = v4;
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v9.from();
    v12 = *((long long *)&v7);
    memcpy(&v11, &v6, 16);
    v10 = v5;
    v8 = v3;
    v9 = v4;
    v1 = 0x4000.with_capacity_in(1, 1, &g_4d7578);
    v2 = 0;
    v15.try_get_many(&v8);
    v3.unwrap(&v15);
    uu_yes::args_into_buffer(&v1, &v3);
    uu_yes::prepare_buffer(&v1);
    v24 = uu_yes::exec(v23, 0);
    if (!v24)
    {
LABEL_44ef33:
        v25 = 0;
    }
    else if ((char)v24.kind() == 11)
    {
        core::ptr::drop_in_place<std::io::error::Error>(v24);
        goto LABEL_44ef33;
    }
    else
    {
        v0 = v24;
        v3 = &v0;
        v4 = <std::io::error::Error as core::fmt::Display>::fmt;
        *((unsigned long long **)&v16) = &g_4d7568;
        v17 = 1;
        v20 = 0;
        v18 = &v3;
        v19 = 1;
        v13.map_or_else(&(unsigned long long)v16);
        v19 = 1;
        v16 = v13;
        v18 = v14;
        v25 = (unsigned long long)v16.new();
        core::ptr::drop_in_place<std::io::error::Error>(v0);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v1, v23);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
    return v25;
}
