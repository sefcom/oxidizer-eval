
  int64_t uu_tail::follow::files::FileHandling::needs_header::h44ee2212a23b7f03(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (!arg4)
        return 0;
    
    int64_t result;
    result = 1;
    
    if (*arg1 != -0x8000000000000000)
    {
        int64_t result_1 = result;
        result = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h18d1c3f7aa59eb02(arg1[1], arg1[2], arg2, arg3) ^ 1;
    }
    
    return result;
}
