
  fn fd::cli::parse_millis::h0d0f5cf5382a6144(arg1: *mut i8, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_18: i8;
    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_18, arg2, arg3);
    
    if var_18 == 1
    {
        let var_17: i8;
        *arg1 = var_17;
        *arg1.byte_offset(8) = 0x3b9aca00;
        return var_17;
    }
    
    let var_10: i64;
    let rdx_1: u64 = var_10 / 0x3e8;
    let rax_5: i32 = (var_10 - rdx_1 * 0x3e8) * 0xf4240;
    *arg1 = rdx_1;
    *arg1.byte_offset(8) = rax_5;
    rax_5
}
