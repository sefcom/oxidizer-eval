
  void* uu_stdbuf::set_command_env::had9ec2fedfe42dc9(void* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    void* result = *arg4;
    
    if (!result)
        return result;
    
    if (result == 1)
        /* tailcall */
        return std::process::Command::env::h5fe849bcf5f1d545(arg1, arg2);
    
    void var_4c;
    int64_t rax_2;
    uint64_t rdx_1;
    rax_2 =
        core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg4[1], &var_4c, 0x14);
    void var_38;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1f3fa2d8817656ee(&var_38, rax_2, rdx_1);
    return std::process::Command::env::h1c373d51c7e82eea(arg1, arg2, arg3, &var_38);
}
