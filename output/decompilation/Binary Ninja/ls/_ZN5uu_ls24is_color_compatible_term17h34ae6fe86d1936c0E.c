
  uint64_t uu_ls::is_color_compatible_term::h34ae6fe86d1936c0()

{
    char const (** const var_88)[0xdb];
    std::env::var::hb36d41fbb9604b02(&var_88, "TERM =>  or truehidehurdNZSTTBMT…");
    char const (** const r12)[0xdb] = var_88;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1be309cc02ffb89c(&var_88);
    std::env::var::hb36d41fbb9604b02(&var_88, "COLORTERMalwaysyesforcettyif-tty…");
    char const (** const r13)[0xdb] = var_88;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1be309cc02ffb89c(&var_88);
    std::env::var::hb36d41fbb9604b02(&var_88, "TERM =>  or truehidehurdNZSTTBMT…");
    void var_68;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h82931214c46f0834(&var_68, &var_88);
    std::env::var::hb36d41fbb9604b02(&var_88, "COLORTERMalwaysyesforcettyif-tty…");
    void var_40;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h82931214c46f0834(&var_40, &var_88);
    int64_t var_58;
    int64_t var_30;
    int32_t rbx;
    
    if (!r12 && !(r13 | var_58) && !var_30)
        rbx = 0;
    else if (!var_58)
        rbx = 1;
    else
    {
        int64_t var_60;
        int64_t var_50 = var_60;
        int64_t var_48_1 = var_58;
        var_88 = &data_68be90;
        void** const var_80_1 = &uucore::features::colors::TERMS::ha2c08363bc802d0a;
        
        if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::ha1eb65c6ace6cb22(&var_88, &var_50))
            rbx = 0;
        else
            rbx = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_40);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_68);
    return rbx;
}
