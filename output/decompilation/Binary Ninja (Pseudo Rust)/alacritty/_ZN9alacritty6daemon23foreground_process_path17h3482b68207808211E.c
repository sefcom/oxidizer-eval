
  fn alacritty::daemon::foreground_process_path::h3482b68207808211(arg1: *mut *mut *mut c_void, arg2: i32, arg3: pid_t) -> u64

{
    let mut rbp: pid_t = arg3;
    let mut rax: pid_t;
    let mut rdx: u64;
    rax = tcgetpgrp(arg2);
    
    if rax >= 0
    {
        rbp = rax;
    }
    
    let mut var_74: pid_t = rbp;
    let mut var_40: *mut pid_t = &var_74;
    let var_38: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    let mut var_70: *mut *mut c_void = &data_c81fa0;
    let result_1: u64 = 2;
    let var_50: i64 = 0;
    let var_60: *mut *mut pid_t = &var_40;
    let var_58: i64 = 1;
    let mut var_30: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_30, 0, rdx, &var_70);
    std::fs::read_link::h26201e9301c7092e(&var_70, &var_30);
    let r14: *mut *mut c_void = var_70;
    let mut result: u64 = result_1;
    let mut rcx_3: *mut *mut pid_t;
    
    if -(r14) != -0x8000000000000000
    {
        rcx_3 = var_60;
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(result);
        rcx_3 = &data_c7a2e8;
    }
    
    arg1[1] = result;
    arg1[2] = rcx_3;
    *arg1 = r14;
    result
}
