
  fn uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if arg1 == 0
    {
        /* tailcall */
        return core::cmp::min_by::h3a5b4e3765dbfb91(arg8, (arg2 - (arg3 + arg4)) * arg7);
    }
    
    if arg1 != 1
    {
        return arg8;
    }
    
    core::cmp::min_by::h39295d55eac2d5ec(arg8, 0, arg2 - arg5, 0 - arg6)
}
