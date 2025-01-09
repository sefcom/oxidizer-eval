long long uu_dircolors::generate_type_output::h9c6833319feecf38(struct_0 *a0, char *a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x10]

    if (*(a1) != 2)
    {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h64863869581a35cc(&v0, &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431, &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431);
        alloc::str::join_generic_copy::hc84b2afb154a6337(&v3, *((long long *)&v1), *((long long *)&v2), ":=", 1);
    }
    else
    {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h36327dbd81d24b1d(&v0, &anon.84df56382e2e566cd8a063a5d0153d3b.97.llvm.4004663911042702431, &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431);
        alloc::str::join_generic_copy::hc84b2afb154a6337(&v3, *((long long *)&v1), *((long long *)&v2), "\n", 1);
    }
    a0->field_10 = *((long long *)&v4);
    a0->field_0 = *((int128_t *)&v3);
    ::0x4babc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h344034719bce8318(&v0);
    return a0;
}
