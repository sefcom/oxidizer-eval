
  int128_t* uu_cp::aligned_ancestors::h4cf131ef21f6aa74(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    void var_a8;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha9a51cff601b0b6f(&var_a8, arg2);
    void var_90;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha9a51cff601b0b6f(&var_90, arg4);
    int64_t var_a0;
    int64_t var_98;
    int64_t rax;
    int64_t rdx_2;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he83a069ad3b6613e(1, var_98 - 1, var_a0, var_98);
    int64_t var_78 = 1;
    int64_t var_70 = rdx_2;
    char var_68 = 0;
    int64_t var_88;
    int64_t var_80;
    int64_t rax_1;
    int64_t rdx_4;
    rax_1 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hce3f4665478ff52e(&var_78, var_88, var_80);
    int64_t var_c0 = 0;
    int64_t var_b8 = 8;
    int64_t var_b0 = 0;
    core::iter::traits::iterator::Iterator::zip::hb514995cb38ea568(&var_78, rax, 
        (rdx_2 << 4) + rax, rax_1);
    int128_t* i;
    int128_t* rdx_6;
    i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h0c852af8ce20f45a(&var_78);
    
    while (i)
    {
        int128_t zmm1_1 = *rdx_6;
        int128_t var_40 = *i;
        int128_t var_30_1 = zmm1_1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1a85c61530c4026e(&var_c0, &var_40);
        i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h0c852af8ce20f45a(&var_78);
    }
    
    arg1[1] = var_b0;
    *arg1 = var_c0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::hdc1f49bdf38a06e8(
        &var_90);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::hdc1f49bdf38a06e8(
        &var_a8);
    return arg1;
}
