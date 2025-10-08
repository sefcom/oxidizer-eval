
  int64_t uu_fmt::linebreak::build_best_path::h2478ba822abd2f37(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t result_1 = arg4;
    int64_t var_28 = arg2;
    int64_t var_20 = arg3;
    int64_t* rax_1 = core::iter::traits::iterator::Iterator::reduce::hf511ac305ff78914(&result_1);
    int64_t result;
    
    if (!rax_1)
    {
        arg1[1] = 8;
        arg1[2] = 0;
        result = 0;
    }
    else
    {
        uu_fmt::linebreak::build_best_path::_$u7b$$u7b$closure$u7d$$u7d$::hea9180484d448bba(
            &result_1, arg2, arg3, *rax_1);
        result = result_1;
        *(arg1 + 8) = (arg4 + (arg5 << 3));
    }
    
    *arg1 = result;
    return result;
}
