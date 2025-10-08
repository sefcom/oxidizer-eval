
  fn uu_basename::basename::hbc3fde56feb9aca0(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64, arg5: u64) -> *mut i64

{
    let mut r13: i64 = arg2;
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h3730f7e24d6185fc(arg2, arg3);
    let cond:0: bool = rdx != 0;
    
    if rdx == 0
    {
        rdx = arg3;
    }
    
    if cond:0
    {
        r13 = rax;
    }
    
    let mut var_a0: i64;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he971b2aaaca9c129(&var_a0, r13, rdx);
    let r13_1: i64 = var_a0;
    let var_98: i64;
    let var_90: i64;
    std::path::Path::components::hd0346d362206f2e9(&var_a0, var_98, var_90);
    let mut var_60: ();
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h8d3527ff230619be(&var_60, &var_a0);
    core::option::Option$LT$T$GT$::map_or_else::h121bac109a08f39f(arg1, &var_60, arg4, arg5);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb191495a642b50e5(r13_1, var_98);
    arg1
}
