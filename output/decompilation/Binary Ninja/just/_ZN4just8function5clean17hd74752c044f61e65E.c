
  int64_t* just::function::clean::hd74752c044f61e65(int64_t* arg1, int64_t arg2, int64_t arg3, uint64_t arg4)

{
    void var_20;
    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(
        &var_20, arg3, arg4);
    int32_t var_38;
    char* var_18;
    int64_t var_10;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, var_18, var_10);
    
    if (var_38 == 1)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t var_30;
    uint64_t var_28;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_38, var_30, var_28);
    arg1[3] = var_28;
    *(arg1 + 8) = var_38;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_20);
    return arg1;
}
