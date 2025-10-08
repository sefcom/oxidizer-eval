
  fn uu_seq::done_printing::he8fe76a3e6ee8b49(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_50: i64;
    _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$num_traits..identities..Zero$GT$::zero::hb293fbd21ab567d0(&var_50);
    let rax: bool = core::cmp::PartialOrd::ge::hc497c7e4cdd4f8b8(arg2, &var_50);
    let var_48: i64;
    core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_50, var_48);
    
    if rax == 0
    {
        return core::cmp::PartialOrd::lt::h6f60e0b8255b0449(arg1, arg3);
    }
    
    core::cmp::PartialOrd::gt::hf14522079f787b61(arg1, arg3)
}
