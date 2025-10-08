
  fn rg::flags::parse::jaccard_index::hd9a913bae41cbb90(arg1: *mut i64, arg2: *mut i64) -> [u64; 0x2]

{
    let mut var_b8: ();
    alloc::collections::btree::set::BTreeSet$LT$T$C$A$GT$::union::hb196e318fe48abf4(&var_b8, arg1, 
        arg2);
    let mut rax: i64;
    let mut zmm0: [u64; 0x2];
    rax = core::iter::traits::iterator::Iterator::fold::h8bd2d4f92aca02ce(&var_b8);
    
    if rax >> 0x20 == 0
    {
        core::result::Result$LT$T$C$E$GT$::expect::h42251a411691c9f3(0);
        zmm0[0] = rax;
    }
    else
    {
        core::result::Result$LT$T$C$E$GT$::expect::h42251a411691c9f3(1);
        zmm0 = _mm_xor_pd(zmm0, zmm0);
    }
    
    alloc::collections::btree::set::BTreeSet$LT$T$C$A$GT$::intersection::h90b0a819f1786a11(&var_b8, 
        arg1, arg2);
    let mut rax_2: i64;
    let mut result: [u64; 0x2];
    rax_2 = core::iter::traits::iterator::Iterator::fold::h0df12baa6eff8548(&var_b8);
    
    if rax_2 >> 0x20 == 0
    {
        core::result::Result$LT$T$C$E$GT$::expect::h42251a411691c9f3(0);
        result = {0};
        result[0] = rax_2;
    }
    else
    {
        core::result::Result$LT$T$C$E$GT$::expect::h42251a411691c9f3(1);
        result = _mm_xor_pd(result, result);
    }
    
    result[0] = result[0] / zmm0;
    result
}
