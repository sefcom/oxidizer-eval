
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search::ha6facf63bfe45bdc(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_70: i32;
    let rcx: i32;
    let rdx: i64;
    let rsi: *mut c_void;
    let r8: i64;
    let r9: i32;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_internal::h6112248bcc16e983(&var_70, rsi, rdx, rcx, r8, r9, arg2);
    let result: *mut i64;
    
    if var_70 != 2
    {
        arg1[2] = result;
        *arg1 = var_70;
        return result;
    }
    
    let var_68: i64;
    let mut r14_1: i64 = var_68;
    let mut var_a8: i64 = r14_1;
    let mut var_98: *const i8;
    let mut var_58: *mut *mut c_void;
    let mut var_40: i128;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 2
    {
        var_58 = &data_c779e0;
        let var_50_1: i64 = 1;
        let var_48_1: i64 = 8;
        var_40 = {0};
        let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c77a00);
        var_98 = "alacritty_terminal::term::search…";
        let var_90_1: i64 = 0x20;
        let var_88_1: *const i8 = "alacritty_terminal::term::search…";
        let var_80_1: i64 = 0x20;
        let var_78_1: i64 = rax_2;
        log::__private_api::log::h0b6680b994d742b1(&var_58, 2, &var_98);
    }
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
    {
        let mut var_28: *mut i64 = &var_a8;
        let var_20_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h52a3e481c4252974;
        var_58 = &data_c779f0;
        let var_50_2: i64 = 1;
        *var_40[8] = 0;
        let var_48_2: *mut *mut i64 = &var_28;
        var_40 = 1;
        let rax_4: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c77a18);
        var_98 = "alacritty_terminal::term::search…";
        let var_90_2: i64 = 0x20;
        let var_88_2: *const i8 = "alacritty_terminal::term::search…";
        let var_80_2: i64 = 0x20;
        let var_78_2: i64 = rax_4;
        log::__private_api::log::h0b6680b994d742b1(&var_58, 4, &var_98);
        r14_1 = var_a8;
    }
    
    *arg1 = 0;
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3d4788587f1a236c(r14_1, result)
}
