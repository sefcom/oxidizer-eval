
  fn uu_cut::cut_bytes::h04bd5adc21115d76(arg1: i64, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i128

{
    let mut var_68: i64 = arg2;
    let var_60: i64 = arg3;
    let rbp: i8 = arg4[5];
    let mut var_b1: i8 = rbp;
    let mut var_58: i64;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4328c6376c0b9efb(&var_58, 
        0x2000, arg1);
    let mut rax_1: *mut i128;
    let mut rdx_1: *mut i64;
    rax_1 = uu_cut::stdout_writer::h8d13c8405537874a();
    let mut var_b0: *mut i128 = rax_1;
    let rax_2: *mut i8 = *arg4;
    let mut rcx: i64 = 1;
    
    if rax_2 != 0
    {
        rcx = arg4[1];
    }
    
    let mut rdx_2: *const i8 = "\t-: \n: Is a directory\ndelimit…";
    
    if rax_2 != 0
    {
        rdx_2 = rax_2;
    }
    
    let mut var_98: *mut i64 = &var_68;
    let var_90: *mut *mut i128 = &var_b0;
    let var_88: *const i8 = rdx_2;
    let mut var_80: i64 = rcx;
    let var_78: *mut i64 = arg4;
    let var_70: *mut i8 = &var_b1;
    let mut rax_3: i64;
    let mut rdx_4: i64;
    rax_3 = bstr::io::BufReadExt::for_byte_record::h9b427090c1d4a37e(&var_58, rbp, &var_98);
    let var_50: i64;
    
    if rax_3 == 0
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_b0, rdx_1);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h2e5ef2ccf1fc6755(var_58, var_50);
        return nullptr;
    }
    
    let mut var_a0: i64 = rax_3;
    let mut var_28: i128;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&var_28, &var_a0, 
        rdx_4);
    var_80 = 1;
    var_98 = var_28;
    let var_18: i64;
    let var_88_1: i64 = var_18;
    let result: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&var_98);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(var_a0);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_b0, rdx_1);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h2e5ef2ccf1fc6755(var_58, var_50);
    result
}
