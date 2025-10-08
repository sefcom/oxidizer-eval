
  int64_t fd::fmt::input::dirname::h900660a28c19a669(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    char* rax;
    uint64_t rdx;
    rax = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    
    if (!rax)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc59efc0c75b13120(arg1, arg2, arg3);
    
    int64_t result_1;
    fd::fmt::input::dirname::_$u7b$$u7b$closure$u7d$$u7d$::h7ae02f47012d85de(&result_1, rax, rdx);
    int64_t result = result_1;
    int128_t var_28;
    *(arg1 + 8) = var_28;
    *arg1 = result;
    return result;
}
