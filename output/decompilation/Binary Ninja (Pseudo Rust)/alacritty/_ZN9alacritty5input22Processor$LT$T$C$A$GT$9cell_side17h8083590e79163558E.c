
  fn alacritty::input::Processor$LT$T$C$A$GT$::cell_side::h8083590e79163558(arg1: *mut c_void, arg2: i64) -> bool

{
    let mut var_40: ();
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_40, arg1);
    let var_28: f32;
    let rax: i64 = var_28;
    let mut rcx_2: i64 = 0;
    
    if var_28 >= 0f
    {
        rcx_2 = ((var_28 - 9.22337204e+18f) & rax >> 0x3f) | rax;
    }
    
    if var_28 > 1.8446743e+19f
    {
        rcx_2 = -1;
    }
    
    if rcx_2 == 0
    {
        core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
        /* no return */
    }
    
    let var_20: f32;
    let rdx_3: i64 = var_20;
    let mut rdi_3: i64 = ((var_20 - 9.22337204e+18f) & rdx_3 >> 0x3f) | rdx_3;
    
    if var_20 < 0f
    {
        rdi_3 = 0;
    }
    
    if var_20 > 1.8446743e+19f
    {
        rdi_3 = -1;
    }
    
    let mut rax_2: i64 = arg2 - rdi_3;
    
    if arg2 < rdi_3
    {
        rax_2 = 0;
    }
    
    let mut r14: u64;
    
    if (rax_2 | rcx_2) >> 0x20 == 0
    {
        r14 = COMBINE(0, rax_2) % rcx_2;
    }
    else
    {
        r14 = COMBINE(0, rax_2) % rcx_2;
    }
    
    let zmm0: f32 = 0.5f * var_28;
    let rax_5: i64 = zmm0;
    let mut rax_6: i64 = 0;
    
    if zmm0 >= 0f
    {
        rax_6 = ((zmm0 - 9.22337204e+18f) & rax_5 >> 0x3f) | rax_5;
    }
    
    let mut r15: i64 = -1;
    
    if zmm0 <= 1.8446743e+19f
    {
        r15 = rax_6;
    }
    
    let var_30: f32;
    let mut rcx_5: u64;
    let mut zmm0_1: f32;
    rcx_5 = fmodf(var_30 - (var_20 + var_20), var_28);
    let zmm1_1: f32 = var_30 - var_20 - zmm0_1;
    
    if arg2 < 0
    {
        zmm0_1 = (arg2 & 1) | arg2 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
    {
        zmm0_1 = arg2;
    }
    
    rcx_5 = zmm0_1 >= zmm1_1;
    r14 > r15 | rcx_5
}
