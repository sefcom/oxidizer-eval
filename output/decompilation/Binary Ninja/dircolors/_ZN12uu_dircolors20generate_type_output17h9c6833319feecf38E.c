
  int128_t* uu_dircolors::generate_type_output::h9c6833319feecf38(int128_t* arg1, char* arg2)

{
    void var_38;
    int128_t var_20;
    void** var_30;
    int64_t var_28;
    
    if (*arg2 != 2)
    {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h64863869581a35cc(&var_38, &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431, 
            &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431);
        alloc::str::join_generic_copy::hc84b2afb154a6337(&var_20, var_30, var_28, 
            ":=*\x1b[m\t0.0.28Output commands…", 1);
    }
    else
    {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h36327dbd81d24b1d(&var_38, &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431, 
            &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431);
        alloc::str::join_generic_copy::hc84b2afb154a6337(&var_20, var_30, var_28, 
            "\n:=*\x1b[m\t0.0.28Output comman…", 1);
    }
    int64_t var_10;
    arg1[1] = var_10;
    *arg1 = var_20;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h344034719bce8318(
        &var_38);
    return arg1;
}
