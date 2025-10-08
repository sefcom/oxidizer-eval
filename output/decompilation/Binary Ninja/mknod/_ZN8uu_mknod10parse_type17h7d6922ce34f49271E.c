
  int64_t uu_mknod::parse_type::h7d6922ce34f49271(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_28 = arg2;
    int64_t var_20 = arg2 + arg3;
    char rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point::hb663aabe38a54c14(&var_28, arg1);
    
    if (rax_1 & 1)
        /* tailcall */
        return uu_mknod::parse_type::_$u7b$$u7b$closure$u7d$$u7d$::h6540ee980b2a8f73(arg1, arg2, 
            arg3, rdx);
    
    int64_t result_1;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7e6cafe721babae1(&result_1, "missing device typeinvalid devic…", 0x13);
    int64_t result = result_1;
    int32_t var_2c;
    *(arg1 + 0x14) = var_2c;
    int64_t var_34;
    *(arg1 + 0xc) = var_34;
    *arg1 = result;
    int32_t var_38;
    *(arg1 + 8) = var_38;
    return result;
}
