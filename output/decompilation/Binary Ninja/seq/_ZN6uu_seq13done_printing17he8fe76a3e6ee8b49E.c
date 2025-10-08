
  int64_t uu_seq::done_printing::he8fe76a3e6ee8b49(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t var_50;
    _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$num_traits..identities..Zero$GT$::zero::hb293fbd21ab567d0(&var_50);
    bool rax = core::cmp::PartialOrd::ge::hc497c7e4cdd4f8b8(arg2, &var_50);
    int64_t var_48;
    core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_50, var_48);
    
    if (!rax)
        return core::cmp::PartialOrd::lt::h6f60e0b8255b0449(arg1, arg3);
    
    return core::cmp::PartialOrd::gt::hf14522079f787b61(arg1, arg3);
}
