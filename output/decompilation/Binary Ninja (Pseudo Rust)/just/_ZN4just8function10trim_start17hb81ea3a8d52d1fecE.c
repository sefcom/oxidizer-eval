
  fn just::function::trim_start::hb81ea3a8d52d1fec(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h646b688298f76263(arg3, arg4);
    let mut var_20: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_20, rax, rdx);
    let var_10: i64;
    arg1[3] = var_10;
    *arg1.byte_offset(8) = var_20;
    *arg1 = 0;
    arg1
}
