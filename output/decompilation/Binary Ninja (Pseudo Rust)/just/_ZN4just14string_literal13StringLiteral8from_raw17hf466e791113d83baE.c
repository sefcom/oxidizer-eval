
  fn just::string_literal::StringLiteral::from_raw::hf466e791113d83ba(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let result: i64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(arg1, arg2, arg3);
    *arg1.byte_offset(0x2a) = 0;
    arg1[5] = 0x200;
    arg1[3] = arg2;
    arg1[4] = arg3;
    result
}
