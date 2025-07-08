
  fn uu_env::split_iterator::SplitIterator::split::hbd91db14676a9a59(arg1: *mut i32, arg2: *mut i128) -> *mut i32

{
    let mut var_38: i32;
    uu_env::split_iterator::SplitIterator::state_root::ha7ad7ed6584dc219(&var_38, arg2);
    
    if var_38 != 8
    {
        let var_18: i64;
        *arg1.byte_offset(0x20) = var_18;
        let zmm0: i128 = var_38;
        let var_28: i128;
        *arg1.byte_offset(0x10) = var_28;
        *arg1 = zmm0;
        core::ptr::drop_in_place$LT$uu_env..split_iterator..SplitIterator$GT$::hd7192570ff598ae0(
            arg2);
    }
    else
    {
        *arg1.byte_offset(0x18) = arg2[5];
        *arg1.byte_offset(8) = arg2[4];
        *arg1 = 8;
        core::ptr::drop_in_place$LT$uu_env..string_expander..StringExpander$GT$::ha4fe71f9740e15f8(
            arg2);
    }
    
    arg1
}
