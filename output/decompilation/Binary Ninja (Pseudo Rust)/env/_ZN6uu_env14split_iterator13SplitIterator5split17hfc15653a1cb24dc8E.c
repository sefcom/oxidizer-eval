
  fn uu_env::split_iterator::SplitIterator::split::hfc15653a1cb24dc8(arg1: *mut i32, arg2: *mut i128) -> *mut i32

{
    let mut var_38: i32;
    uu_env::split_iterator::SplitIterator::state_root::hc4d795535555f919(&var_38, arg2);
    
    if var_38 != 0xc
    {
        let var_18: i64;
        *arg1.byte_offset(0x20) = var_18;
        let zmm0: i128 = var_38;
        let var_28: i128;
        *arg1.byte_offset(0x10) = var_28;
        *arg1 = zmm0;
        core::ptr::drop_in_place$LT$uu_env..split_iterator..SplitIterator$GT$::h99564937bce00632(
            arg2);
    }
    else
    {
        *arg1.byte_offset(0x18) = arg2[5];
        *arg1.byte_offset(8) = arg2[4];
        *arg1 = 0xc;
        core::ptr::drop_in_place$LT$std..sys..os_str..bytes..Buf$GT$::he7d5b41560417e9b(*arg2, 
            *arg2.byte_offset(8));
    }
    
    arg1
}
