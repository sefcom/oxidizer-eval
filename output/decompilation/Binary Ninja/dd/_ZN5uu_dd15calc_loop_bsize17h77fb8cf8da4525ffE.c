
  int64_t uu_dd::calc_loop_bsize::h77fb8cf8da4525ff(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    if (!arg1)
        /* tailcall */
        return core::cmp::min_by::h3a5b4e3765dbfb91(arg8, (arg2 - (arg3 + arg4)) * arg7);
    
    if (arg1 != 1)
        return arg8;
    
    return core::cmp::min_by::h39295d55eac2d5ec(arg8, 0, arg2 - arg5, 0 - arg6);
}
