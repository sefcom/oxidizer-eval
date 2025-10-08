void uu_false::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3a0]
    unsigned long long v1;  // [bp-0x398]
    char *v2;  // [bp-0x390], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x388]
    char *v4;  // [bp-0x380], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x378]
    char *v6;  // [bp-0x370]
    unsigned long long v7;  // [bp-0x368]
    unsigned long long v8;  // [bp-0x360]
    unsigned long long v9;  // [bp-0x358]
    char *v10;  // [bp-0x350]
    unsigned long long v11;  // [bp-0x348]
    void* v12;  // [bp-0x340]
    char v13;  // [bp-0x330]
    unsigned long v14;  // [bp-0x320]
    char v15;  // [bp-0x318], Other Possible Types: unsigned long long
    char v16;  // [bp-0x310]
    char v17;  // [bp-0x2e0]
    unsigned int v19;  // eax
    unsigned long long v20;  // r14
    unsigned long long v21;  // rdx

    uu_false::uu_app(&v17);
    uucore::mods::error::set_exit_code(1);
    v13.collect(a0, a1);
    if (v14 > 2)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v13);
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v17);
        return;
    }
    v15.try_get_matches_from_mut(&v17, &v13);
    if ((char)(((0 ^ v15) & (0 ^ -(v15))) >> 63))
    {
        switch (v19)
        {
        case 12:
            v20 = v17.print_help();
            if (v20)
            {
LABEL_448ce3:
                v0 = v20;
                v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                v2 = uucore::util_name();
                v3 = v21;
                v4 = &v2;
                v5 = <&T as core::fmt::Display>::fmt;
                v6 = &v0;
                v7 = <std::io::error::Error as core::fmt::Display>::fmt;
                v8 = &g_4caed0;
                v9 = 3;
                v12 = 0;
                v10 = &v4;
                v11 = 2;
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v1.write_fmt(&v8));
                core::ptr::drop_in_place<std::io::error::Error>(v0);
            }
            break;
        case 14:
            v1 = std::io::stdio::stdout();
            v4.render_version(&v17);
            v2 = &v4;
            v3 = <alloc::string::String as core::fmt::Display>::fmt;
            v8 = &g_415960;
            v9 = 1;
            v12 = 0;
            v10 = &v2;
            v11 = 1;
            v20 = v1.write_fmt(&v8);
            core::ptr::drop_in_place<alloc::string::String>(v4, v5);
            if (v20)
                goto LABEL_448ce3;
            break;
        default:
            goto LABEL_448d83;
        }
LABEL_448d83:
        core::ptr::drop_in_place<clap_builder::error::Error>(*((long long *)&v16));
        if (v15 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v17);
            return;
        }
    }
    core::ptr::drop_in_place<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error>>(&v15);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v17);
    return;
}
