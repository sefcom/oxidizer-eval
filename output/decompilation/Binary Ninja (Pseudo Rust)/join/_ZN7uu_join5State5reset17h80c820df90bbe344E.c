
  fn uu_join::State::reset::h80c820df90bbe344(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let rdi: *mut i64 = arg1[1];
    let rsi: i64 = arg1[2];
    arg1[2] = 0;
    let result: *mut i128 =
        core::ptr::drop_in_place$LT$$u5b$uu_join..Line$u5d$$GT$::h7063c6a704fef728(rdi, rsi);
    
    if *arg2 == -0x8000000000000000
    {
        return result;
    }
    
    let var_28_1: i128 = *arg2.byte_offset(0x20);
    let var_38_1: i128 = *arg2.byte_offset(0x10);
    let mut var_48: i128 = *arg2;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h8d118758e449cd1f(arg1, &var_48)
}
