
  fn uu_dircolors::generate_type_output::h9c6833319feecf38(arg1: *mut i128, arg2: *mut i8) -> *mut i128

{
    let mut var_38: ();
    let mut var_20: i128;
    let var_30: *mut *mut c_void;
    let var_28: i64;
    
    if *arg2 != 2
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
    let var_10: i64;
    arg1[1] = var_10;
    *arg1 = var_20;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h344034719bce8318(
        &var_38);
    arg1
}
