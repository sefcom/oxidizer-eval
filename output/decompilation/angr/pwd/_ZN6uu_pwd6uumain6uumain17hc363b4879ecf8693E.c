long long uu_pwd::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x368]
    unsigned long long v1;  // [bp-0x360]
    int v2;  // [bp-0x358]
    char v3;  // [bp-0x348]
    unsigned long long v4;  // [bp-0x338]
    char v5;  // [bp-0x330], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x328]
    int v7;  // [bp-0x320]
    char v8;  // [bp-0x310]
    unsigned long long v9;  // [bp-0x300]
    unsigned long long v10;  // [bp-0x2f8]
    unsigned long long v11;  // [bp-0x2f0]
    unsigned long long v12;  // [bp-0x2e8]
    char v13;  // [bp-0x2e0]

    uu_pwd::uu_app(&v13);
    v5.try_get_matches_from(&v13, a0, a1);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1.from();
    v4 = v9;
    memcpy(&v3, &v8, 16);
    v2 = v7;
    v0 = v5;
    v1 = v6;
    if (!(char)v0.get_flag("physical", 8))
    {
        if (!(char)v0.get_flag("logicalPOSIXLY_CORRECT/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 7))
        {
            std::env::var(&v13, "POSIXLY_CORRECT/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15);
            if ((v13 & 1))
            {
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v13);
                goto LABEL_48fbbc;
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v13);
            }
        }
        uu_pwd::logical_path(&v13);
    }
    else
    {
LABEL_48fbbc:
        uu_pwd::physical_path(&v13);
    }
    v5.map_err_context(&v13);
    if (v5 != 0x8000000000000000)
    {
        v10 = v5;
        v11 = v6;
        v12 = (long long)v7;
        v11 = uucore::mods::display::println_verbatim(&v10).map_err_context();
        if (!v11)
        {
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
            return 0;
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v11;
}
