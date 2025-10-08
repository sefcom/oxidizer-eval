
  fn alacritty::config::window::WindowConfig::dimensions::haf3977d8823bad6d(arg1: *mut i64, arg2: i64, arg3: i64) -> bool

{
    let rax: bool = arg2 != 0;
    
    if (rax & arg3 != 0) != 0
    {
        arg1[1] = arg2;
        arg1[2] = arg3;
        *arg1 = 1;
        return rax;
    }
    
    let rax_2: i64 = arg3 | arg2;
    
    if rax_2 == 0
    {
        *arg1 = 0;
        return rax_2;
    }
    
    let mut rax_3: i64;
    rax_3 = arg3 == 0;
    let mut rdi: *const i8 = "linesdisplay_offset/home/34r7hm4…";
    let mut r9: *const i8 = "columnslinesdisplay_offset/home/…";
    
    if arg3 == 0
    {
        r9 = "linesdisplay_offset/home/34r7hm4…";
    }
    
    let mut rcx_1: i64;
    rcx_1 = arg3 != 0;
    
    if arg3 == 0
    {
        rdi = "columnslinesdisplay_offset/home/…";
    }
    
    if arg3 != 0
    {
        arg2 = arg3;
    }
    
    let mut var_b0: *const i8 = r9;
    let var_a8: i64 = rcx_1 * 2 + 5;
    let mut var_a0: *const i8 = rdi;
    let var_98: i64 = rax_3 * 2 + 5;
    let mut var_b8: i64 = arg2;
    let mut rax_5: i64 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    
    if rax_5 > 1
    {
        let mut var_68: *const *const i8 = &var_b0;
        let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        let var_58_1: *const *const i8 = &var_a0;
        let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        let var_48_1: *mut i64 = &var_b8;
        let var_40_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let mut var_38: *mut *mut c_void = &data_c81b80;
        let var_30_1: i64 = 3;
        let var_18_1: i64 = 0;
        let var_28_1: *mut *const *const i8 = &var_68;
        let var_20_1: i64 = 3;
        let rax_6: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81bb0);
        let mut var_90: *mut c_void = "alacritty_config_derivealacritty…";
        let var_88_1: i64 = 0x17;
        let var_80_1: *const i8 = "alacritty::config::windowAlacrit…";
        let var_78_1: i64 = 0x19;
        let var_70_1: i64 = rax_6;
        rax_5 = log::__private_api::log::h0b6680b994d742b1(&var_38, 2, &var_90);
    }
    
    *arg1 = 0;
    rax_5
}
