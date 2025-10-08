
  fn uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_a8: i64;
    core::iter::traits::iterator::Iterator::collect::heb38e31adf96ce37(&var_a8, arg2);
    let mut var_90: i64;
    core::iter::traits::iterator::Iterator::collect::heb38e31adf96ce37(&var_90, arg4);
    let var_a0: i64;
    let var_98: i64;
    let mut rax: i64;
    let mut rdx_2: i64;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd08b9cd1821d2b58(1, var_98 - 1, var_a0, var_98);
    let mut var_78: i64 = 1;
    let var_70: i64 = rdx_2;
    let var_68: i8 = 0;
    let var_88: i64;
    let var_80: i64;
    let mut rax_1: i64;
    let mut rdx_4: i64;
    rax_1 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hb683b9b3d8ee793f(&var_78, var_88, var_80);
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 8;
    let var_b0: i64 = 0;
    core::iter::traits::iterator::Iterator::zip::h84d8d8ae872bd595(&var_78, rax, 
        (rdx_2 << 4) + rax, rax_1);
    let mut i: *mut i128;
    let mut rdx_6: *mut i128;
    i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h0d9f1cecca08572c(&var_78);
    
    while i != 0
    {
        let zmm1_1: i128 = *rdx_6;
        let mut var_40: i128 = *i;
        let var_30_1: i128 = zmm1_1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h73cc691693fef28d(&var_c0, &var_40);
        i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h0d9f1cecca08572c(&var_78);
    }
    
    arg1[1] = var_b0;
    *arg1 = var_c0;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::hdbbfa47157db735d(
        var_90, var_88);
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::hdbbfa47157db735d(
        var_a8, var_a0)
}
