
  fn alacritty::cli::parse_class::h820840b182640881(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void) -> i64

{
    let mut r14: *mut c_void = arg3;
    let mut r15: *mut i8 = arg2;
    let mut var_40: *mut i8;
    core::str::_$LT$impl$u20$str$GT$::split_once::ha4263c82d6adeb01(&var_40, arg2, arg3);
    let r12: *mut i8 = var_40;
    let mut rdx: u64 = r14;
    let mut rsi: *mut i8 = r15;
    
    if r12 != 0
    {
        let var_30: *mut i8;
        r15 = var_30;
        let var_28: *mut c_void;
        r14 = var_28;
        
        if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(
            0x2c, r15, r14) != 0
        {
            let result: i64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&arg1[1], "Too many parametersInvalid worki…", 0x13);
            *arg1 = -0x8000000000000000;
            return result;
        }
        
        let var_38: u64;
        rdx = var_38;
        rsi = r12;
    }
    
    /* tailcall */
    alacritty::config::window::Class::new::h2eae1c576e64848a(arg1, rsi, rdx, r15, r14)
}
