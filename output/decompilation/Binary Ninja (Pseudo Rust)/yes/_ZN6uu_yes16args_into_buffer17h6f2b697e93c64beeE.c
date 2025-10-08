
  fn uu_yes::args_into_buffer::h6f2b697e93c64bee(arg1: *mut i64, arg2: *mut i64) -> i64

{
    if *arg2 == 0
    {
        /* tailcall */
        return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h4aa797f0d174754d(arg1, "y\n", &data_41719b[0xa3]);
    }
    
    let mut var_58: ();
    core::iter::traits::iterator::Iterator::map::h85e126f28116e081(&var_58, arg2);
    let mut var_c0: ();
    itertools::free::intersperse::h6224ce86375bb11f(&var_c0, &var_58);
    let mut i: i64;
    let mut rdx: i64;
    i = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfa08dc8a2341c4e0(&var_c0);
    
    while i != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h4aa797f0d174754d(arg1, i, rdx + i);
        i = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfa08dc8a2341c4e0(&var_c0);
    }
    
    /* tailcall */
    alloc::vec::Vec$LT$T$C$A$GT$::push::h82ca3c1e4aaf20e1(arg1)
}
