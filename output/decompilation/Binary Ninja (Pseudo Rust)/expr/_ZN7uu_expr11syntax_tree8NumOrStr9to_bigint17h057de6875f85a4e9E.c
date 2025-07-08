
  fn uu_expr::syntax_tree::NumOrStr::to_bigint::h057de6875f85a4e9(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    if *arg2 == -0x8000000000000000
    {
        /* tailcall */
        return num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::hb9365f03b0604201(arg1, arg2[2], arg2[3]);
    }
    
    let var_18: i64 = -0x8000000000000000;
    let rbp: i8 = arg2[3];
    let result: *mut i64 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68d2728c8bfe0c3e(arg1, arg2);
    arg1[3] = rbp;
    result
}
