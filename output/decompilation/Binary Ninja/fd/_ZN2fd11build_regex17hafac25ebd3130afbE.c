
  int64_t fd::build_regex::hafac25ebd3130afb(int128_t* arg1, int64_t* arg2, char arg3)

{
    char var_23 = arg3 ^ 1;
    char var_21 = 1;
    int64_t var_f8;
    void var_c0;
    regex::builders::bytes::RegexBuilder::build::h23923507195ef952(&var_f8, &var_c0, 
        regex::builders::bytes::RegexBuilder::new::h2f32573bd11b65d4(&var_c0, arg2[1]));
    int128_t var_f0;
    
    if (!var_f8)
    {
        int64_t var_e0;
        int64_t var_c8_1 = var_e0;
        int128_t var_d8 = var_f0;
        *(arg1 + 8) = fd::build_regex::_$u7b$$u7b$closure$u7d$$u7d$::h05e71917cf7509f8(&var_d8);
        *arg1 = 0;
    }
    else
    {
        int128_t zmm0 = var_f8;
        arg1[1] = var_f0;
        *arg1 = zmm0;
    }
    core::ptr::drop_in_place$LT$regex..builders..bytes..RegexBuilder$GT$::h884a6b40962375bb(
        &var_c0);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(arg2);
}
