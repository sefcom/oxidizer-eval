long long uu_pwd::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x348], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x340]
    int v2;  // [bp-0x338]
    char v3;  // [bp-0x328]
    unsigned long long v4;  // [bp-0x318]
    char v5;  // [bp-0x310], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x308]
    unsigned long long v7;  // [bp-0x300]
    unsigned long long v8;  // [bp-0x2f8]
    unsigned long long v9;  // [bp-0x2f0]
    unsigned long long v10;  // [bp-0x2e8]
    char v11;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x2d8]
    int v13;  // [bp-0x2d0]
    char v14;  // [bp-0x2c0]
    unsigned long long v15;  // [bp-0x2b0]

    uu_pwd::uu_app(&v11);
    v0.try_get_matches_from(&v11, a0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return v12.from();
    v15 = v4;
    memcpy(&v14, &v3, 16);
    v13 = v2;
    v11 = v0;
    v12 = v1;
    if (!(char)v11.get_flag("physicalNotFoundTimedOutENETDOWN\n       ", 8))
    {
        if (!(char)v11.get_flag("logicalPOSIXLY_CORRECTfailed to get current directoryfailed to print current directory/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 7))
        {
            std::env::var(&v0);
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
            if ((v0 & 1))
                goto LABEL_44ec6a;
        }
        uu_pwd::logical_path(&v0);
    }
    else
    {
LABEL_44ec6a:
        uu_pwd::physical_path(&v0);
    }
    v5.map_err_context(&v0);
    if (v5 != 0x8000000000000000)
    {
        v8 = v5;
        v9 = v6;
        v10 = v7;
        v9 = uucore::mods::display::println_verbatim(&v8).map_err_context();
        if (!v9)
        {
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
            return 0;
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
    return v9;
}
