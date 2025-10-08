
  fn uu_dd::calc_loop_bsize::hf5b351f02be9ced6(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if arg1 == 2
    {
        return arg8;
    }
    
    if (arg1 & 1) == 0
    {
        /* tailcall */
        return core::cmp::Ord::min::h1162548a3a8ea989(arg8, (arg2 - (arg3 + arg4)) * arg7);
    }
    
    core::cmp::Ord::min::h84bf08038dadaa19(arg8, 0, arg2 - arg5, 0 - arg6)
}
