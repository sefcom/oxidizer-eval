
  fn uu_fmt::linebreak::build_best_path::h2478ba822abd2f37(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut result_1: i64 = arg4;
    let var_28: i64 = arg2;
    let var_20: i64 = arg3;
    let rax_1: *mut i64 =
        core::iter::traits::iterator::Iterator::reduce::hf511ac305ff78914(&result_1);
    let mut result: i64;
    
    if rax_1 == 0
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
        *arg1.byte_offset(8) = (arg4 + (arg5 << 3));
    }
    
    *arg1 = result;
    result
}
