
  int64_t uu_fmt::linebreak::build_best_path::h4613d5d21e8bb56e(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t result_1 = arg4;
    int64_t var_28 = arg2;
    int64_t var_20 = arg3;
    int64_t* rax_1 = core::iter::traits::iterator::Iterator::reduce::h85ec73be1843f734(&result_1);
    int64_t result;
    
    if (!rax_1)
    {
        arg1[1] = 8;
        arg1[2] = 0;
        result = 0;
    }
    else
    {
        uu_fmt::linebreak::build_best_path::_$u7b$$u7b$closure$u7d$$u7d$::h3d0ca2fa363527c2(
            &result_1, arg2, arg3, *rax_1);
        result = result_1;
        *(arg1 + 8) = (arg4 + (arg5 << 3));
    }
    
    *arg1 = result;
    return result;
}
