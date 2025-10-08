
  fn uu_mknod::parse_type::h7d6922ce34f49271(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut var_28: i64 = arg2;
    let var_20: i64 = arg2 + arg3;
    let mut rax_1: i8;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::hb663aabe38a54c14(&var_28, arg1);
    
    if (rax_1 & 1) != 0
    {
        /* tailcall */
        return uu_mknod::parse_type::_$u7b$$u7b$closure$u7d$$u7d$::h6540ee980b2a8f73(arg1, arg2, 
            arg3, rdx);
    }
    
    let mut result_1: i64;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7e6cafe721babae1(&result_1, "missing device typeinvalid devic…", 0x13);
    let result: i64 = result_1;
    let var_2c: i32;
    *(arg1 + 0x14) = var_2c;
    let var_34: i64;
    *(arg1 + 0xc) = var_34;
    *arg1 = result;
    let var_38: i32;
    *(arg1 + 8) = var_38;
    result
}
