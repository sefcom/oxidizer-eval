
  fn uu_env::split_iterator::SplitIterator::state_root::ha7ad7ed6584dc219(arg1: *mut i32, arg2: *mut i128) -> i64

{
    let mut var_40: i32;
    let mut rax_1: i32;
    
    loop
    {
        uu_env::split_iterator::SplitIterator::state_delimiter::hcb2808b02d57ed1b(&var_40, arg2);
        rax_1 = var_40;
        
        if rax_1 != 7
        {
            break;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..parse_error..ParseError$GT$$GT$::ha3cb64f13c33686f(&var_40);
    }
    
    if rax_1 == 6
    {
        *arg1 = 8;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_env..parse_error..ParseError$GT$$GT$::ha3cb64f13c33686f(&var_40);
    }
    
    let result: i64;
    *arg1.byte_offset(0x20) = result;
    let zmm0_1: i128 = var_40;
    let var_30: i128;
    *arg1.byte_offset(0x10) = var_30;
    *arg1 = zmm0_1;
    result
}
