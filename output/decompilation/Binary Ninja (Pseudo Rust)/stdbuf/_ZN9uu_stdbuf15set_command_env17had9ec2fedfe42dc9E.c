
  fn uu_stdbuf::set_command_env::had9ec2fedfe42dc9(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut c_void

{
    let result: *mut c_void = *arg4;
    
    if result == 0
    {
        return result;
    }
    
    if result == 1
    {
        /* tailcall */
        return std::process::Command::env::h5fe849bcf5f1d545(arg1, arg2);
    }
    
    let mut var_4c: ();
    let mut rax_2: i64;
    let mut rdx_1: u64;
    rax_2 =
        core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg4[1], &var_4c, 0x14);
    let mut var_38: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1f3fa2d8817656ee(&var_38, rax_2, rdx_1);
    std::process::Command::env::h1c373d51c7e82eea(arg1, arg2, arg3, &var_38)
}
