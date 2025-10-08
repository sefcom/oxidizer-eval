
  fn uu_df::filesystem::is_over_mounted::he031024296dde685(arg1: i64, arg2: i64, arg3: *mut c_void) -> i64

{
    let mut var_20: i64 = arg1;
    let var_18: i64 = arg2 * 0x98 + arg1;
    let mut var_10: *mut c_void = arg3;
    let rax_2: *mut c_void =
        core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::h0447a209abcf8cc8(
        &var_20, &var_10);
    
    if rax_2 == 0
    {
        return 0;
    }
    
    alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(*rax_2.byte_offset(0x20), *rax_2.byte_offset(0x28), *arg3.byte_offset(0x20), 
        *arg3.byte_offset(0x28)) ^ 1
}
