
  fn uu_env::split_iterator::SplitIterator::state_root::hc4d795535555f919(arg1: *mut i32, arg2: *mut i128) -> i64

{
    let mut var_40: i32;
    let mut rax_1: i32;
    
    loop
    {
        uu_env::split_iterator::SplitIterator::state_delimiter::h3f5e69fc26e62c64(&var_40, arg2);
        rax_1 = var_40;
        
        if rax_1 != 0xa
        {
            break;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..EnvError$GT$$GT$::h8fbf1f0c88d0d0d5(&var_40);
    }
    
    if rax_1 == 9
    {
        *arg1 = 0xc;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..EnvError$GT$$GT$::h8fbf1f0c88d0d0d5(&var_40);
    }
    
    let result: i64;
    *arg1.byte_offset(0x20) = result;
    let zmm0_1: i128 = var_40;
    let var_30: i128;
    *arg1.byte_offset(0x10) = var_30;
    *arg1 = zmm0_1;
    result
}
