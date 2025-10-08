
  fn uu_join::State::reset::hf11a3d581915b2af(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rdi: *mut i64 = arg1[1];
    let rsi: i64 = arg1[2];
    arg1[2] = 0;
    let result: i64 =
        core::ptr::drop_in_place$LT$$u5b$uu_join..Line$u5d$$GT$::h87a13497c0ddc073(rdi, rsi);
    
    if !(0 + -(*arg2))
    {
        /* tailcall */
        return alloc::vec::Vec$LT$T$C$A$GT$::push::he2e51fac3c0fc166(arg1, arg2);
    }
    
    result
}
