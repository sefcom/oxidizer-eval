long long uu_ls::is_color_compatible_term()
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x80]
    char v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x30]
    unsigned int v10;  // ebx

    std::env::var(&v0, "TERM =>  or truehidehurdNZSTTBMTmainCubaWITAcharJuly", 4);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    std::env::var(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    std::env::var(&v0, "TERM =>  or truehidehurdNZSTTBMTmainCubaWITAcharJuly", 4);
    v2.unwrap_or_default(&v0);
    std::env::var(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    v7.unwrap_or_default(&v0);
    if (v0 || v4 || *((long long *)&v8))
    {
        if (v4)
        {
            v5 = v3;
            v6 = v4;
            v0 = _ZN6uucore8features6colors5TERMS17ha2c08363bc802d0aE;
            v1 = _ZN6uucore8features6colors5TERMS17ha2c08363bc802d0aE + 432;
            if (!v0.any(&v5))
                goto LABEL_591bef;
        }
        v10 = &g_4d2c01;
    }
    else
    {
LABEL_591bef:
        v10 = 0;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    core::ptr::drop_in_place<alloc::string::String>(&v2);
    return v10;
}
