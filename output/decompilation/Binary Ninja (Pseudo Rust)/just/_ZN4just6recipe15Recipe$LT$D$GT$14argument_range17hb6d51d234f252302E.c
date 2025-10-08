
  fn just::recipe::Recipe$LT$D$GT$::argument_range::hb6d51d234f252302(arg1: *mut i64, arg2: *mut i32, arg3: i64) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let rax_1: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hca6170881fec0ef2(arg2, (arg3 * 0xd0).byte_offset(arg2));
    let result: i64 = just::recipe::Recipe$LT$D$GT$::max_arguments::h4d291109c050f382(arg2, arg3);
    *arg1 = rax_1;
    arg1[1] = result;
    arg1[2] = 0;
    result
}
