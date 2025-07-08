
  fn uu_ls::is_color_compatible_term::h4d28f84ec695f678() -> i64

{
    let mut var_88: *mut *mut c_void;
    std::env::var::hc35b8d22aa896d90(&var_88, "TERM or  => hidehurdcharJuly -> …");
    let r12: *mut *mut c_void = var_88;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&var_88);
    std::env::var::hc35b8d22aa896d90(&var_88, "COLORTERMalwaysyesforcettyif-tty…");
    let r13: *mut *mut c_void = var_88;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h586f11e1c15586f9(&var_88);
    std::env::var::hc35b8d22aa896d90(&var_88, "TERM or  => hidehurdcharJuly -> …");
    let mut var_68: ();
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h7c71ec71f2af1074(&var_68, &var_88);
    std::env::var::hc35b8d22aa896d90(&var_88, "COLORTERMalwaysyesforcettyif-tty…");
    let mut var_50: ();
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h7c71ec71f2af1074(&var_50, &var_88);
    let var_58: i64;
    let var_40: i64;
    
    if (r13 | r12) == 0 && var_58 == 0 && var_40 == 0
    {
        'label_51f3e6:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_68);
        return 0;
    }
    
    if var_58 != 0
    {
        let var_60: i64;
        let mut var_38: i64 = var_60;
        let var_30_1: i64 = var_58;
        var_88 = &anon.84df56382e2e566cd8a063a5d0153d3b.47.llvm.4004663911042702431;
        let var_80_1: *mut c_void = &data_616b60;
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h6b45ee6d46bfadae(&var_88, &var_38) == 0
        {
            goto 'label_51f3e6;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_50);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_68);
    let mut result: i64;
    result = 1;
    result
}
