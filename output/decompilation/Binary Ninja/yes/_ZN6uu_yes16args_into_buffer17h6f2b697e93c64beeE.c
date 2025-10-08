
  int64_t uu_yes::args_into_buffer::h6f2b697e93c64bee(int64_t* arg1, int64_t* arg2)

{
    if (!*arg2)
        /* tailcall */
        return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h4aa797f0d174754d(arg1, "y\n", &data_41719b[0xa3]);
    
    void var_58;
    core::iter::traits::iterator::Iterator::map::h85e126f28116e081(&var_58, arg2);
    void var_c0;
    itertools::free::intersperse::h6224ce86375bb11f(&var_c0, &var_58);
    int64_t i;
    int64_t rdx;
    i = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfa08dc8a2341c4e0(&var_c0);
    
    while (i)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h4aa797f0d174754d(arg1, i, rdx + i);
        i = _$LT$itertools..intersperse..IntersperseWith$LT$I$C$ElemF$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfa08dc8a2341c4e0(&var_c0);
    }
    
    /* tailcall */
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h82ca3c1e4aaf20e1(arg1);
}
