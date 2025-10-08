
  fn firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    if !(0 + -(*arg1))
    {
        /* tailcall */
        return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h072175075112b622(arg1, arg2, arg3 + arg2);
    }
    
    let mut var_20: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_20, arg2, arg3);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf8b36c6afb1cf6ed(arg1);
    let result: i64;
    arg1[2] = result;
    *arg1 = var_20;
    result
}
