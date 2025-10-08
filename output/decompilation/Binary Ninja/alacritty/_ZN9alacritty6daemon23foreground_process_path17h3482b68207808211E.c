
  uint64_t alacritty::daemon::foreground_process_path::h3482b68207808211(void*** arg1, int32_t arg2, pid_t arg3)

{
    pid_t rbp = arg3;
    pid_t rax;
    uint64_t rdx;
    rax = tcgetpgrp(arg2);
    
    if (rax >= 0)
        rbp = rax;
    
    pid_t var_74 = rbp;
    pid_t* var_40 = &var_74;
    uint64_t (* var_38)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    void** const var_70 = &data_c81fa0;
    uint64_t result_1 = 2;
    int64_t var_50 = 0;
    pid_t** var_60 = &var_40;
    int64_t var_58 = 1;
    void var_30;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_30, 0, rdx, &var_70);
    std::fs::read_link::h26201e9301c7092e(&var_70, &var_30);
    void** const r14 = var_70;
    uint64_t result = result_1;
    pid_t** rcx_3;
    
    if (-(r14) != -0x8000000000000000)
        rcx_3 = var_60;
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(result);
        rcx_3 = &data_c7a2e8;
    }
    
    arg1[1] = result;
    arg1[2] = rcx_3;
    *arg1 = r14;
    return result;
}
