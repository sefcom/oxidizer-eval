
  fn uu_seq::done_printing::h3afd308e88daff24(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_50: ();
    _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$num_traits..identities..Zero$GT$::zero::h4f643d68bc816ae7(&var_50);
    let rax: bool = core::cmp::PartialOrd::ge::ha62e7af76bf65c27(arg2, &var_50);
    core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_50);
    
    if rax == 0
    {
        return core::cmp::PartialOrd::lt::hdb41ac1001bf6e1a(arg1, arg3);
    }
    
    core::cmp::PartialOrd::gt::h2d167f4b16cd27b2(arg1, arg3)
}
