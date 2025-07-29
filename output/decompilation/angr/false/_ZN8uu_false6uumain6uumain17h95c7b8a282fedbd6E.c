void uu_false::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3a8]
    unsigned long long v1;  // [bp-0x3a0]
    char *v2;  // [bp-0x398], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x390]
    int v4;  // [bp-0x388], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x380]
    char *v6;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x370]
    void* v8;  // [bp-0x368]
    char *v9;  // [bp-0x350], Other Possible Types: char
    unsigned long long v10;  // [bp-0x348]
    char *v11;  // [bp-0x340]
    unsigned long long v12;  // [bp-0x338]
    int v13;  // [bp-0x330], Other Possible Types: char
    unsigned long long v14;  // [bp-0x320]
    char v15;  // [bp-0x318], Other Possible Types: unsigned long long
    char v16;  // [bp-0x310]
    char v17;  // [bp-0x2e0]
    unsigned long long v20;  // r14
    unsigned long long v21;  // rdx

    uu_false::uu_app(&v17);
    uucore::mods::error::set_exit_code(1);
    v13.collect(a0, a1);
    if (v14 > 2)
    {
        ::0x4886c0::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v13);
    }
    else
    {
        v6 = v14;
        v4 = v13;
        v15.try_get_matches_from_mut(&v17, &(char)v4);
        if ((char)(((0 ^ v15) & (0 ^ -(v15))) >> 63))
        {
            switch (*((char *)(*((long long *)&v16) + 249)))
            {
            case 12:
                v20 = v17.print_help();
                if (v20)
                {
LABEL_488e07:
                    v0 = v20;
                    v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
                    v2 = uucore::util_name();
                    v3 = v21;
                    v9 = &v2;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = &v0;
                    v12 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v4 = &g_54e998;
                    v5 = 3;
                    v8 = 0;
                    v6 = &v9;
                    v7 = 2;
                    ::0x488870::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v1.write_fmt(&v4));
                    ::0x4881a0::core::ptr::drop_in_place<std::io::error::Error>(v0);
                }
                break;
            case 14:
                v1 = std::io::stdio::stdout();
                v9.render_version(&v17);
                v2 = &v9;
                v3 = <alloc::string::String as core::fmt::Display>::fmt;
                v4 = &g_42b640;
                v5 = 1;
                v8 = 0;
                v6 = &v2;
                v7 = 1;
                v20 = v1.write_fmt(&v4);
                ::0x488190::core::ptr::drop_in_place<alloc::string::String>(&v9);
                if (!(!v20))
                    goto LABEL_488e07;
                break;
            default:
                goto LABEL_488ea3;
            }
LABEL_488ea3:
            core::ptr::drop_in_place<clap_builder::error::Error>(*((long long *)&v16));
            if (v15 != 0x8000000000000000)
                core::ptr::drop_in_place<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error>>(&v15);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error>>(&v15);
        }
    }
    ::0x488330::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v17);
    return;
}
