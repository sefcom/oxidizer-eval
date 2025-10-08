
  fn fd::fmt::input::dirname::h900660a28c19a669(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    
    if rax == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(arg1, arg2, arg3);
    }
    
    let mut result_1: i64;
    fd::fmt::input::dirname::_$u7b$$u7b$closure$u7d$$u7d$::h7ae02f47012d85de(&result_1, rax, rdx);
    let result: i64 = result_1;
    let var_28: i128;
    *arg1.byte_offset(8) = var_28;
    *arg1 = result;
    result
}
