
  fn uu_od::output_info::OutputInfo::new::h9f07de616650c4c6(arg1: *mut c_void, arg2: i64, arg3: *mut c_void, arg4: i64, arg5: i8) -> *mut c_void

{
    let rbx: *mut c_void = arg3.byte_offset(arg4 * 0x28);
    let rax_1: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h425d9cf3ffc07b0c(arg3, rbx);
    let mut var_38: i64 = rax_1;
    let rax_2: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha7b07264c2196bca(arg3, rbx, &var_38);
    
    if rax_1 == 0
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    let mut rbx_1: u64;
    
    if (rax_1 | arg2) >> 0x20 == 0
    {
        rbx_1 = COMBINE(0, arg2) / rax_1;
    }
    else
    {
        rbx_1 = COMBINE(0, arg2) / rax_1;
    }
    
    uu_od::output_info::OutputInfo::create_spaced_formatter_info::h26a2bd3a02047c8b(arg1, arg3, 
        arg4, rax_1, rax_2);
    *arg1.byte_offset(0x18) = arg2;
    *arg1.byte_offset(0x20) = rbx_1 * rax_2;
    *arg1.byte_offset(0x28) = var_38;
    *arg1.byte_offset(0x30) = arg5;
    arg1
}
