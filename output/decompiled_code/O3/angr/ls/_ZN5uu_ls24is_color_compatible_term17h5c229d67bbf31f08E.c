long long uu_ls::is_color_compatible_term::h5c229d67bbf31f08()
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x80]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    char v6;  // [bp-0x40]
    unsigned long long v7;  // [sp-0x38]
    unsigned long long v8;  // [sp-0x30]
    unsigned long long v10;  // rax
    void* v11;  // rax

    std::env::var::hb53068d7e3fff36b(&v0, "TERM or  => hidehurdcharJuly", 4);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hfee43625aff72c46(&v0);
    std::env::var::hb53068d7e3fff36b(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hfee43625aff72c46(&v0);
    std::env::var::hb53068d7e3fff36b(&v0, "TERM or  => hidehurdcharJuly", 4);
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::hc21ef45fc40e618b(&v2, &v0);
    std::env::var::hb53068d7e3fff36b(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::hc21ef45fc40e618b(&v5, &v0);
    v10 = *((long long *)&v4);
    if (!v0 && !v10)
    {
        if (!(!v0) || !(!*((long long *)&v6)))
        {
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v5);
            vvar_181{reg 16} = ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2) | -0x100 | 1;
            return v11;
        }
    }
    else
    {
        if (!(v10) || !((v7 = (unsigned long long)*((long long *)&v3), v8 = v10, v0 = (unsigned long long)&anon.82c3ed8cdb07ba982e54791b0c97d0cf.64.llvm.541762227079851447, v1 = (unsigned long long)&g_616df0, !(char)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h27c02e7a7d2d8b00(&v0, &v7))))
        {
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v5);
            v11 = ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2) | -0x100 | 1;
            return v11;
        }
    }
    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v5);
    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2);
    return 0;
}
