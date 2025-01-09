long long uu_ls::is_color_compatible_term::h4d28f84ec695f678()
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

    std::env::var::hc35b8d22aa896d90(&v0, "TERM or  => hidehurdcharJuly", 4);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&v0);
    std::env::var::hc35b8d22aa896d90(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&v0);
    std::env::var::hc35b8d22aa896d90(&v0, "TERM or  => hidehurdcharJuly", 4);
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h7c71ec71f2af1074(&v2, &v0);
    std::env::var::hc35b8d22aa896d90(&v0, "COLORTERMalwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 9);
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h7c71ec71f2af1074(&v5, &v0);
    v10 = *((long long *)&v4);
    if ((v0 || v0 || v10 || *((long long *)&v6)) && (!(v10) || !((v7 = (unsigned long long)*((long long *)&v3), v8 = v10, v0 = (unsigned long long)&anon.84df56382e2e566cd8a063a5d0153d3b.47.llvm.4004663911042702431, v1 = (unsigned long long)&g_616b60, !_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h6b45ee6d46bfadae(&v0, &v7)))))
    {
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v5);
        return ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v2) | -0x100 | 1;
    }
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v5);
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v2);
    return 0;
}
