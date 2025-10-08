void forc_crypto::main()
{
    unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char *v3;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x50]
    void* v5;  // [bp-0x48], Other Possible Types: char
    unsigned short v6;  // [bp-0x46]
    unsigned long long v7;  // [bp-0x38]
    char *v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    char v10;  // [bp-0x20]
    char v11;  // [bp-0x10]

    v5 = 0;
    v6 = 1026;
    v1 = 6;
    v2 = 0x8000000000000000;
    forc_tracing::init_tracing_subscriber(&v1);
    v7 = (unsigned long long)forc_crypto::run();
    if (v7)
    {
        v0 = v7;
        v8 = &v0;
        v9 = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
        v1 = &g_47ab60;
        v2 = 1;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        v10.map_or_else(&v1);
        memcpy(&v1, &v10, 16);
        v3 = *((long long *)&v11);
        forc_tracing::println_error(1, *((long long *)&v11));
        core::ptr::drop_in_place<alloc::string::String>(&v1);
        std::process::exit(1); /* do not return */
    }
    v7.drop_in_place<core::result::Result<(),anyhow::Error>>();
    return;
}
