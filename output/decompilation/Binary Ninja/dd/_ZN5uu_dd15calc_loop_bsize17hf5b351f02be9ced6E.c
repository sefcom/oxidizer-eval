
  int64_t uu_dd::calc_loop_bsize::hf5b351f02be9ced6(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    if (arg1 == 2)
        return arg8;
    
    if (!(arg1 & 1))
        /* tailcall */
        return core::cmp::Ord::min::h1162548a3a8ea989(arg8, (arg2 - (arg3 + arg4)) * arg7);
    
    return core::cmp::Ord::min::h84bf08038dadaa19(arg8, 0, arg2 - arg5, 0 - arg6);
}
