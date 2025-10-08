
  fn alacritty::clipboard::Clipboard::load::h12534412bc5eba1c(arg1: *mut i64, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut rax: *mut c_void = arg2.byte_offset(0x10);
    let rcx_1: u32 = *arg2.byte_offset(0x10) != 0 & arg3;
    
    if rcx_1 == 0
    {
        rax = arg2;
    }
    
    let mut var_88: i64;
    (*(*rax.byte_offset(8) + 0x18))(&var_88, *arg2.byte_offset(rcx_1 << 4));
    
    if !(0 + -(var_88))
    {
        let result: i64;
        arg1[2] = result;
        *arg1 = var_88;
        return result;
    }
    
    let var_80: i128;
    let mut var_98: i128 = var_80;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
    {
        let mut var_70: *mut i128 = &var_98;
        let var_68_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h52a3e481c4252974;
        let mut var_38: *mut *mut [i8; 0xe1] = &data_c817f8;
        let var_30_1: i64 = 1;
        let var_18_1: i64 = 0;
        let var_28_1: *mut *mut i128 = &var_70;
        let var_20_1: i64 = 1;
        let rax_3: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81808);
        let mut var_60: *const i8 = "alacritty::clipboardUnable to lo…";
        let var_58_1: i64 = 0x14;
        let var_50_1: *const i8 = "alacritty::clipboardUnable to lo…";
        let var_48_1: i64 = 0x14;
        let var_40_1: i64 = rax_3;
        log::__private_api::log::h0b6680b994d742b1(&var_38, 4, &var_60);
    }
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::hb4ed18f0e6501183(&var_98)
}
