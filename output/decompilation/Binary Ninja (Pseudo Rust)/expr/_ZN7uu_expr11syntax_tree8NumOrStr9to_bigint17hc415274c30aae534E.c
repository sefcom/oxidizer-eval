
  fn uu_expr::syntax_tree::NumOrStr::to_bigint::hc415274c30aae534(arg1: *mut i64, arg2: *mut i64) -> i64

{
    if 0 + -(*arg2)
    {
        /* tailcall */
        return num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::h95b949a2093f4bc3(arg1, arg2[2], arg2[3]);
    }
    
    let var_18: i64 = 0;
    let rbp: i8 = arg2[3];
    let result: i64 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he7c299945dfde9b2(arg1, arg2[1], arg2[2]);
    arg1[3] = rbp;
    result
}
