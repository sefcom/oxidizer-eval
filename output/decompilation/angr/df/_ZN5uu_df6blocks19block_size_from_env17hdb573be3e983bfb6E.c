long long uu_df::blocks::block_size_from_env()
{
    unsigned long long v0;  // [bp-0xa0]
    char v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    void* v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    v4 = 0;
    v5 = 3;
    v6 = "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rs";
    v7 = 13;
    v8 = "BLOCK_SIZEBLOCKSIZEsrc/uu/df/src/columns.rs";
    v9 = 10;
    v10 = "BLOCKSIZEsrc/uu/df/src/columns.rs";
    v11 = 9;
    if (!v4.next())
        return 0;
    while (true)
    {
        std::env::var(&v0, v14, v15);
        if (!v0)
            break;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
        v14 = v4.next();
        if (!v14)
            return 0;
    }
    uucore::features::parser::parse_size::parse_size_u64(&v12, v2, v3);
    if ((int)*((long long *)&v12) != 4)
        core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v12);
    core::ptr::drop_in_place<alloc::string::String>(&v1);
    return *((long long *)&v12) == 4;
}
