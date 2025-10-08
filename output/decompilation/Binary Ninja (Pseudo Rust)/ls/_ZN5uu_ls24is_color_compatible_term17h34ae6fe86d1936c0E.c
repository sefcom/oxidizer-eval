
  fn uu_ls::is_color_compatible_term::h34ae6fe86d1936c0() -> u64

{
    let mut var_88: *mut *mut [i8; 0xdb];
    std::env::var::hb36d41fbb9604b02(&var_88, "TERM =>  or truehidehurdNZSTTBMT…");
    let r12: *mut *mut [i8; 0xdb] = var_88;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1be309cc02ffb89c(&var_88);
    std::env::var::hb36d41fbb9604b02(&var_88, "COLORTERMalwaysyesforcettyif-tty…");
    let r13: *mut *mut [i8; 0xdb] = var_88;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1be309cc02ffb89c(&var_88);
    std::env::var::hb36d41fbb9604b02(&var_88, "TERM =>  or truehidehurdNZSTTBMT…");
    let mut var_68: ();
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h82931214c46f0834(&var_68, &var_88);
    std::env::var::hb36d41fbb9604b02(&var_88, "COLORTERMalwaysyesforcettyif-tty…");
    let mut var_40: ();
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h82931214c46f0834(&var_40, &var_88);
    let var_58: i64;
    let var_30: i64;
    let mut rbx: i32;
    
    if r12 == 0 && (r13 | var_58) == 0 && var_30 == 0
    {
        rbx = 0;
    }
    else if var_58 == 0
    {
        rbx = 1;
    }
    else
    {
        let var_60: i64;
        let mut var_50: i64 = var_60;
        let var_48_1: i64 = var_58;
        var_88 = &data_68be90;
        let var_80_1: *mut *mut c_void = &uucore::features::colors::TERMS::ha2c08363bc802d0a;
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::ha1eb65c6ace6cb22(&var_88, &var_50) == 0
        {
            rbx = 0;
        }
        else
        {
            rbx = 1;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_40);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_68);
    rbx
}
