
  fn uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(arg1: *mut c_void, arg2: *mut i64, arg3: i64, arg4: i32) -> i64

{
    if arg4 != 0
    {
        return 0;
    }
    
    let result: i64 = arg2[6];
    
    if *arg2 == 0
    {
        return result;
    }
    
    let rdi: i64 = *arg1.byte_offset(0x40);
    
    if rdi == 0
    {
        let result_1: i64 = result;
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
        /* no return */
    }
    
    let rax_2: i64 = arg2[1] + arg3;
    let mut rcx_3: u64;
    
    if (rax_2 | rdi) >> 0x20 == 0
    {
        rcx_3 = COMBINE(0, rax_2) / rdi;
    }
    else
    {
        rcx_3 = COMBINE(0, rax_2) / rdi;
    }
    
    result - arg3 + (rcx_3 + 1) * rdi
}
